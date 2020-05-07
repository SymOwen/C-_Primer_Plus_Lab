#ifndef QUE2_H_
#define QUE2_H_
#include <string>


class Bank{
    private:
        std::string name;
        std::string acc_num;
        double balance;
    public:
        Bank();
        Bank(const std::string & co, const std::string & an, double pr = 0.00);
        ~Bank();
        void save(double num);
        void withdraw(double num);
        void show();
};

#endif