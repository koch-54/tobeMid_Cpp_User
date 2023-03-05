#include <iostream>
#include <cstdlib>
using namespace std;

// randファイルのときよりも出る乱数の値がバラける
int Dice() {
    return (int) (rand() / (RAND_MAX + 1.0) * 6) + 1;   // rand() / (RAND_MAX + 1.0)で(0 <= x < 1)の乱数を作る。それに6をかけて(0 <= x < 6)の乱数を作る(整数値は0〜5まで)。これに1をたすと1〜6までの乱数ができる
}

int main() {
    for (int i = 0; i < 20; i++) {
        cout << Dice() + Dice() << ' ';
    }
    cout << endl;
}