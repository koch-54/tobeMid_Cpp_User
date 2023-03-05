#include <iostream>
#include <cstdlib>
using namespace std;

int Dice() {
    return rand() % 6 + 1;      // rand()で乱数を作る。それを6で割ったあまりは0〜5だから、それに1を足すと1〜6の乱数になる
}

int main() {
    for(int i = 0; i < 20; i++) {
        cout << Dice() + Dice() << ' ';
    }
    cout << endl;
}