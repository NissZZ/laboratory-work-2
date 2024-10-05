#include <iostream>
using namespace std;

int main()
{
    using byte = unsigned char;
    pair<byte, byte> positionA;
    cout << "Enter position A:";
    cin >> positionA.first >> positionA.second;

    pair<byte, byte> positionB;
    cout << "Enter position B:";
    cin >> positionB.first >> positionB.second;

    if (positionA.first != positionB.first && positionA.second != positionB.second)
    {
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;


    cout << "Enter position A:";
    cin >> positionA.first >> positionA.second;
    cout << "Enter position B:";
    cin >> positionB.first >> positionB.second;
    if(positionA.first + positionA.second == positionB.first + positionB.second || abs(positionA.first - positionA.second) == abs(positionB.first - positionB.second))
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;


    cout << "Enter position A:";
    cin >> positionA.first >> positionA.second;
    cout << "Enter position B:";
    cin >> positionB.first >> positionB.second;
    if(((positionA.first - 1 == positionB.first) || (positionA.first == positionB.first) || (positionA.first + 1 == positionB.first)) && ((positionA.second - 1 == positionB.second) || (positionA.second == positionB.second) || (positionA.second + 1 == positionB.second)))
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;


    cout << "Enter position A:";
    cin >> positionA.first >> positionA.second;
    cout << "Enter position B:";
    cin >> positionB.first >> positionB.second;
    if(!(positionA.first != positionB.first && positionA.second != positionB.second) || (positionA.first + positionA.second == positionB.first + positionB.second || abs(positionA.first - positionA.second) == abs(positionB.first - positionB.second)))
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;


    cout << "Enter position A:";
    cin >> positionA.first >> positionA.second;
    cout << "Enter position B:";
    cin >> positionB.first >> positionB.second;
    if(abs(positionA.first - positionB.first) <= 0 && (positionA.second + 1 == positionB.second))
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}
