#include <QApplication>
#include "dialog.h"
#include "qt_mylib.h"
#include "QString"

int main(int argc, char *argv[])
{
    // QCoreApplication a(argc, argv);
    QApplication b(argc, argv);

    Qt_MyLib cLib;

    cLib.Test();
    //float num1,num2;



    Dialog c;
    c.show();
    //num1 =c.getNum1();
    //num2 =c.getNum2();

    //cLib.Addition(num1,num2);

    // qDebug()<<"Value 1: "<<c.getNum1();



    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.

    return b.exec();
}
