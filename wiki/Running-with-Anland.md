# Running with Anland

**Anland** is a standalone Android display server required to run KDE Plasma Mobile on Termux.

## Step 1: Install Anland

You must install the Anland app on your Android device:

👉 **[github.com/lfdevs/anland-termux/releases](https://github.com/lfdevs/anland-termux/releases)**

---

## Step 2: Launch Plasma Mobile

Our patched `plasma-mobile` package includes an integrated `--anland` command-line handler that automatically sets up the environment variables, launches the `anland` display server in the background, and initializes the session inside a `dbus-run-session` wrapper.

To start the session, simply run:

```bash
startplasmamobile --anland
```

### Under the Hood
This single command automatically handles:
1. Creating the required runtime directories (`$TMPDIR/run`, `$TMPDIR/.X11-unix`).
2. Launching `anland` in the background (if it is not already running).
3. Exporting the surfaceless Mesa driver variables (Freedreno/Turnip for Adreno devices).
4. Running the shell environment safely with `dbus-run-session` to avoid startup communication bugs.

---

## Step 3: Launching Hyprland

This one I didn't find out how to start it up on a new environment. Still working on it.
