//
// Created by xk on 2019/8/24.
//

#include <iostream>
#include "dma.h"

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    DMA *abcs[3];
    char kind;
    string tlabel;
    int trating;
    string tcolor;
    string tstyle;

    for (auto &abc: abcs) {
        cout << "Enter Label: ";
        getline(cin, tlabel);
        cout << "Enter kind: ";
        while (cin >> kind && kind != '1' && kind != '2' && kind != '3')
            cout << "Enter 1 or 2 or 3: ";
        if (kind == '1') {
            abc = new baseDMA(tlabel);
        } else if (kind == '2') {
            cin.get();
            cout << "Enter color: ";
            getline(cin, tcolor);
            abc = new lackDMA(tcolor, tlabel);
        } else {
            cin.get();
            cout << "Enter style: ";
            getline(cin, tstyle);
            abc = new hasDMA(tstyle, tlabel);
        }
        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (auto abc: abcs) {
        abc->View();
    }
}