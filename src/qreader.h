#ifndef QREADER_H
#define QREADER_H
#include <QString>
namespace QMediaTag {
class QReader
{
public:
    QReader() = default;
    virtual bool read(const QString &path) = 0;
};
}


#endif // QREADER_H
