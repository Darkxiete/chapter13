//
// Created by xk on 2019/8/24.
//

#include "port.h"

int main() {
    Port p1;
    Port p2 = Port("Qingdao", "Hot", 20);
    VintagePort p3;
    VintagePort p4 = VintagePort("Xuehua", "cool", "xh", 1980);
    p1.Show();
    p2.Show();
    p1 += 10;
    p1.Show();
    p2 -= 10;
    p2.Show();
    p3.Show();
    p3 = p4;
    p3.Show();
    p4.Show();
}