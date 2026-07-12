# Building Plasma Mobile

The `anland-repo-src` repository contains the fully patched unified source tree for KDE Plasma Mobile. You do not need to clone from the official upstreams or apply manual patches.

> **Prerequisites:** Complete [[Termux-Environment-Setup]] first.

---

## Overview

Plasma Mobile consists of four main components located under `plasma/` inside the `anland-repo-src` tree:

| Component | Description |
|-----------|-------------|
| `plasma-nano` | Minimal shell base module (provides required `nanoshell` QML module) |
| `plasma-mobile` | The main mobile shell |
| `plasma-keyboard` | Virtual keyboard |
| `plasma-settings` | Settings application |

---

## Install Build Dependencies

First, ensure you have all framework headers and dependencies installed in Termux:

```bash
pkg install -y \
  extra-cmake-modules \
  qt6-base qt6-base-dev \
  qt6-declarative qt6-declarative-dev \
  qt6-multimedia qt6-multimedia-dev \
  qt6-wayland qt6-wayland-dev \
  qt6-tools qt6-tools-dev \
  qt6-svg qt6-svg-dev \
  kf6-ki18n kf6-ki18n-dev \
  kf6-kconfig kf6-kconfig-dev \
  kf6-kcoreaddons kf6-kcoreaddons-dev \
  kf6-kdbusaddons kf6-kdbusaddons-dev \
  kf6-kservice kf6-kservice-dev \
  kf6-kwindowsystem kf6-kwindowsystem-dev \
  kf6-knotifications kf6-knotifications-dev \
  kf6-kcrash kf6-kcrash-dev \
  kf6-kglobalaccel kf6-kglobalaccel-dev \
  plasma-framework plasma-framework-dev \
  kwin kwin-dev \
  milou \
  libkscreen libkscreen-dev \
  networkmanager-qt networkmanager-qt-dev \
  modemmanager-qt modemmanager-qt-dev \
  pulseaudio-qt pulseaudio-qt-dev \
  maliit-framework maliit-framework-dev
```

---

## Build Steps

Build the packages in the following order:

### 1. Build plasma-nano

```bash
cd plasma/plasma-nano
cmake -B build -G Ninja \
  -DCMAKE_INSTALL_PREFIX=$PREFIX \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_TESTING=OFF
cmake --build build --target install
```

### 2. Build plasma-mobile

```bash
cd plasma/plasma-mobile
cmake -B build -G Ninja \
  -DCMAKE_INSTALL_PREFIX=$PREFIX \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_TESTING=OFF
cmake --build build --target install
```

### 3. Build plasma-keyboard

```bash
cd plasma/plasma-keyboard
cmake -B build -G Ninja \
  -DCMAKE_INSTALL_PREFIX=$PREFIX \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_TESTING=OFF
cmake --build build --target install
```

### 4. Build plasma-settings

```bash
cd plasma/plasma-settings
cmake -B build -G Ninja \
  -DCMAKE_INSTALL_PREFIX=$PREFIX \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_TESTING=OFF
cmake --build build --target install
```

---

## Verify Installation

```bash
# Check plasma-mobile shell is installed
ls $PREFIX/share/plasma/shells/

# Check plasmashell binary
which plasmashell
plasmashell --version

# Check plasma-settings
which plasma-settings
```

---

**Next:** [[Running-with-Anland]]
