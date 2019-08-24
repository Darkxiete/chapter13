//
// Created by xk on 2019/8/24.
//

#ifndef CHAPTER13_DMA_H
#define CHAPTER13_DMA_H

#include <string>

using std::string;

class DMA {
private:
    string label;
    int rating;
public:
    explicit DMA(const string &l = "null", int r = 0);

    string get_label() const;

    int get_rating() const;

    virtual ~DMA() {};

    virtual void View();
};

class baseDMA : public DMA {
public:
    explicit baseDMA(const string &l = "null", int r = 0);

    virtual ~baseDMA() {};

    void View() override;
};

class lackDMA : public DMA {
private:
    string color;
public:
    explicit lackDMA(const string &c = "null", const string &l = "null", int r = 0);

    virtual ~lackDMA() {};

    void View() override;
};

class hasDMA : public DMA {
private:
    string style;
public:
    explicit hasDMA(const string & s = "none", const string &l = "null", int r = 0);

    virtual ~hasDMA() {};

    void View() override;
};

#endif //CHAPTER13_DMA_H
