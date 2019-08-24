//
// Created by xk on 2019/8/24.
//

#ifndef CHAPTER13_CD_H
#define CHAPTER13_CD_H


class Cd {
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd() {};
    virtual void Report() const;
    Cd &operator=(const Cd & d);
};

class Classic : public Cd {
private:
    char product[10];
public:
    Classic(char * s1, char * s2, char * s, int n, double x);
    Classic(Cd & d, char * s);
    Classic();
    ~Classic() {};
    void Report() const override;
};


#endif //CHAPTER13_CD_H
