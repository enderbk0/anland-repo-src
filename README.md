# anland-repo-src

Unified source tree of Hyprland, its dependencies, and KDE Plasma Mobile —
all patched and tested for Termux (Android aarch64).

> ⚠️ **EXPERIMENTAL** — These are patched builds. Only startup success has been confirmed.

---

## Structure

```
anland-repo-src/
├── hyprland/           # Main Hyprland compositor
├── deps/
│   ├── aquamarine/     # Rendering backend
│   ├── hyprcursor/     # Cursor library
│   ├── hyprgraphics/   # Graphics library
│   ├── hyprlang/       # Config language
│   ├── hyprutils/      # Utility library
│   ├── hyprwayland-scanner/  # Wayland protocol scanner
│   ├── hyprwire/       # IPC socket library
│   ├── libinput/       # Input device library
│   ├── libudev-zero/   # Minimal udev implementation
│   ├── libxcb-errors/  # XCB error helper
│   └── tomlplusplus/   # TOML config parser
└── plasma/
    ├── plasma-nano/     # KDE Plasma Nano shell (provides nanoshell module)
    ├── plasma-mobile/   # KDE Plasma Mobile shell
    ├── plasma-keyboard/ # Plasma virtual keyboard
    └── plasma-settings/ # Plasma settings app
```

---

## Credits

All credit goes to the original upstream projects and their contributors:

### Hyprland & Ecosystem
| Project | Author / Org | License | Link |
|---------|-------------|---------|------|
| **Hyprland** | Vaxerski & contributors | BSD-3-Clause | [github.com/hyprwm/Hyprland](https://github.com/hyprwm/Hyprland) |
| **aquamarine** | Vaxerski & contributors | BSD-3-Clause | [github.com/hyprwm/aquamarine](https://github.com/hyprwm/aquamarine) |
| **hyprcursor** | Vaxerski & contributors | BSD-3-Clause | [github.com/hyprwm/hyprcursor](https://github.com/hyprwm/hyprcursor) |
| **hyprgraphics** | Vaxerski & contributors | BSD-3-Clause | [github.com/hyprwm/hyprgraphics](https://github.com/hyprwm/hyprgraphics) |
| **hyprlang** | Vaxerski & contributors | BSD-3-Clause | [github.com/hyprwm/hyprlang](https://github.com/hyprwm/hyprlang) |
| **hyprutils** | Vaxerski & contributors | BSD-3-Clause | [github.com/hyprwm/hyprutils](https://github.com/hyprwm/hyprutils) |
| **hyprwayland-scanner** | Vaxerski & contributors | BSD-3-Clause | [github.com/hyprwm/hyprwayland-scanner](https://github.com/hyprwm/hyprwayland-scanner) |
| **hyprwire** | Vaxerski & contributors | BSD-3-Clause | [github.com/hyprwm/hyprwire](https://github.com/hyprwm/hyprwire) |

### System Libraries
| Project | Author / Org | License | Link |
|---------|-------------|---------|------|
| **libinput** | Peter Hutterer & freedesktop.org | MIT | [gitlab.freedesktop.org/libinput/libinput](https://gitlab.freedesktop.org/libinput/libinput) |
| **libudev-zero** | illiliti | ISC | [github.com/illiliti/libudev-zero](https://github.com/illiliti/libudev-zero) |
| **libxcb-errors** | freedesktop.org contributors | MIT | [gitlab.freedesktop.org/xorg/lib/libxcb-errors](https://gitlab.freedesktop.org/xorg/lib/libxcb-errors) |
| **toml++** | Mark Gillard | MIT | [github.com/marzer/tomlplusplus](https://github.com/marzer/tomlplusplus) |

### KDE Plasma Mobile
| Project | Author / Org | License | Link |
|---------|-------------|---------|------|
| **plasma-nano** | KDE Community | LGPL-2.1+ | [invent.kde.org/plasma/plasma-nano](https://invent.kde.org/plasma/plasma-nano) |
| **plasma-mobile** | KDE Community | LGPL-2.1+ | [invent.kde.org/plasma/plasma-mobile](https://invent.kde.org/plasma/plasma-mobile) |
| **plasma-keyboard** | KDE Community | LGPL-2.1+ | [invent.kde.org/plasma/plasma-keyboard](https://invent.kde.org/plasma/plasma-keyboard) |
| **plasma-settings** | KDE Community | LGPL-2.1+ | [invent.kde.org/plasma/plasma-settings](https://invent.kde.org/plasma/plasma-settings) |

---

## Termux Patcher
Patched for Termux (Android aarch64) by [enderbk0](https://github.com/enderbk0).

## APT Repository
Pre-built `.deb` packages available at:
```
deb [trusted=yes] https://enderbk.is-cool.dev/anland-repo stable main
```
→ [github.com/enderbk0/anland-repo](https://github.com/enderbk0/anland-repo)
