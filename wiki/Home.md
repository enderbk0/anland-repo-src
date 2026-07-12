# Welcome to the Anland Source Repo Wiki

This wiki contains documentation for building and launching the patched desktop environments and window managers within the `anland-repo-src` unified source tree for Termux (Android aarch64).

## Navigation

*   [[Building Guide|Building]] — Instructions on how to compile the unified source packages from source.
*   [[Launching Guide|Launching]] — How to run the compiled sessions on your Termux environment.

## Unified Source Tree Structure

*   `hyprland/` — The main Hyprland compositor.
*   `deps/` — Required system libraries and Hyprland ecosystem components (aquamarine, hyprlang, etc.).
*   `plasma/` — Patched KDE Plasma Mobile components:
    *   `plasma-mobile` — The mobile shell.
    *   `plasma-nano` — Minimal shell base module.
    *   `plasma-settings` — Settings application.
    *   `plasma-keyboard` — Virtual keyboard.