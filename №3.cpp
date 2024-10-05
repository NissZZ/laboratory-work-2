#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i < 10; ++i)
    {
        cout <<i<< " * 7 =  " << i*7 << endl;
    }

    cout << endl;

    double N;
    cout << "Enter a number:";
    cin >> N;
    for(int i = 1; i < 10; ++i)
    {
        cout <<i<< " * "<< N << " =  " << i*N << endl;
    }

    return 0;
}
