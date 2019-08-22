//
// Created by summer on 2019-08-22.
//

#include <iostream>
#include "brass.h"

using std::cout;
using std::endl;

void fr(Brass &rb) { rb.ViewAcc(); }

void fp(Brass *pb) { pb->ViewAcc(); }

void fv(Brass b) { b.ViewAcc(); }

int main() {
    BrassPlus bp("Horatio Hogg", 382288, 3000.00);
    BrassPlus * p = &bp;
    fr(bp);
    cout << endl;
    fp(p);
    cout << endl;
    fv(bp);
    cout << endl;
}