# KDE Plasma Mobile for Termux

This repository contains the shell components of KDE Plasma Mobile modified to run inside **Termux** on Android using surfaceless Mesa drivers (KGSL/Freedreno) and the `anland` Wayland compositor wrapper.

## Key Termux Fixes Included
- **Shader Bypasses**: Bypasses GPU-heavy shader effects (like `OpacityMask` and offscreen layering caching: `layer.enabled`) that normally crash or fail silently under software/surfaceless Mesa, restoring visible text, status icons, and home screen/app drawer delegates.
- **PulseAudio & NetworkManager Mocks**: Bypasses missing libraries on Android to prevent status bar applet crashes.
- **KWayland leftover stubbed**: Fixes the early-exit app model loading crash.
- **XDG & D-Bus environment exports**: Correctly sets environment directories to register and display installed Android/Termux desktop shortcuts.

## Prerequisites

Before building and running Plasma Mobile, you must set up the base system:
1. **Install KDE Plasma** inside Termux.
2. **Set up Anland**: Follow the instructions at [anland-termux Releases](https://github.com/lfdevs/anland-termux/releases) to install and configure `anland` to run KDE Plasma.
3. Once the base desktop environment runs, proceed with the compilation and launch steps below.

## Setup & Compilation

Ensure you have the KDE compilation tools and dependencies installed in Termux, then run:

```bash
cmake -B build -DCMAKE_INSTALL_PREFIX=$PREFIX
cmake --build build
cmake --install build
```

## Running the Shell

To launch the compositor and session, save the following script as `~/wayland.sh` and make it executable (`chmod +x ~/wayland.sh`):

```bash
#!/data/data/com.termux/files/usr/bin/bash
mkdir -p $TMPDIR/run
chown -R $USER:$USER $TMPDIR/run
chmod -R 700 $TMPDIR/run
mkdir -p $TMPDIR/.X11-unix
chmod 1777 $TMPDIR/.X11-unix

# Kill old sessions
killall -9 plasmashell kwin_wayland kwin_wayland_wrapper startplasma-wayland startplasmamobile plasma_session dbus-daemon dbus-run-session dbus-launch anland > /dev/null 2>&1
sleep 1

# Start wayland socket daemon
anland > /dev/null 2>&1 &

unset DISPLAY
unset PULSE_SERVER
export XDG_RUNTIME_DIR=$TMPDIR/run
export QT_QPA_PLATFORM=wayland XDG_CURRENT_DESKTOP=KDE XDG_SESSION_DESKTOP=KDE
export XDG_MENU_PREFIX="plasma-"
export ANLAND_SOCKET=$TMPDIR/anland/display_daemon.sock ANLAND=1 ANLAND_NO_DRM_DEVICE=1 EGL_PLATFORM=surfaceless

# Enable Freedreno (KGSL) driver for devices with Adreno GPU
export MESA_LOADER_DRIVER_OVERRIDE=kgsl TURNIP_KMD=kgsl GALLIUM_DRIVER=freedreno FD_FORCE_KGSL=1 XWAYLAND_FORCE_KGSL_SURFACELESS=1

rm -f $XDG_RUNTIME_DIR/wayland-* > /dev/null 2>&1
dbus-run-session startplasmamobile > $HOME/plasmamobile.log 2>&1
```

Once executed (`bash ~/wayland.sh`), connect using your Android Wayland viewer app to interact with the shell!

---

## Credits

This project is a modified downstream version of the official **KDE Plasma Mobile** shell. All credits and intellectual property for the original codebase go to the [KDE Community](https://kde.org) and the KDE Plasma Mobile development team.
