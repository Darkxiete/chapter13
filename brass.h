//
// Created by summer on 2019-08-22.
//

#ifndef CHAPTER13_BRASS_H
#define CHAPTER13_BRASS_H

#include <string>

using std::string;

class Brass {
private:
    string fullName;
    long acctNum;
    double balance;
public:
    Brass(const string &s = "Nullbody", long an = -1, double bal = 0.0);

    virtual ~Brass() {};

    void Despoit(double amt);

    virtual void Withdraw(double amt);

    double Balance() const { return balance; };

    virtual void ViewAcc() const;
};


class BrassPlus : public Brass {
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const string &s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);

    BrassPlus(const Brass &ba, double ml = 500, double r = 0.11125);

    virtual ~BrassPlus() {};

    virtual void ViewAcc() const;

    virtual void Withdraw(double amt);

    void ResetMax(double m) { maxLoan = m; }

    void ResetRate(double r) { rate = r; }

    void ResetOweBank() { double oweBank = 0; }
};

#endif //CHAPTER13_BRASS_H
