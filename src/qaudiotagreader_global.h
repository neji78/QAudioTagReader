#ifndef Q_AUDIOTAGREADER_GLOBAL_H
#define Q_AUDIOTAGREADER_GLOBAL_H
#include <QtCore/qglobal.h>
#include <memory>
namespace TagLib {
class FileRef;
}
typedef std::unique_ptr<TagLib::FileRef> QFileRef;
#if defined(QAUDIOTAGREADER_LIBRARY)
#  define QAUDIOTAGREADER_EXPORT Q_DECL_EXPORT
#else
#  define QAUDIOTAGREADER_EXPORT Q_DECL_IMPORT
#endif
#endif // QAUDIOTAGREADER_GLOBAL_H
