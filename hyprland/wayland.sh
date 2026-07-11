#!/data/data/com.termux/files/usr/bin/bash
mkdir -p $TMPDIR/run
chown -R $USER:$USER $TMPDIR/run
chmod -R 700 $TMPDIR/run
mkdir -p $TMPDIR/.X11-unix
chmod 1777 $TMPDIR/.X11-unix
killall -9 plasmashell kwin_wayland kwin_wayland_wrapper startplasma-wayland startplasmamobile plasma_session dbus-daemon dbus-run-session dbus-launch anland Hyprland > /dev/null 2>&1
sleep 1
anland > /dev/null 2>&1 &
unset DISPLAY
unset PULSE_SERVER
export XDG_RUNTIME_DIR=$TMPDIR/run
export QT_QPA_PLATFORM=wayland XDG_CURRENT_DESKTOP=Hyprland XDG_SESSION_DESKTOP=Hyprland
export ANLAND_SOCKET=$TMPDIR/anland/display_daemon.sock ANLAND=1 ANLAND_NO_DRM_DEVICE=1 EGL_PLATFORM=surfaceless

# Enable Freedreno (KGSL) driver for devices with Adreno GPU
export MESA_LOADER_DRIVER_OVERRIDE=kgsl TURNIP_KMD=kgsl GALLIUM_DRIVER=freedreno FD_FORCE_KGSL=1 XWAYLAND_FORCE_KGSL_SURFACELESS=1

rm -f $XDG_RUNTIME_DIR/wayland-* > /dev/null 2>&1
dbus-run-session Hyprland > $HOME/hyprland.log 2>&1
