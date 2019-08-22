//
// Created by summer on 2019-08-22.
//

#include <iostream>
#include "brass.h"


int main() {
    using std::string;
    using std::cout;
    using std::endl;

    Brass Piggy("porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
    Piggy.ViewAcc();
    cout << endl;
    Hoggy.ViewAcc();
    cout << endl;
    cout << "Depositing $1000 into the Hogg Account:\n";
    Hoggy.Despoit(1000.00);
    cout << "New balance: $" << Hoggy.Balance() << endl;
    cout << "Withdrawing $4200 from the Hogg Account:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcc();

    return 0;
}