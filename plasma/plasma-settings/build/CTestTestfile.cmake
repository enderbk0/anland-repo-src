# CMake generated Testfile for 
# Source directory: /data/data/com.termux/files/home/plasmamobile/plasma-settings
# Build directory: /data/data/com.termux/files/home/plasmamobile/plasma-settings/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/data/data/com.termux/files/usr/bin/cmake" "-DAPPSTREAMCLI=/data/data/com.termux/files/usr/bin/appstreamcli" "-DINSTALL_FILES=/data/data/com.termux/files/home/plasmamobile/plasma-settings/build/install_manifest.txt" "-P" "/data/data/com.termux/files/usr/share/ECM/kde-modules/appstreamtest.cmake")
set_tests_properties(appstreamtest PROPERTIES  _BACKTRACE_TRIPLES "/data/data/com.termux/files/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;177;add_test;/data/data/com.termux/files/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;195;appstreamtest;/data/data/com.termux/files/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;0;;/data/data/com.termux/files/home/plasmamobile/plasma-settings/CMakeLists.txt;31;include;/data/data/com.termux/files/home/plasmamobile/plasma-settings/CMakeLists.txt;0;")
subdirs("categories")
subdirs("src")
