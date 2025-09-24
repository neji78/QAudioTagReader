#ifndef Q_AUDIOTAGREADER_HEADER
#define Q_AUDIOTAGREADER_HEADER
#pragma once

#include <QObject>
#include <QString>
#include <QMap>

#include <taglib/fileref.h>
#include <taglib/tag.h>

#if defined(QAUDIOTAGREADER_LIBRARY)
#  define QAUDIOTAGREADER_EXPORT Q_DECL_EXPORT
#else
#  define QAUDIOTAGREADER_EXPORT Q_DECL_IMPORT
#endif

class QAUDIOTAGREADER_EXPORT QAudioTagReader : public QObject
{
    Q_OBJECT

public:
    explicit QAudioTagReader(QObject *parent = nullptr);
    ~QAudioTagReader();

    bool open(const QString &filePath);
    QMap<QString, QString> tags() const;
    void close();

private:
    QString m_filePath;
    std::unique_ptr<TagLib::FileRef> m_fileRef;
};

#endif
