#include "qaudiotagreader.h"
#include <taglib/fileref.h>
#include <taglib/tag.h>
#include <QFileInfo>
#include <QDebug>
namespace QMediaTag {
QAudioTagReader::QAudioTagReader(QString filePath,QObject *parent)
    : QObject(parent)
{
    if(!read(filePath)){
        qWarning()<<"can`t read tags";
    }
}

QAudioTagReader::~QAudioTagReader()
{
    close();
}

bool QAudioTagReader::read(const QString &filePath)
{
    close();

    QFileInfo fi(filePath);
    if (!fi.exists())
        return false;

    m_filePath = filePath;
    m_fileRef = std::make_unique<TagLib::FileRef>(filePath.toUtf8().constData());
    if (m_fileRef && m_fileRef->tag()) {
        QAudioTag::operator=(QAudioTag(m_fileRef->tag()));
        return true;
    }else{
        return false;
    }
}

void QAudioTagReader::close()
{
    m_fileRef.reset();
    m_filePath.clear();
}
}
