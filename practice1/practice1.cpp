#include <iostream>
using namespace std;
int main() {
	int num = 1;
	while (num) { //whileの条件が省略されている。num=1なので、num =0（偽であるとき）繰り返しが終了する。
		cout << "整数を入力してください\n";
		cin >> num;
		cout << num << "が入力されました\n";
	}
	cout << "繰り返しが終わりました\n";
	return 0;
}