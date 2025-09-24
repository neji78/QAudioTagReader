# QAudioTagReader

`QAudioTagReader` is a simple Qt-based shared library that wraps [TagLib](https://taglib.org) for reading audio metadata (title, artist, album, genre, etc.).  
It lets you use TagLib easily inside Qt projects without needing to link directly to TagLib.

---

## 📂 Project Structure

QAudioTagReader/
│
├── CMakeLists.txt # Root CMake (adds TagLib + src + examples)
├── src/ # QAudioTagReader library
│ ├── CMakeLists.txt
│ ├── qaudiotagreader.h
│ └── qaudiotagreader.cpp
│
├── examples/ # Example app using the library
│ ├── CMakeLists.txt
│ └── main.cpp
│
└── third_party/
└── taglib/ # TagLib source (as submodule or manually copied)


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
