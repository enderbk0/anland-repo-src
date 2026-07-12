# Building Hyprland

The `anland-repo-src` repository contains the fully patched unified source tree for Hyprland and its dependencies. You do not need to clone from the official upstreams or apply manual patches.

Build order matters — dependencies must be built first. Follow this guide in order.

> **Prerequisites:** Complete [[Termux-Environment-Setup]] first.

---

## Build Order

All source code is located under `deps/` and `hyprland/` inside the `anland-repo-src` tree:

```
1. deps/hyprutils
2. deps/hyprlang
3. deps/hyprwayland-scanner
4. deps/hyprwire
5. deps/hyprcursor
6. deps/hyprgraphics
7. deps/libudev-zero
8. deps/libxcb-errors
9. deps/libinput
10. deps/aquamarine
11. hyprland  ← main compositor
```

---

## 1. Build hyprutils

```bash
cd deps/hyprutils
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=$PREFIX
cmake --build build --target install
```

---

## 2. Build hyprlang

```bash
cd deps/hyprlang
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=$PREFIX
cmake --build build --target install
```

---

## 3. Build hyprwayland-scanner

```bash
cd deps/hyprwayland-scanner
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=$PREFIX
cmake --build build --target install
```

---

## 4. Build hyprwire

```bash
cd deps/hyprwire
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=$PREFIX
cmake --build build --target install
```

---

## 5. Build hyprcursor

```bash
cd deps/hyprcursor
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=$PREFIX
cmake --build build --target install
```

---

## 6. Build hyprgraphics

```bash
cd deps/hyprgraphics
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=$PREFIX
cmake --build build --target install
```

---

## 7. Build libudev-zero

```bash
cd deps/libudev-zero
make PREFIX=$PREFIX install
```

---

## 8. Build libxcb-errors

```bash
cd deps/libxcb-errors
./autogen.sh --prefix=$PREFIX
make -j$(nproc)
make install
```

---

## 9. Build libinput

```bash
cd deps/libinput
meson setup build --prefix=$PREFIX --buildtype=release -Ddebug-gui=false -Dtests=false -Ddocumentation=false -Dlibwacom=false
ninja -C build install
```

---

## 10. Build aquamarine

```bash
cd deps/aquamarine
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=$PREFIX
cmake --build build --target install
```

---

## 11. Build Hyprland (Main)

```bash
cd hyprland
cmake -B build -G Ninja \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_INSTALL_PREFIX=$PREFIX \
  -DNO_SYSTEMD=true \
  -DWITH_UWSM=false
cmake --build build --target install
```

---

## Verify Installation

```bash
which Hyprland
Hyprland --version
which hyprctl
```

---

**Next:** [[Building-Plasma-Mobile]] or [[Running-with-Anland]]
