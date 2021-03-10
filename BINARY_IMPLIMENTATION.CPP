#include <iostream>
#include <string>
using namespace std;

class saurabh
{
    string s;

public:
    void read(void);
    void check(void);
};
void saurabh::read()
{
    cout << "enter the string" << endl;
    cin >> s;
}
void saurabh::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout << "he incorrect binary format is"<< endl;
            exit(0);
        }
    }
}
int main()
{
    saurabh s;
    s.read();
    s.check();
    return 0;
}