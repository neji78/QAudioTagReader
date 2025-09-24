add_library(QAudioTagReader SHARED
    qaudiotagreader.h
    qaudiotagreader.cpp
)

target_include_directories(QAudioTagReader
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(QAudioTagReader
    Qt5::Core
    tag           # This is the target name from TagLib's CMakeLists
)

target_compile_definitions(QAudioTagReader PRIVATE QAUDIOTAGREADER_LIBRARY)
