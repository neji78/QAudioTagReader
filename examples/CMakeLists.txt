add_executable(QAudioTagReaderExample main.cpp)

target_include_directories(QAudioTagReaderExample
    PRIVATE
        ${PROJECT_SOURCE_DIR}/src   # so it finds qaudiotagreader.h
)

target_link_libraries(QAudioTagReaderExample
    PRIVATE
        QAudioTagReader
        Qt6::Core
)