#include <iostream>
using namespace std;

int main()
{
    long long pr1 = 1, pr2 = 1, pr3 = 1, pr4 = 1;
    for(int i = 8; i < 16; ++i)
    {
       pr1 *= i;
    }
    cout << pr1 << endl;

    int a;
    cout << "Enter a number between 1 and 20: ";
    cin >> a;
    for (a; a < 21; ++a)
    {
        pr2 *= a;
    }
    cout << pr2 << endl;

    int b;
    cout << "Enter a number between 1 and 20: ";
    cin >> b;
    for (int i = 1; i <= b; ++i)
    {
        pr3 *= i;
    }
    cout << pr3 << endl;

    int a1, b1;
    cout << "Enter a number:";
    cin >> a1;
    cout << "Enter a number bigger or equal previous number:";
    cin >> b1;
    for (int i = a1; i <= b1; ++i)
    {
        pr4 *= i;
    }
    cout << pr4 << endl;
    return 0;
}
