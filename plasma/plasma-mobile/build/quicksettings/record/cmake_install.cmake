# Install script for directory: /data/data/com.termux/files/home/plasmamobile/plasma-mobile/quicksettings/record

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record/libqml_org_kde_plasma_quicksetting_record_recordplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record/libqml_org_kde_plasma_quicksetting_record_recordplugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record/libqml_org_kde_plasma_quicksetting_record_recordplugin.so"
         RPATH [[$ORIGIN/../../../../../../lib]])
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record" TYPE MODULE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/quicksettings/record/libqml_org_kde_plasma_quicksetting_record_recordplugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record/libqml_org_kde_plasma_quicksetting_record_recordplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record/libqml_org_kde_plasma_quicksetting_record_recordplugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record/libqml_org_kde_plasma_quicksetting_record_recordplugin.so"
         OLD_RPATH ":::::::::::::::::::::::::::::"
         NEW_RPATH [[$ORIGIN/../../../../../../lib]])
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/data/data/com.termux/files/usr/bin/llvm-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record/libqml_org_kde_plasma_quicksetting_record_recordplugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record" TYPE FILE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/quicksettings/record/qmldir")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record" TYPE FILE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/quicksettings/record/recordplugin.qmltypes")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt6/qml/org/kde/plasma/quicksetting/record" TYPE FILE RENAME "kde-qmlmodule.version" FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/quicksettings/record/recordplugin-kde-qmlmodule.version")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/knotifications6" TYPE FILE FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/quicksettings/record/plasma_mobile_quicksetting_record.notifyrc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "plasma-mobile" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plasma/quicksettings/org.kde.plasma.quicksetting.record" TYPE DIRECTORY FILES "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/quicksettings/record/package/" REGEX "/\\.svn$" EXCLUDE REGEX "/[^/]*\\.qmlc$" EXCLUDE REGEX "/CMakeLists\\.txt$" EXCLUDE REGEX "/Messages\\.sh$" EXCLUDE REGEX "/dummydata$" EXCLUDE)
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/data/data/com.termux/files/home/plasmamobile/plasma-mobile/build/quicksettings/record/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
