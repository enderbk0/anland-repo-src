# Install script for directory: /data/data/com.termux/files/home/plasmamobile/plasma-mobile/components/waydroidintegrationplugin/kauth

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
  if(EXISTS "$ENV{DESTDIR}/data/data/com.termux/files/usr/lib/libexec/kf6/kauth/waydroidhelper" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/data/data/com.termux/files/usr/lib/libexec/kf6/kauth/waydroidhelper")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/data/data/com.termux/files/usr/lib/libexec/kf6/kauth/waydroidhelper"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/data/data/com.termux/files/usr/lib/libexec/kf6/kauth/waydroidhelper")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/data/data/com.termux/files/usr/lib/libexec/kf6/kauth" TYPE EXECUTABLE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/bin/waydroidhelper")
  if(EXISTS "$ENV{DESTDIR}/data/data/com.termux/files/usr/lib/libexec/kf6/kauth/waydroidhelper" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/data/data/com.termux/files/usr/lib/libexec/kf6/kauth/waydroidhelper")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/data/data/com.termux/files/usr/bin/llvm-strip" "$ENV{DESTDIR}/data/data/com.termux/files/usr/lib/libexec/kf6/kauth/waydroidhelper")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/waydroidintegrationplugin/kauth/CMakeFiles/waydroidhelper.dir/install-cxx-module-bmi-RelWithDebInfo.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/system.d" TYPE FILE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/waydroidintegrationplugin/kauth/org.kde.plasma.mobileshell.waydroidhelper.conf")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/system-services" TYPE FILE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/waydroidintegrationplugin/kauth/org.kde.plasma.mobileshell.waydroidhelper.service")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/components/waydroidintegrationplugin/kauth/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
