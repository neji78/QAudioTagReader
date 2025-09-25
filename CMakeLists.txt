cmake_minimum_required(VERSION 3.14)
project(QAudioTagReader LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable AUTOMOC/UIC/RCC for Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Find Qt6 Core
find_package(Qt6 REQUIRED COMPONENTS Core)

# Add src (our library)
add_subdirectory(src)

# --------------------------
# Install rules
# --------------------------

# Install the library
install(TARGETS QAudioTagReader
    EXPORT QAudioTagReaderTargets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}   # for .dll / .exe
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}   # for .so / .dylib
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}   # for .lib / .a
)

# Install only your public headers (hide TagLib headers)
install(DIRECTORY src/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING PATTERN "*.h"
)

# Optional: export targets for find_package()
install(EXPORT QAudioTagReaderTargets
    FILE QAudioTagReaderTargets.cmake
    NAMESPACE QAudioTagReader::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/QAudioTagReader
)

# --------------------------
# Optional: example app
# --------------------------
# add_subdirectory(examples)
