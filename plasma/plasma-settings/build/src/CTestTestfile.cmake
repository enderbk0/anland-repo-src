# CMake generated Testfile for 
# Source directory: /data/data/com.termux/files/home/plasmamobile/plasma-settings/src
# Build directory: /data/data/com.termux/files/home/plasmamobile/plasma-settings/build/src
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(smoketest "/data/data/com.termux/files/home/plasmamobile/plasma-settings/build/bin/plasma-settings" "--self-test")
set_tests_properties(smoketest PROPERTIES  _BACKTRACE_TRIPLES "/data/data/com.termux/files/home/plasmamobile/plasma-settings/src/CMakeLists.txt;50;add_test;/data/data/com.termux/files/home/plasmamobile/plasma-settings/src/CMakeLists.txt;0;")
