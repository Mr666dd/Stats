# CMakeList.txt: проект CMake для Stats; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("Stats")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Stats "Stats.cpp" "Stats.h")
SET_TARGET_PROPERTIES(MSP PROPERTIES)
set(VERSION "1.0.0")
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
