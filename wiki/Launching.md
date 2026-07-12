# Launching Sessions

This page documents how to start the graphical sessions compiled from the source tree on your Termux environment.

## 1. Running Plasma Mobile

Plasma Mobile has been patched with the `--anland` argument handler to automate environment setup.

### Starting Session
To launch the compositor and session together, simply run:
```bash
startplasmamobile --anland
```

### Under the Hood
The script automates the following steps:
1.  Creates the runtime directories (`$TMPDIR/run`, etc.).
2.  Starts the `anland` display server in the background (if it is not already running).
3.  Exports the required Mesa environment variables (`GBM_BACKEND=openpr`, etc.) to run on the GPU.
4.  Launches inside a `dbus-run-session` wrapper to prevent D-Bus communication errors.

---

## 2. Launching Hyprland

This one I didn't find out how to start it up on a new environment. Still working on it.
