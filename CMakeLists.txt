cmake_minimum_required(VERSION 3.15)
project(grss VERSION 0.0.1 DESCRIPTION "A GTK4 RSS aggregator")

add_executable(${PROJECT_NAME}
	src/main.cpp
	src/slot.cpp
)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED IMPORTED_TARGET gtkmm-4.0 glibmm-2.4)
target_link_libraries(${PROJECT_NAME} PUBLIC PkgConfig::GTKMM)
