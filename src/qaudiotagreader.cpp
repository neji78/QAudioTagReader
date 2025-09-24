#include "qaudiotagreader.h"
#include <QFileInfo>

QAudioTagReader::QAudioTagReader(QObject *parent)
    : QObject(parent)
{
}

QAudioTagReader::~QAudioTagReader()
{
    close();
}

bool QAudioTagReader::open(const QString &filePath)
{
    close();

    QFileInfo fi(filePath);
    if (!fi.exists())
        return false;

    m_filePath = filePath;
    m_fileRef = std::make_unique<TagLib::FileRef>(filePath.toUtf8().constData());

    return !m_fileRef->isNull() && m_fileRef->tag();
}

QMap<QString, QString> QAudioTagReader::tags() const
{
    QMap<QString, QString> map;

    if (m_fileRef && m_fileRef->tag()) {
        auto *tag = m_fileRef->tag();
        map["title"]  = QString::fromStdWString(tag->title().toWString());
        map["artist"] = QString::fromStdWString(tag->artist().toWString());
        map["album"]  = QString::fromStdWString(tag->album().toWString());
        map["genre"]  = QString::fromStdWString(tag->genre().toWString());
        map["comment"]= QString::fromStdWString(tag->comment().toWString());
        map["year"]   = QString::number(tag->year());
        map["track"]  = QString::number(tag->track());
    }

    return map;
}

void QAudioTagReader::close()
{
    m_fileRef.reset();
    m_filePath.clear();
}
