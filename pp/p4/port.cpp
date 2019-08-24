//
// Created by xk on 2019/8/24.
//

#include "port.h"
#include <iostream>


Port::Port(const string &br, const string &st, int b) {
    brand = br;
    style = st;
    bottles = b;
}

Port::Port(const Port &p) {
    brand = p.brand;
    style = p.style;
    bottles = p.bottles;
}

Port& Port::operator=(const Port &p) {
    if (&p == this)
        return *this;
    brand = p.brand;
    style = p.style;
    bottles = p.bottles;
}

Port& Port::operator+=(int b) {
    bottles += b;
}

Port& Port::operator-=(int b) {
    bottles -=b;
}

void Port::Show() const {
    cout << "Brand: " << brand << '\n';
    cout << "Style: " << style << '\n';
    cout << "Bottles: " << bottles << '\n';
}

ostream &operator<<(ostream &os, const Port &p) {
    cout << p.brand << ", " << p.style << ", " << p.bottles;
}

VintagePort::VintagePort() : Port() {
}

VintagePort::VintagePort(const string &br, const string &st, const string &nn, int y) : Port(br, st, y) {
    nickname = nn;
    year = y;
}


void VintagePort::Show() const {
    Port::Show();
    cout << "Nickname: " << nickname << '\n'
         << "Year: " << year << '\n';
}

ostream & operator<<(ostream & os, const VintagePort & vp) {
    os << vp.nickname << ", " << vp.year;
    return os;
}


