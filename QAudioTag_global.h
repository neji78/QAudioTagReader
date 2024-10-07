#ifndef QAUDIOTAG_GLOBAL_H
#define QAUDIOTAG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QAUDIOTAG_LIBRARY)
#define QAUDIOTAG_EXPORT Q_DECL_EXPORT
#else
#define QAUDIOTAG_EXPORT Q_DECL_IMPORT
#endif

#endif // QAUDIOTAG_GLOBAL_H
