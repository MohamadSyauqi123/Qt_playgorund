#ifndef QT_MYLIB_GLOBAL_H
#define QT_MYLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QT_MYLIB_LIBRARY)
#define QT_MYLIB_EXPORT Q_DECL_EXPORT
#else
#define QT_MYLIB_EXPORT Q_DECL_IMPORT
#endif

#endif // QT_MYLIB_GLOBAL_H
