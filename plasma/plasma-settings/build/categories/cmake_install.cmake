# Install script for directory: /data/data/com.termux/files/home/plasmamobile/plasma-settings/categories

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/data/data/com.termux/files/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/data/data/com.termux/files/usr/bin/llvm-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-settings" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plasma-settings/categories" TYPE FILE FILES
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-root-category.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-network.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-network-networksettings.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-hardware-input.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-hardware-input-pointing-devices.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-hardware-keyboard.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-hardware-input-touchscreen.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-hardware-multimedia.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-hardware-display.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-hardware.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-hardware-removable-storage.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-appearance.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-appearance-themes.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-appearance-font.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-applications.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-applications-defaults.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-workspace-windowmanagement.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-personalization.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-workspace.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-workspace-search.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-security-privacy.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-applications-permissions.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-regionalsettings.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-system-administration.desktop"
    "/data/data/com.termux/files/home/plasmamobile/plasma-settings/categories/settings-workspace-session.desktop"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/data/data/com.termux/files/home/plasmamobile/plasma-settings/build/categories/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
