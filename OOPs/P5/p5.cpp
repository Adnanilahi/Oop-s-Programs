#include <iostream>
#include <string>

using namespace std;
class AccountsBook
{
public:
    string name[5];
    int accountNumber[5];
    int &operator[](const string &s)
    {
        for (int i = 0; i < 5; i++)
        {
            if (this->name[i] == s)
            {
                return accountNumber[i];
            }
        }
        throw "Not Found!";
    }
    string &operator[](int number)
    {
        for (int i = 0; i < 5; i++)
        {
            if (this->accountNumber[i] == number)
            {
                return name[i];
            }
        }
        return (string &)"Not Found!";
    }
};
int main()
{
    AccountsBook ab;
    ab.name[0] = "Adam";
    ab.name[1] = "Mill";
    ab.name[2] = "Messi";
    ab.name[3] = "Buttler";
    ab.name[4] = "Wood";

    ab.accountNumber[0] = 1001;
    ab.accountNumber[1] = 1002;
    ab.accountNumber[2] = 1003;
    ab.accountNumber[3] = 1004;
    ab.accountNumber[4] = 1005;
    cout << ab["Adam"] << endl;
    cout << ab[1003] << endl;
}