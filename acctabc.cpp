//
// Created by xk on 2019/8/23.
//

#include "acctabc.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ios_base;

AcctABC::AcctABC(const string &fn, long an, double bal) {
    fullname = fn;
    accNum = an;
    balance = bal;
}

void AcctABC::Deposit(double amt) {
    if (amt < 0)
        cout << "Negative deposit not allowed; "
             << "deposit is cancelled.\n";
    else
        balance += amt;
}

void AcctABC::Withdraw(double amt) {
    balance -= amt;
}

AcctABC::Formatting AcctABC::SetFormat() const {
    Formatting f;
    f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void AcctABC::Restore(AcctABC::Formatting &f) const {
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}

void Brass::Withdraw(double amt) {
   if (amt < 0)
        cout << "Withdrawal amount must be positive; "
             << "withdrawal cancelled.\n";
    else if (amt <= Balance())
        Withdraw(amt);
    else
        cout << "Withdrawal amount of $" << amt
             << " exceeds your balance.\n"
             << "Withdrawal cancelled.\n";
}

void Brass::ViewAcct() const {
    Formatting f = SetFormat();
    cout << "Client: " << FullName() << endl;
    cout << "Account Number: " << AccNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    Restore(f);
}

BrassPlus::BrassPlus(const string &s, long an, double bal, double ml, double r) : AcctABC(s, an, bal) {
    maxLoan = ml;
    rate = r;
    owseBank = 0.0;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r) : AcctABC(ba) {
    maxLoan = ml;
    rate = r;
    owseBank = 0.0;
}

void BrassPlus::ViewAcct() const {
    Formatting f = SetFormat();

    cout <<"BrassPlus Client: " << FullName() << endl;
    cout << "Account Name: " << AccNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owe to Bank: $" << owseBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << "%\n";
    Restore(f);
}

void BrassPlus::Withdraw(double amt) {
    Formatting f = SetFormat();

    double bal = Balance();
    if (amt <= Balance())
        Withdraw(amt);
    else if (amt <= bal + maxLoan - owseBank) {
        double advance = amt - bal;
        owseBank += advance * (1 + rate);
        cout << "Bank advance:  $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        Withdraw(amt);
    } else
        cout << "Credit limit exceeded. Transaction cancelled.\n";
    Restore(f);
}
