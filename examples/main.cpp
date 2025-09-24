#include <QCoreApplication>
#include <QDebug>
#include "qaudiotagreader.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    if (argc < 2) {
        qWarning() << "Usage:" << argv[0] << " <audiofile>";
        return 1;
    }

    QAudioTagReader reader;
    if (reader.open(argv[1])) {
        auto tags = reader.tags();
        for (auto it = tags.begin(); it != tags.end(); ++it) {
            qDebug() << it.key() << ":" << it.value();
        }
    } else {
        qWarning() << "Could not open file:" << argv[1];
    }

    return 0;
}
