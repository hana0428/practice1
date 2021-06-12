#include <iostream>
using namespace std;

inline int square(int x) {return x * x;}	// プロトタイプ宣言 
inline double square(double y) {return y * y;}
int main(void)
{
	int name1, ans1;
	double name2, ans2;

	cout << "整数を入力してください\n";
	cin >> name1;
	ans1 = square(name1);
	cout << name1 << "の二乗は" << ans1 << "です\n";

	cout << "実数を入力してください\n";
	cin >> name2;
	ans2 = square(name2);
	cout << name2 << "の二乗は" << ans2 << "です\n";
	return 0;
}


