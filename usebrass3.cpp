//
// Created by xk on 2019/8/23.
//

#include "acctabc.h"
#include <iostream>
#include <string>

const int CLIENTS = 4;

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    AcctABC *p_clients[CLIENTS];
    std::string temp;
    long tempnum;
    double tempbal;
    char kind;

    for (auto &p_client : p_clients) {
        cout << "Enter client's name: ";
        getline(cin, temp);
        cout << "Enter client's account number: ";
        cin >> tempnum;
        cout << "Enter opening balance: $";
        cin >> tempbal;
        cout << "Enter 1 for Brass Accout or 2 for BrassPlus Accout: ";
        while (cin >> kind && kind != '1' && kind != '2')
            cout << "Enter either 1 or 2: ";
        if (kind == '1')
            p_client = new Brass(temp, tempnum, tempbal);
        else {
            double tmax, trate;
            cout << "Enter the overdraft limit: $";
            cin >> tmax;
            cout << "Enter the interest rate as a decimal fraction: ";
            cin >> trate;
            p_client = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
        }
        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (auto p_client: p_clients) {
        p_client->ViewAcct();
        cout << endl;
    }

    for (auto p_client: p_clients)
        delete p_client;
    cout << "Done.\n";
    return 0;
}