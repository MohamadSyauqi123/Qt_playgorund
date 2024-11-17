#include "qt_mylib.h"
#include <QDebug>

Qt_MyLib::Qt_MyLib() {

}

void Qt_MyLib::Test(){
    qDebug()<<"Hello from our DLL";
}

float Qt_MyLib::Addition(double num1, double num2, double *result) {
    *result = num1 + num2;
    return static_cast<float>(*result);  // return the sum as a float
}


float Qt_MyLib::Subtraction(double num1, double num2,double *result){
    *result = num1 - num2;
    return static_cast<float>(*result);
}

float Qt_MyLib::Multiplication(double num1, double num2,double *result){
    *result = num1 * num2;
    return static_cast<float>(*result);
}

float Qt_MyLib::Dividetion(double num1, double num2,double *result){
    *result = num1 / num2;
    return static_cast<float>(*result);
}
