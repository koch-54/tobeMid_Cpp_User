#include <iostream>
using namespace std;

int main() {
    // sizeofは型のバイト数を返す
    cout << sizeof(int) << endl;  
    cout << sizeof(long) << endl;  
    cout << sizeof(char) << endl;
    cout << sizeof(short) << endl;  

    cout << "-------------" << endl;  

    // 小数型
    cout << sizeof(float) << endl;  
    cout << sizeof(double) << endl;  
    cout << sizeof(long double) << endl;
}