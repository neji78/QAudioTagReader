# QAudioTagReader

`QAudioTagReader` is a simple Qt-based shared library that wraps [TagLib](https://taglib.org) for reading audio metadata (title, artist, album, genre, etc.).  
It lets you use TagLib easily inside Qt projects without needing to link directly to TagLib.

---

## 📂 Project Structure

QAudioTagReader \
│ \
├── CMakeLists.txt  \
├── src/\
│ ├── CMakeLists.txt \
│ ├── qaudiotagreader.h \
│ └── qaudiotagreader.cpp \
│\
├── examples/\
│ ├── CMakeLists.txt\
│ └── main.cpp\
│\
└── third_party/\
└── taglib/ 


---

## 🚀 Features
- Read tags from MP3, FLAC, OGG, WAV, etc.  
- Exports metadata as a `QMap<QString, QString>` for easy use in Qt apps.  
- Builds as a shared library (`.dll` / `.so` / `.dylib`).  
- Bundles TagLib source via `third_party/taglib` so no external dependency is required.

---

## 🔧 Requirements
- **Qt 5.15+** or **Qt 6.x**  
- **CMake 3.14+**  
- **C++17 compiler**  
- **TagLib** (included via `third_party/taglib`)

---

## 📥 Clone & Build

```bash
# Clone this repository
git clone https://github.com/yourname/QAudioTagReader.git
cd QAudioTagReader

# Fetch TagLib (submodule)
git submodule update --init --recursive

# Create build directory
mkdir build && cd build

# Configure (adjust /path/to/Qt to your Qt installation)
cmake .. -DCMAKE_PREFIX_PATH=/path/to/Qt

# Build
cmake --build .

```
▶️ Example Usage

Run the example app with an audio file:

```
./examples/QAudioTagReaderExample song.mp3
```

Example output:
```
title : "My Song"
artist : "Some Artist"
album : "Some Album"
genre : "Pop"
year : "2023"
track : "1"
```

📦 Linking in Your Own Qt Project

In your CMake project:
```
find_package(QAudioTagReader REQUIRED)

target_link_libraries(MyApp PRIVATE QAudioTagReader)
```

In code:
```
#include "qaudiotagreader.h"

QAudioTagReader reader;
if (reader.open("song.mp3")) {
    auto tags = reader.tags();
    for (auto it = tags.begin(); it != tags.end(); ++it) {
        qDebug() << it.key() << ":" << it.value();
    }
}

```
⚠️ Notes

On Windows, the .dll file must be next to your app executable.

On Linux/macOS, you may need to adjust LD_LIBRARY_PATH / DYLD_LIBRARY_PATH if you don’t install system-wide.

If you can’t fetch TagLib with submodules (e.g. restricted network), you can download TagLib as ZIP from GitHub and place it manually in third_party/taglib.
