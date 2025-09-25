# Find Qt6 Core first
find_package(Qt6 REQUIRED COMPONENTS Core)

add_definitions(-DTAGLIB_STATIC)
configure_file(
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/taglib_config.h.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/taglib_config.h
)
# TagLib as object library
add_library(taglib_objects OBJECT
    # Core TagLib sources
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/fileref.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/tag.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/audioproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/tagutils.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/tagunion.cpp
    # APE
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ape/apefile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ape/apeproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ape/apefooter.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ape/apeitem.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ape/apetag.cpp
    #ASF
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/asf/asfattribute.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/asf/asffile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/asf/asfpicture.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/asf/asfproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/asf/asftag.cpp
    #DSDIIF
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/dsdiff/dsdiffdiintag.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/dsdiff/dsdifffile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/dsdiff/dsdiffproperties.cpp
    #DSF
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/dsf/dsffile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/dsf/dsfproperties.cpp
    # FLAC
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/flac/flacfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/flac/flacmetadatablock.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/flac/flacpicture.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/flac/flacproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/flac/flacunknownmetadatablock.cpp
    #IT
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/it/itfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/it/itproperties.cpp
    #MOD
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mod/modfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mod/modfilebase.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mod/modproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mod/modtag.cpp
    # MP4
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mod/modfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mod/modfilebase.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mod/modproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mod/modtag.cpp
    # MPC
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpc/mpcfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpc/mpcproperties.cpp
    # MPEG
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/mpegfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/mpegheader.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/mpegproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/xingheader.cpp
    #ID3V1
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v1/id3v1genres.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v1/id3v1tag.cpp
    #ID3V2
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/id3v2extendedheader.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/id3v2footer.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/id3v2frame.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/id3v2framefactory.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/id3v2header.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/id3v2synchdata.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/id3v2tag.cpp
    #FRAME
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/attachedpictureframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/chapterframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/commentsframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/eventtimingcodesframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/generalencapsulatedobjectframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/ownershipframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/podcastframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/popularimeterframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/privateframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/relativevolumeframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/synchronizedlyricsframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/tableofcontentsframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/textidentificationframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/uniquefileidentifierframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/unknownframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/unsynchronizedlyricsframe.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2/frames/urllinkframe.cpp
    #OGG
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/xiphcomment.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/oggfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/oggpage.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/oggpageheader.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/flac/oggflacfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/opus/opusfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/opus/opusproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/speex/speexproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/speex/speexfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/vorbis/vorbisproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg/vorbis/vorbisfile.cpp
    #RIFF
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/riff/rifffile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/riff/aiff/aiffproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/riff/aiff/aifffile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/riff/wav/wavproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/riff/wav/infotag.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/riff/wav/wavfile.cpp
    #S3M
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/s3m/s3mproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/s3m/s3mfile.cpp
    #SHORTEN
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/shorten/shortentag.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/shorten/shortenfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/shorten/shortenproperties.cpp
    #TOOLKIT
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tbytevector.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tbytevectorlist.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tbytevectorstream.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tdebug.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tdebuglistener.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tfile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tfilestream.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tiostream.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tpicturetype.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tpropertymap.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tstring.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tstringlist.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tvariant.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tversionnumber.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit/tzlib.cpp
    #trueaudio
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/trueaudio/trueaudiofile.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/trueaudio/trueaudioproperties.cpp
    #wavpack
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/wavpack/wavpackproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/wavpack/wavpackfile.cpp
    #XM
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/xm/xmproperties.cpp
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/xm/xmfile.cpp


    # Add other TagLib sources...
)

# Include directories for TagLib (all subfolders)
target_include_directories(taglib_objects
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
        ${PROJECT_SOURCE_DIR}/third_party/taglib/3rdparty/utfcpp/source
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ape
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/asf
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/dsdiff
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/dsf
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/flac
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/it
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mod
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mp4
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpc
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v1
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/mpeg/id3v2
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/ogg
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/riff
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/s3m
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/shorten
        ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit
)


# -----------------------------
# QAudioTagReader library
# -----------------------------
add_library(QAudioTagReader SHARED
    qaudiotagreader.cpp
    qaudiotagreader.h
    qaudiotag.cpp
    qaudiotag.h
    qreader.h
    qaudiotagreader_global.h
    $<TARGET_OBJECTS:taglib_objects>
)

# Include directories
target_include_directories(QAudioTagReader
    PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
    ${PROJECT_SOURCE_DIR}/third_party/taglib
    ${PROJECT_SOURCE_DIR}/third_party/taglib/taglib/toolkit
)

# Link Qt6 Core
target_link_libraries(QAudioTagReader
    PRIVATE Qt6::Core
)

# Compile definitions
target_compile_definitions(QAudioTagReader PRIVATE QAUDIOTAGREADER_LIBRARY)

# AUTOMOC/UIC/RCC
set_target_properties(QAudioTagReader PROPERTIES
    AUTOMOC ON
    AUTOUIC ON
    AUTORCC ON
)
