//
// Created by xk on 2019/8/22.
//

#include <iostream>
#include "tabtenn1.h"

int main() {
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer ratedPlayer1(1140, "Mallory", "Duck", true);
    if (ratedPlayer1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";
    player1.Name();
    if (player1.HasTable())
        cout << ": has a table";
    else
        cout << ": hasn't a table.\n";
    cout << "Name: ";
    ratedPlayer1.Name();
    cout << "; Rating: " << ratedPlayer1.Rating() << endl;
    RatedPlayer ratedPlayer2(1212, player1);
    cout << "Name: ";
    ratedPlayer2.Name();
    cout << "; Rating: " << ratedPlayer2.Rating() << endl;

    return 0;
}