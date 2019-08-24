//
// Created by xk on 2019/8/24.
//

#include "cd.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;


Cd::Cd(const char *s1, const char *s2, int n, double x) : selections(n), playtime(x) {
    performers = cpNewStr(s1);
    label = cpNewStr(s2);
}

Cd::Cd(const Cd &d) : selections(d.selections), playtime(d.playtime) {
    performers = cpNewStr(d.performers);
    label = cpNewStr(d.label);
}

Cd::~Cd() {
    delete[] performers;
    delete[] label;
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
    delete[] performers;
    performers = cpNewStr(d.performers);
    delete[] label;
    label = cpNewStr(d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


Classic::Classic(const char *songs_list, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x) {
    songs = cpNewStr(songs_list);
}

Classic::Classic(const Classic &classic) : Cd(classic) {
    songs = cpNewStr(classic.songs);
}

Classic &Classic::operator=(const Classic &classic) {
    if (&classic == this)
        return *this;
    Cd::operator=(classic);
    delete[] songs;
    songs = cpNewStr(classic.songs);
    return *this;
}

void Classic::Report() const {
    Cd::Report();
    cout << "Songs_list: " << songs << endl;
}



