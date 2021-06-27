#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
    //void chk_bin(void);

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void Display(void);
};

void binary ::read(void)
{
    cout << "Enter a number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not binary" << endl;

            exit(0);
        }
       /* else
        {
            cout << "binary" << endl;
            //break;
            exit(0);
        }*/
    }
}
void binary ::ones(void)
{
    //chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::Display(void)
{
    cout << "Displaying your binary no. : "<< s << endl;
}
int main()
{
    binary b1;
    b1.read();
    b1.chk_bin();
    b1.Display();
    b1.ones();
    b1.Display();

    return 0;
}