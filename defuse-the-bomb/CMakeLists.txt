cmake_minimum_required(VERSION 3.10)
project(Solution)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# generate compile_commands.json with the following (for clangd compile_commands.json file generation, read 
# more here: https://clang.llvm.org/docs/JSONCompilationDatabase.html#supported-systems)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add executable
add_executable(${PROJECT_NAME}
    main.cpp
    solution.h
)
