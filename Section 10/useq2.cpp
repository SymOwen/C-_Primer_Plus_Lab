#include <iostream>
#include "q2.h"

int main()
{
    {
        using std::cout;
        cout << "add customer 1 and customer 2...\n";
        Bank cus1 = Bank ("customer 1", "000000001", 1000.00);
        Bank cus2("costomer 2", "000000002", 2000.00);
        cus1.show();
        cus2.show();

        cout << "testing save and withdraw ...\n";
        cus1.save(1000.00);
        cus1.show();
        cus1.withdraw(500.00);
        cus1.show();
        cus2.withdraw(2500.00);
        cus2.show();

        cout << "Assigning customer 2 to customer 1 ...\n";
        cus1 = cus2;
        cus1.show();
        cus2.show();

        cout << "Reset customer 2 ...\n";
        cus2 = Bank("vip customer", "100000001", 10000.00);
        cus1.show();
        cus2.show();
        cout << "done.\n";

    }
    return 0;
}