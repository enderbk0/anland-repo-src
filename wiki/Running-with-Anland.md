# Running with Anland

Anland is a standalone display server for Android required to display graphical sessions on non-rooted devices.

## 1. Install Anland

Download and install the latest Anland APK on your device:

👉 **[Anland Releases](https://github.com/lfdevs/anland-termux/releases)**

## 2. Launch Plasma Mobile

Start the display server and launch the desktop session by executing:

```bash
startplasmamobile --anland
```

### Automation Details
The `--anland` argument automates the startup logic:
*   Initializes required directories (`$TMPDIR/run`, `$TMPDIR/.X11-unix`).
*   Spawns `anland` daemon in the background if it is not already running.
*   Sets environment overrides for GPU acceleration (`GBM_BACKEND=openpr`, `GALLIUM_DRIVER=freedreno` etc.).
*   Wraps execution inside `dbus-run-session` to prevent service communication crashes.

## 3. Launching Hyprland

> [!IMPORTANT]
> Running Hyprland on a new environment is not yet resolved. Still working on it.
