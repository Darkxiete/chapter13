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
    ClassA a;
    cout << "Create object b" << endl;
    ClassB b;
    cout << "Create object c" << endl;
    ClassA c = a.func1(b);
//    cout << "Create object d" << endl;
//    ClassA d = a.func2(b);
    cout << "Done.\n";
}