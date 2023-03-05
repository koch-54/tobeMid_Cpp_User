#include <iostream>
#include <cmath>        // cmathは計算するための標準のヘッダファイル
using namespace std;

int main() {
    double a, b;    // doubleとfloatはどちらも小数の型だが、doubleはfloatの倍精度の意味があり、よほどのことがない限りdoubleを使うのがいい

    cout << "直角を挟む2辺の長さを入力してください" << flush;
    cin >> a >> b;  

    cout << "斜辺の長さは" << sqrt(a * a + b * b) << "です。" << endl;  // sqrt(square root)は平方根を求める
}