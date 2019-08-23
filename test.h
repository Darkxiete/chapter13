//
// Created by summer on 2019-08-22.
//

#ifndef CHAPTER13_TEST_H
#define CHAPTER13_TEST_H

#include <iostream>

using std::cout;
using std::endl;

class ClassA {
private:
    double number;
public:


    ClassA() {
        number = 0;
        cout << "Default constructor: ClassA!" << endl;
    }

    ClassA(double n) {
        number = n;
        cout << "Constructor: ClassA!" << endl;
    };
    virtual ~ClassA() {
        cout << "Destructor: ClassA!" << endl;
    }

    ClassA func1(const ClassA & a) {
        cout << "Number: " << number << endl;
        ClassA tmp = ClassA(a.number + 1);
        return tmp;
    }

//    ClassA & func2(const ClassA & a) {
//        cout << "Number: " << number << endl;
//        ClassA tmp = ClassA(a.number + 1);
//        return tmp;
//    }
};

class ClassB : public ClassA {
public:
    double _number;

    ClassB() {
        _number = 0;
        cout << "Default constructor: ClassB!" << endl;
    }

    ClassB(double n) {
        _number = n;
        cout << "Constructor: ClassB!" << endl;
    }

    ~ClassB() override {
        cout << "Destructor: ClassB!" << endl;
    }
};

#endif //CHAPTER13_TEST_H
