# Using the APT Repository

Skip building from source — install pre-built experimental packages directly via APT.

> ⚠️ **EXPERIMENTAL**: These packages are patched builds tested for startup success only.

---

## Add the Repository

You can add the repository using our one-line installer script:

```bash
curl -sL https://enderbk.is-cool.dev/anland-repo/install.sh | bash
```

Or configure it manually:

```bash
echo 'deb [trusted=yes] https://enderbk.is-cool.dev/anland-repo stable main' \
  >> $PREFIX/etc/apt/sources.list.d/anland.list
pkg update
```

---

## Install Plasma Mobile

```bash
pkg install plasma-mobile plasma-keyboard plasma-settings
```

This will automatically pull `plasma-nano` as a dependency.

---

## Install Hyprland

```bash
pkg install hyprland
```

This will automatically install all dependencies:
- `libhyprutils`, `libhyprlang`, `libaquamarine`
- `libhyprcursor`, `libhyprgraphics`, `libhyprwire`
- `hyprwayland-scanner`, `libinput`, `libudev-zero`

---

## Available Packages

| Package | Version | Description |
|---------|---------|-------------|
| `plasma-mobile` | `6.4.0-anland-5` | KDE Plasma Mobile shell |
| `plasma-nano` | `6.4.0-anland-5` | KDE Plasma Nano minimal shell base module |
| `plasma-keyboard` | `6.4.0-anland-5` | Plasma virtual keyboard |
| `plasma-settings` | `6.4.0-anland-5` | Plasma settings app |
| `kwin-anland` | `6.7.2` | KWin compositor (Anland patched) |
| `hyprland` | `0.55.0` | Dynamic tiling Wayland compositor |
| `libaquamarine` | `0.12.1` | Hyprland rendering backend |
| `libhyprutils` | `0.13.1` | Hyprland utility library |
| `libhyprlang` | `0.6.8` | Hyprland config language |
| `libhyprcursor` | `0.1.13` | Cursor management |
| `libhyprgraphics` | `0.5.1` | Graphics library |
| `libhyprwire` | `0.3.1` | IPC socket library |
| `hyprwayland-scanner` | `0.4.6` | Wayland protocol scanner |
| `libinput` | `1.27.0` | Input device library |
| `libudev-zero` | `1.0.3` | Minimal udev |
| `libxcb-errors` | `1.0.1` | XCB error helper |
| `tomlplusplus` | `3.4.0` | TOML parser (C++17) |
| `anland` | `5.11.0` | Anland display daemon for Termux |
| `xwayland` | `24.1.12` | XWayland compatibility layer |
| `mesa` | `26.2.0` | Mesa graphics libraries |

---

## Remove the Repository

```bash
rm $PREFIX/etc/apt/sources.list.d/anland.list
pkg update
```

---

**Next:** [[Running-with-Anland]]
