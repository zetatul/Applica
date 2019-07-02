#ifndef QTAPP_GLOBAL_H
#define QTAPP_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTAPP_LIBRARY)
#  define QTAPPSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTAPPSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTAPP_GLOBAL_H
