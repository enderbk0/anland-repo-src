# CMake generated Testfile for 
# Source directory: /data/data/com.termux/files/home/hyprland-deps/hyprlang
# Build directory: /data/data/com.termux/files/home/hyprland-deps/hyprlang/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("Parsing" "/data/data/com.termux/files/home/hyprland-deps/hyprlang/build/hyprlang_test" "parse")
set_tests_properties("Parsing" PROPERTIES  WORKING_DIRECTORY "/data/data/com.termux/files/home/hyprland-deps/hyprlang/tests" _BACKTRACE_TRIPLES "/data/data/com.termux/files/home/hyprland-deps/hyprlang/CMakeLists.txt;65;add_test;/data/data/com.termux/files/home/hyprland-deps/hyprlang/CMakeLists.txt;0;")
add_test("Fuzz" "/data/data/com.termux/files/home/hyprland-deps/hyprlang/build/hyprlang_fuzz" "fuzz")
set_tests_properties("Fuzz" PROPERTIES  WORKING_DIRECTORY "/data/data/com.termux/files/home/hyprland-deps/hyprlang/tests" _BACKTRACE_TRIPLES "/data/data/com.termux/files/home/hyprland-deps/hyprlang/CMakeLists.txt;73;add_test;/data/data/com.termux/files/home/hyprland-deps/hyprlang/CMakeLists.txt;0;")
