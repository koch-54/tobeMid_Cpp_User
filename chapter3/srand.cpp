#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// rand, rand2では同じ乱数種を使っていたため何度ファイルを読み込んでも同じ値しか得られなかった。
// そこでsrand関数とtime関数を使って乱数種を更新することで毎回違う乱数が生成されるようにする
void InitRand() {
    srand((unsigned int)time(NULL)); // 1秒ごとに違う乱数種をつくる
}

int Dice() {
    return rand() % 6 + 1;
}

int main() {
    InitRand();
    for (int i = 0; i < 20; i++) {
        cout << Dice() + Dice() << ' ';
    }
    cout << endl;
}