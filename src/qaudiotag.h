#ifndef QAUDIOTAG_H
#define QAUDIOTAG_H
#include <QMap>
#include <QString>
#include "qaudiotagreader_global.h"

namespace TagLib {
class Tag;
}
namespace QMediaTag{
class QAUDIOTAGREADER_EXPORT QAudioTag
{
public:
    QAudioTag() = default;
    QAudioTag(TagLib::Tag *tag);
    QAudioTag& operator=(const QAudioTag &obj);

    QString title() const;

    QString artist() const;

    QString album() const;

    QString genre() const;

    QString comment() const;

    QString year() const;

    QString track() const;

private:
    QString m_title;
    QString m_artist;
    QString m_album;
    QString m_genre;
    QString m_comment;
    QString m_year;
    QString m_track;
};
}
#endif // QAUDIOTAG_H
