//
// Created by xk on 2019/8/24.
//

#include "cd.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

Cd::Cd() {
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd::Cd(char *s1, char *s2, int n, double x) {
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d) {
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

void Cd::Report() const {
    cout << "Performer: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd &Cd::operator=(const Cd &d) {
    if (this == &d)
        return *this;
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


Classic::Classic() {
    product[0] = '\0';
}

Classic::Classic(char *s1, char *s2, char *s, int n, double x) : Cd(s1, s2, n, x) {
    strcpy(product, s);
}

Classic::Classic(Cd &d, char *s) : Cd(d) {
    strcpy(product, s);
}

void Classic::Report() const {
    Cd::Report();
    cout << "Product: " << product << endl;
}




