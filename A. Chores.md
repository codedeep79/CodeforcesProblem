Link problem: [http://codeforces.com/problemset/problem/169/A](http://codeforces.com/problemset/problem/169/A)

```
#include<iostream>
#include<algorithm>
#include <functional>  

using namespace std;

int main(int argc, char** argv){
	int n, a, b;
	cin >> n >> a >> b;
	int *h = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> h[i];
	}
	
	sort(h, (h + n), greater<int>());
	cout << h[a - 1] - h[a] << endl;
	return 0;
}
```
