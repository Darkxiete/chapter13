//
// Created by summer on 2019-08-22.
//

#include <iostream>
#include "brass.h"
#include "test.h"

using std::cout;
using std::endl;

void fr(Brass &rb) { rb.ViewAcc(); }

void fp(Brass *pb) { pb->ViewAcc(); }

void fv(Brass b) { b.ViewAcc(); }

void show1(ClassA &a) {
    cout << "ClassA.number = " << a.number << endl;
}
void show2(ClassA a) {
    cout << "ClassA.number = " << a.number << endl;
}

int main() {
//    BrassPlus bp("Horatio Hogg", 382288, 3000.00);
//    BrassPlus * p = &bp;
//    fr(bp);
//    cout << endl;
//    fp(p);
//    cout << endl;
//    fv(bp);
//    cout << endl;
    cout << "Create object a" << endl;
    ClassA a(1);
    cout << "Create object b" << endl;
    ClassB b(1, 2);
    cout << "Create object c" << endl;
    ClassA c = a.func1(b);
    cout << "Create object min" << endl;
    ClassA min = a > b;  // 调用了构造函数
    cout << "Create object &max1" << endl;
    ClassA &max1 = a < c;  // 引用变量的初始化，不调用构造函数
    cout << "Create object max2" << endl;
    ClassA max2 = a < c;  // 调用了复制构造函数
    cout << "Create object sum" << endl;
    ClassA sum = a + c;
    cout << "Show1" << endl;
    show1(b);
    cout << "Show2" << endl;
    show2(b);
    cout << "Create object cc" << endl;
    ClassC cc;
    cout << "Done.\n";
}