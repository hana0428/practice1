#include <iostream>
using namespace std;
int main() {
	int num = 1;
	while (num) { //while�̏������ȗ�����Ă���Bnum=1�Ȃ̂ŁAnum =0�i�U�ł���Ƃ��j�J��Ԃ����I������B
		cout << "��������͂��Ă�������\n";
		cin >> num;
		cout << num << "�����͂���܂���\n";
	}
	cout << "�J��Ԃ����I���܂���\n";
	return 0;
}