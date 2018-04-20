#include<iostream>
#include<algorithm>
using namespace std;

// Link: http://codeforces.com/problemset/problem/572/A
// Mô tả ý tưởng:
// Có 2 mảng A và B. Kiểm tra xem nếu chọn k các số trong mảng A và m các số trong mảng B
// sao cho bất kỳ giá trị các phần tử được chọn trong mảng A cũng nhỏ hơn số phần tử được chọn trong mảng B

// vd:
// 3 3
// 1 1
// 1 2 3
// 1 2 3
// expected answer: YES (By Codeforces's test)
// Như vậy mảng B phải đảo ngược hay trộn mảng lại rồi so sánh nếu không sẽ trả về NO, không như kq test
int main(int argc, char** agrv){
	int nA, nB, k, m, arrA[100001], arrB[100001];

	cin >> nA >> nB >> k >> m;
	for (int i = 0; i < nA; ++i)
		cin >> arrA[i];
	for (int i = 0; i < nB; ++i)
		cin >> arrB[i];

	reverse(arrB, arrB + nB);
	if (*max_element(arrA, arrA + k) < *min_element(arrB, arrB + m)) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}
