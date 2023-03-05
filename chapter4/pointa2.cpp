#include <iostream>
using namespace std;

int main() {
    int a;
    int* p = &a;  // int型のポインタpにint型のアドレスaを代入

    a = 0;
    cout << " a = " << a << endl
         << "*p = " << *p << endl;      //　ポインタを変数のように扱うために*pと変数の前に*を書く

    *p = 5;     
    cout << " a = " << a << endl
         << "*p = " << *p << endl;
}