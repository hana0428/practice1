#include <iostream>
using namespace std;

inline int square(int x) {return x * x;}	// �v���g�^�C�v�錾 
inline double square(double y) {return y * y;}
int main(void)
{
	int name1, ans1;
	double name2, ans2;

	cout << "��������͂��Ă�������\n";
	cin >> name1;
	ans1 = square(name1);
	cout << name1 << "�̓���" << ans1 << "�ł�\n";

	cout << "��������͂��Ă�������\n";
	cin >> name2;
	ans2 = square(name2);
	cout << name2 << "�̓���" << ans2 << "�ł�\n";
	return 0;
}


