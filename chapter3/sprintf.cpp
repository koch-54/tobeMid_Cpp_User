#include <iostream>
#include <cstdio>
using namespace std;

int f(int x, int y) {
    return 2 * x + y;
}

void Show(int x, int y) {
    char str[50];

    sprintf(str, "f(%d, %d) = %d", x, y, f(x, y));      // 変数strを第2引数で書式を設定して、それ以降の引数でその書式の変換指定子に入れる変数を入れる
    cout << str << endl;
}

int main() {
    Show(2, 3);
    Show(114, 637);
}   