#include<iostream>
using namespace std;


// Link: http://codeforces.com/problemset/problem/242/B
// Giả thiết: [a,b] bao phủ [c,d] với đk a <= c <= d <=b
// Tìm [a,b] vớ 1 ≤ a ≤ b ≤ 10^9
// Mô tả ý tưởng:
//  - Nhập n segments
//	- Chạy vòng lặp for từ 0 đến n - 1
//  - Nhập seg1[index] và seg2[index]
//  - Chạy vòng lặp for từ 0 đến n - 1 duyệt các seg1[index] và seg2[index]
//	- Tìm seg1[index] với seg1[index] có trị số seg1[index] nhỏ nhất trong các segment và lưu vào x variable
//  - Tìm seg2[index] với seg2[index] có trị số seg2[index] lớn nhất trong các segment và lưu vào y variable
//  - Chạy vòng lặp for từ 0 đến n - 1 in vị trí của segment phù hợp với đk [a,b], nếu không tìm được segment nào 
// thì trả về -1

int main(int argc, char** argv)
{
	int n, seg1[1000005], seg2[1000005], x = 1000000000, y = 0, pass = -2;
	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> seg1[i] >> seg2[i];

	for (int i = 0; i < n; ++i)
	{
		if (seg1[i] < x)
			x = seg1[i];
		if (seg2[i] > y)
			y = seg2[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (seg1[i] == x && seg2[i] == y)
		{
			pass = i;
			break;
		}
	}

	cout << pass + 1 << endl;

	system("pause");

	return 0;
}
