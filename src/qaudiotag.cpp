#include "qaudiotag.h"
#include <QDebug>
#include <taglib/tag.h>
QMediaTag::QAudioTag::QAudioTag(TagLib::Tag *tag)
{
    if(tag == nullptr){
        qWarning()<<"tag is null";
        return;
    }

    m_title  = QString::fromStdWString(tag->title().toWString());
    m_artist = QString::fromStdWString(tag->artist().toWString());
    m_album  = QString::fromStdWString(tag->album().toWString());
    m_genre  = QString::fromStdWString(tag->genre().toWString());
    m_comment= QString::fromStdWString(tag->comment().toWString());
    m_year   = QString::number(tag->year());
    m_track  = QString::number(tag->track());
}

QMediaTag::QAudioTag &QMediaTag::QAudioTag::operator=(const QAudioTag &obj)
{
    m_title  = obj.title();
    m_artist = obj.artist();
    m_album  = obj.album();
    m_genre  = obj.genre();
    m_comment= obj.comment();
    m_year   = obj.year();
    m_track  = obj.track();
    return *this;
}


namespace QMediaTag {
QString QAudioTag::title() const
{
    return m_title;
}

QString QAudioTag::artist() const
{
    return m_artist;
}

QString QAudioTag::album() const
{
    return m_album;
}

QString QAudioTag::genre() const
{
    return m_genre;
}

QString QAudioTag::comment() const
{
    return m_comment;
}

QString QAudioTag::year() const
{
    return m_year;
}

QString QAudioTag::track() const
{
    return m_track;
}

}
