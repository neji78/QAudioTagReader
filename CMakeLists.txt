cmake_minimum_required(VERSION 3.14)
project(QAudioTagReader LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add TagLib from third_party
add_subdirectory(third_party/taglib)

# Add our library
add_subdirectory(src)

# Add example app
add_subdirectory(examples)
