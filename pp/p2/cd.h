/*
 *  Created by xk on 2019/8/24.
 *  几个需要注意的地方:
 *  1. 赋值运算符返回的是引用
 *  2. 构造函数里写默认值就可以不用谢默认构造函数了
 */




#ifndef CHAPTER13_CD_H
#define CHAPTER13_CD_H

#include <cstring>

class Cd {
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    explicit Cd(const char *s1 = "", const char *s2 = "", int n = 0, double x = 0.0);

    Cd(const Cd &d);

    ~Cd();

    virtual void Report() const;

    Cd &operator=(const Cd &d);
};

class Classic : public Cd {
private:
    char *songs;
public:
    explicit Classic(const char *songs_list = "", const char *s1 = "", const char *s2 = "", int n = 0, double x = 0.0);

    Classic(const Classic &classic);

    virtual ~Classic();

    Classic &operator=(const Classic &classic);

    void Report() const override;


};

static char *cpNewStr(const char *p_src) {
    unsigned str_len = strlen(p_src);
    char *p_des = new char[str_len + 1];
    strcpy(p_des, p_src);
    return p_des;
}

#endif //CHAPTER13_CD_H
