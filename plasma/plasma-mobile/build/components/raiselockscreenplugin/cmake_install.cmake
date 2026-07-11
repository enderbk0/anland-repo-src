# Install script for directory: /data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/raiselockscreenplugin

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin/libqml_org_kde_plasma_private_mobileshell_raiselockscreenplugin_raiselockscreenplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin/libqml_org_kde_plasma_private_mobileshell_raiselockscreenplugin_raiselockscreenplugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin/libqml_org_kde_plasma_private_mobileshell_raiselockscreenplugin_raiselockscreenplugin.so"
         RPATH [[$ORIGIN/../../../../../../../lib]])
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin" TYPE MODULE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/raiselockscreenplugin/libqml_org_kde_plasma_private_mobileshell_raiselockscreenplugin_raiselockscreenplugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin/libqml_org_kde_plasma_private_mobileshell_raiselockscreenplugin_raiselockscreenplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin/libqml_org_kde_plasma_private_mobileshell_raiselockscreenplugin_raiselockscreenplugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin/libqml_org_kde_plasma_private_mobileshell_raiselockscreenplugin_raiselockscreenplugin.so"
         OLD_RPATH "::::::::::::::::::::::::::::::::"
         NEW_RPATH [[$ORIGIN/../../../../../../../lib]])
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/data/data/com.termux/files/usr/bin/llvm-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin/libqml_org_kde_plasma_private_mobileshell_raiselockscreenplugin_raiselockscreenplugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin" TYPE FILE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/raiselockscreenplugin/qmldir")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin" TYPE FILE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/raiselockscreenplugin/raiselockscreenplugin.qmltypes")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/private/mobileshell/raiselockscreenplugin" TYPE FILE RENAME "kde-qmlmodule.version" FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/raiselockscreenplugin/raiselockscreenplugin-kde-qmlmodule.version")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/raiselockscreenplugin/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
