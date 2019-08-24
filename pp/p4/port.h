//
// Created by xk on 2019/8/24.
//

#ifndef CHAPTER13_PORT_H
#define CHAPTER13_PORT_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;
using std::cout;

class Port {
private:
    string brand;
    string style;
    int bottles;
public:
    Port(const string & br = "none", const string & st = "none", int b= 0);
    Port(const Port &p);
    Port &operator=(const Port & p);
    Port &operator+=(int b);
    Port &operator-=(int b);
    int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend ostream &operator<<(ostream & os, const Port &p);
};

class VintagePort : public Port {
private:
    string nickname;
    int year;
public:
    VintagePort();
    VintagePort(const string & br, const string & st, const string & nn="none",  int y=1993);
    ~VintagePort() {}
    void Show() const override;
    friend ostream &operator<<(ostream & os, const VintagePort &vp);
};



#endif //CHAPTER13_PORT_H
