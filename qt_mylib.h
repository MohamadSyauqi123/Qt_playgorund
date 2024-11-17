#ifndef QT_MYLIB_H
#define QT_MYLIB_H

#include "Qt_MyLib_global.h"

class QT_MYLIB_EXPORT Qt_MyLib
{
public:
    Qt_MyLib();

    void Test();
    float Addition(double,double,double*);
    float Subtraction(double,double,double*);
    float Multiplication(double,double,double*);
    float Dividetion(double,double,double*);
};

#endif // QT_MYLIB_H
