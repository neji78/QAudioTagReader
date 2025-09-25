#ifndef Q_AUDIOTAGREADER_HEADER
#define Q_AUDIOTAGREADER_HEADER
#pragma once

#include <QObject>
#include <QString>
#include <QMap>
#include <memory>
#include "qaudiotag.h"
#include "qreader.h"
#include "qaudiotagreader_global.h"


namespace QMediaTag {

class QAUDIOTAGREADER_EXPORT QAudioTagReader : public QObject,
                                               public QReader,
                                               public QAudioTag
{
    Q_OBJECT

public:
    explicit QAudioTagReader(QString filePath = "",QObject *parent = nullptr);
    ~QAudioTagReader();
    bool read(const QString &filePath) Q_DECL_OVERRIDE;
    void close();

private:
    QString m_filePath;
    QFileRef m_fileRef;
};
}
#endif
