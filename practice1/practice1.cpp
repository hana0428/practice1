#include <iostream>
using namespace std;
int main() {
    int num, sum;
    sum = 0;
    cout << "科目1の点数を入力してください\n";
    cin >> num;
    sum += num;
    cout << "科目2の点数を入力してください\n";
    cin >> num;
    sum += num;
    cout << "科目3の点数を入力してください\n";
    cin >> num;
    sum += num;
    cout << "科目4の点数を入力してください\n";
    cin >> num;
    sum += num;
    cout << "科目5の点数を入力してください\n";
    cin >> num;
    sum += num;
    cout << sum << "\n";
    return 0;
}