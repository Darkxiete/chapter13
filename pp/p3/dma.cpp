//
// Created by xk on 2019/8/24.
//

#include "dma.h"
#include <iostream>

using std::cout;
using std::endl;

DMA::DMA(const string & l, int r) {
    label = l;
    rating = r;
}


string DMA::get_label() const {
    return label;
}

int DMA::get_rating() const {
    return rating;
}

void DMA::View() {
    cout << "Label: " << get_label() << endl;
    cout << "Rating: " << get_rating() << endl;
}

baseDMA::baseDMA(const string & l, int r) : DMA(l, r) {}

void baseDMA::View() {
    DMA::View();
}

lackDMA::lackDMA(const string &c, const string &l, int r) : DMA(l, r){
    color = c;
}

void lackDMA::View() {
    DMA::View();
    cout << "Color: " << color << endl;
}

hasDMA::hasDMA(const string &s, const string &l, int r) : DMA(l, r) {
    style = s;
}

void hasDMA::View() {
    DMA::View();
    cout << "Style: " << style << endl;
}

