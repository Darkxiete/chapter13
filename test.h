//
// Created by summer on 2019-08-22.
//

#ifndef CHAPTER13_TEST_H
#define CHAPTER13_TEST_H

#include <iostream>

using std::cout;
using std::endl;


class ClassA {

public:

    double number;
    ClassA() {
        number = 0;
        cout << "Default constructor: ClassA!" << endl;
    }

    ClassA(double n) {
        number = n;
        cout << "Constructor: ClassA!" << endl;
    };

    ClassA(const ClassA &a) {
        cout << "Duplicate Constructor: ClassA!" << endl;
    }

    virtual ~ClassA() {
        cout << "Destructor: ClassA!" << endl;
    }

    ClassA func1(const ClassA &a) {
        cout << "Number: " << number << endl;
        ClassA tmp = ClassA(a.number + 1);
        return tmp;
    }

    ClassA operator>(const ClassA &b) {
        if (this->number > b.number)
            return *this;
        else
            return b;
    }

    ClassA &operator<(ClassA &b) {
        if (this->number > b.number)
            return *this;
        else
            return b;
    }

    ClassA &operator=(const ClassA &b) {
        cout << "Assignment constructor ClassA!" << endl;
        this->number = b.number;
        return *this;
    }

    const ClassA operator+(const ClassA &b) const {
        ClassA tmp;
        tmp.number = this->number + b.number;
        return tmp;
//        return ClassA(this->number + b.number);
    }

};

class ClassB : public ClassA {
public:
    double _number;

    ClassB() {
        _number = 0;
        cout << "Default constructor: ClassB!" << endl;
    }

    ClassB(double n1, double n2 = 0) : ClassA(n2) {
        _number = n1;
        cout << "Constructor: ClassB!" << endl;
    }

};

class ClassC : public ClassA {
public:
    double __number = 0;
};


#endif //CHAPTER13_TEST_H
