#include<iostream>
#include<algorithm>
using namespace std;

// Link: http://codeforces.com/problemset/problem/676/A
// Đổi chỗ sao cho phần tử nhỏ nhất là 1 và lớn nhất là n có khoảng cách lớn nhất. 
// Lưu ý: Chỉ được phép đổi chỗ 1 lần
// vd:
// 7
// 1 7 5 3 4 6 2 (Đổi chỗ 7 và 2)
// 6

// 8
// 3 2 1 4 5 6 8 7 (Đổi chỗ 3 và 1)
// 6

// Giải quyết:
// Vòng lặp i = 1; i <= n; ++i
// num là số nhập vào, pos1 và pos2 là vị trí của phần tử nhỏ nhất và lớn nhất 
// nếu num = 1 => pos1 = i
// nếu num = n => pos2 = i;
// max(max(n - pos1, pos1 - 1), max(n - pos2, pos2 - 1))
int main(int agrc, char** argv)
{
	int n, num, pos1 , pos2;

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> num;
		if (num == 1)
			pos1 = i;
		if (num == n)
			pos2 = i;
	}
	cout << max(max(n - pos1, pos1 - 1), max(n - pos2, pos2 - 1));
	return 0;
}
