//
// Created by summer on 2019-08-22.
//

#ifndef CHAPTER13_TEST_H
#define CHAPTER13_TEST_H


class ClassA {
public:
    double number;

    ClassA() { number = 0; }

    ClassA(double n) { number = n; };
};

class ClassB : public ClassA {
public:
    double _number;

    ClassB() { _number = 0; }

    ClassB(double n) { _number = n; }
};

#endif //CHAPTER13_TEST_H
