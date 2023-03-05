#include <iostream>
using namespace std;

const int MAX_NAME = 16;

// structで型を定義できる。この場合4つの変数をもつStudentという型名を定義している
struct Student {
    char name[MAX_NAME + 1];
    int scoreJapanese;
    int scoreMath;
    int scoreEnglish;
};

void Show(const Student& student) {
    cout << "名前 : " << student.name << endl
         << " 国語 : " << student.scoreJapanese << " 点"
            ", 数学 : " << student.scoreMath << " 点"
            ", 英語 : " << student.scoreEnglish << " 点" << endl;
};

int main() {
    Student student[] = {
        {"赤井隆" , 73, 98, 86},
        {"笹井大輔", 64, 40, 45},
        {"吉田叶", 76, 78, 86},
    };
    int size = sizeof student / sizeof *student; // 要素数を計算する。*studentはポインタによる参照 -> 配列の単一要素

    for (int i = 0; i < size; i++) {
        Show(student[i]);
    }

}