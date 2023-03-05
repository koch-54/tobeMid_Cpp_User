#include <iostream>
using namespace std;

int main() {
    char a;
    char* p;        // ポインタの定義、ポインタはアドレスを格納できる

    p = &a;          // 変数に&をつけることで変数のアドレスを得られる。アドレスは変数の位置(メモリの位置)を表す。この場合変数aの位置がポインタpに代入される
    cout << "p = " << (size_t) p << endl
         << "&a = " << (size_t) &a << endl;
}