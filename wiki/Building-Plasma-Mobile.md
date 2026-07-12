# Building Plasma Mobile

The `plasma/` directory contains the fully patched source components for KDE Plasma Mobile. Follow the steps below to compile them on Termux.

## Source Components

| Directory | Module | Description |
|-----------|--------|-------------|
| `plasma/plasma-nano` | `org.kde.plasma.private.nanoshell` | Minimal shell base layout |
| `plasma/plasma-mobile` | `org.kde.plasma.private.mobileshell` | Mobile shell core, panels, and drawer |
| `plasma/plasma-keyboard` | `org.kde.plasma.private.keyboard` | Virtual keyboard module |
| `plasma/plasma-settings` | `org.kde.plasma.settings` | Configuration application |

## Build Order and Steps

Build these components in this exact order to satisfy build-time library dependencies.

### 1. Build plasma-nano
```bash
cd plasma/plasma-nano
cmake -B build -G Ninja -DCMAKE_INSTALL_PREFIX=$PREFIX -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTING=OFF
cmake --build build --target install
```

### 2. Build plasma-mobile
```bash
cd plasma/plasma-mobile
cmake -B build -G Ninja -DCMAKE_INSTALL_PREFIX=$PREFIX -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTING=OFF
cmake --build build --target install
```

### 3. Build plasma-keyboard
```bash
cd plasma/plasma-keyboard
cmake -B build -G Ninja -DCMAKE_INSTALL_PREFIX=$PREFIX -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTING=OFF
cmake --build build --target install
```

### 4. Build plasma-settings
```bash
cd plasma/plasma-settings
cmake -B build -G Ninja -DCMAKE_INSTALL_PREFIX=$PREFIX -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTING=OFF
cmake --build build --target install
```

## Verify Installation

Check that the QML modules and executables are present:

```bash
# Verify shell layouts
ls $PREFIX/share/plasma/shells/

# Verify plasmashell binary
plasmashell --version
```
