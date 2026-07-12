# Using the APT Repository

You can install pre-compiled binary packages directly from the Anland Termux repository instead of building them from source.

## Repository Configuration

Add the repository using the automated script:

```bash
curl -sL https://enderbk.is-cool.dev/anland-repo/install.sh | bash
```

Alternatively, add the repository manually:

```bash
echo 'deb [trusted=yes] https://enderbk.is-cool.dev/anland-repo stable main' \
  >> $PREFIX/etc/apt/sources.list.d/anland.list
pkg update
```

## Install Packages

### KDE Plasma Mobile
```bash
pkg install plasma-mobile plasma-keyboard plasma-settings
```

This installs the mobile shell along with `plasma-nano` and other dependencies.

### Hyprland
```bash
pkg install hyprland
```

## Package Directory

| Package Name | Version | Description |
|--------------|---------|-------------|
| `plasma-mobile` | `6.4.0-anland-5` | Main Plasma Mobile shell |
| `plasma-nano` | `6.4.0-anland-5` | Minimal shell base layout |
| `plasma-keyboard` | `6.4.0-anland-5` | Virtual keyboard module |
| `plasma-settings` | `6.4.0-anland-5` | Configuration application |
| `kwin-anland` | `6.7.2` | KWin window manager (Anland patched) |
| `hyprland` | `0.55.0` | Tiling window compositor |
| `libaquamarine` | `0.12.1` | Rendering backend library |
| `libhyprutils` | `0.13.1` | Support utilities |
| `libhyprlang` | `0.6.8` | Configuration syntax parser |
| `libhyprcursor` | `0.1.13` | Cursor rendering engine |
| `libhyprgraphics` | `0.5.1` | Image and drawing backend |
| `libhyprwire` | `0.3.1` | IPC socket handling |
| `hyprwayland-scanner` | `0.4.6` | Protocol code generator |
| `libinput` | `1.27.0` | Pointer/touch event interpreter |
| `libudev-zero` | `1.0.3` | Lightweight udev interface |
| `libxcb-errors` | `1.0.1` | Debugging outputs library |
| `tomlplusplus` | `3.4.0` | Config reader engine |
| `anland` | `5.11.0` | Compositor display daemon |
| `xwayland` | `24.1.12` | X11 application compatibility |
| `mesa` | `26.2.0` | Graphics pipeline drivers |

## Remove the Repository

```bash
rm $PREFIX/etc/apt/sources.list.d/anland.list
pkg update
```
