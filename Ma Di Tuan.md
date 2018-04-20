Mã đi tuần (hay hành trình của quân mã) là bài toán về việc di chuyển một quân mã trên bàn cờ vua ( 8 x 8). Quân mã được đặt ở một ô trên một bàn cờ trống nó phải di chuyển theo quy tắc của cờ vua để đi qua mỗi ô trên bàn cờ đúng một lần.

Ý tưởng:
+ Ta cần lưu trữ các vị trí con mã đi qua: int a[N][N], với N là số dòng (cột) của bàn cờ.
+ Giả sử con mã đang ở vị trí (x, y). Ta có 8 khả năng  con mã có thể đi qua (x-2, y-1), (x-1, y-2), (x+1, y-2), (x+2, y-1), (x+2, y+1), (x+1, y+2), (x-1, y+2), (x-2, y+1). Dùng thuật toán thử và sai để tìm vị trí kế tiếp của con mã. Vị trí kế tiếp (u, v) là vị trí phải nằm trong bàn cờ (0 <= u, v < n) và con mã chưa đi qua (a[u][v] == 0).

```
#include<iostream>
#include<iomanip>
#define N 8
using namespace std;

void init();
void printChessboard();
void goKnight(int, int, int, bool&);

int a[N][N];
int dx[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };

int main(int argc, char** agrv)
{
	bool flag = false;
	init();

	a[4][5] = 1;
	goKnight(2, 4, 5, flag);
	printChessboard();

	system("pause");
	return 0;
}

void init(){
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			a[i][j] = 0;
}

void printChessboard() {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}

// i: Số lượt đã đi
// x,y: Là tọa độ ban đầu của mã
void goKnight(int i, int x, int y, bool &flag){
	// (u,v): Tọa độ vị trí kế tiếp
	// k: Số khả năng con mã đã di chuyển
	int k = 0, u, v;

	// Lưu di chuyển thành công hay thất bại
	bool result = false;
	
	do {
		u = x + dx[k];
		v = y + dy[k];

		if ((u >= 0) && (u < N) && (v >= 0) && (v < N) && (a[u][v] == 0))
		{
			// Gán vị trí mà con ngựa đi qua
			a[u][v] = i;
			if (i < N*N)
			{
				goKnight(i + 1, u, v, result);
			}
			else
			{
				result = true;
			}
		}
		++k;

	} while (result == false && k < 8);
	flag = result;
}
```
