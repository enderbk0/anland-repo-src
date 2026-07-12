# Building from Source

This guide outlines the steps required to compile the patched components inside the `anland-repo-src` tree for Termux (aarch64).

## Prerequisites

Before compilation, you must install the standard compilation tools and library headers in Termux:

```bash
pkg install x11-repo
pkg install clang cmake ninja extra-cmake-modules pkg-config \
    qt6-base qt6-declarative qt6-wayland libwayland wayland-protocols \
    libxkbcommon libxml2 libxslt libmount libuuid libblkid \
    glib libinput udev-opts mesa-gbm-headers mesa
```

---

## 1. Building Dependencies (deps/)

The components under `deps/` must be built and installed in order, as they provide library files for Hyprland:

```bash
# Example for a dependency:
cd deps/aquamarine
cmake -B build -G Ninja -DCMAKE_INSTALL_PREFIX=$PREFIX
cmake --build build --target install
```

Repeat this compilation and installation flow for other dependencies as needed.

---

## 2. Building KDE Plasma Mobile Components

To build the Plasma Mobile desktop environment, build the packages in the following order:

### A. plasma-nano
Provides the required `org.kde.plasma.private.nanoshell` QML module.
```bash
cd plasma/plasma-nano
cmake -B build -G Ninja \
    -DCMAKE_INSTALL_PREFIX=$PREFIX \
    -DCMAKE_BUILD_TYPE=Release \
    -DBUILD_TESTING=OFF
cmake --build build --target install
```

### B. plasma-mobile
Contains the core mobile shell.
```bash
cd plasma/plasma-mobile
cmake -B build -G Ninja \
    -DCMAKE_INSTALL_PREFIX=$PREFIX \
    -DCMAKE_BUILD_TYPE=Release \
    -DBUILD_TESTING=OFF
cmake --build build --target install
```

### C. plasma-settings
```bash
cd plasma/plasma-settings
cmake -B build -G Ninja \
    -DCMAKE_INSTALL_PREFIX=$PREFIX \
    -DCMAKE_BUILD_TYPE=Release \
    -DBUILD_TESTING=OFF
cmake --build build --target install
```

### D. plasma-keyboard
```bash
cd plasma/plasma-keyboard
cmake -B build -G Ninja \
    -DCMAKE_INSTALL_PREFIX=$PREFIX \
    -DCMAKE_BUILD_TYPE=Release \
    -DBUILD_TESTING=OFF
cmake --build build --target install
```
