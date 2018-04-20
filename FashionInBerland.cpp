/*
Link: http://codeforces.com/problemset/problem/691/A
*/


#include<stdio.h>

int main(int argc, char** agrv)
{
	int n, k, t = 0, y = 0;
	scanf("%d", &n);
	y = n;
	while (y--) {
		scanf("%d", &k);
		if (k == 1)
			++t;
	}

	if (n == 1 && k == 1)
		printf("YES\n");

	else if (n > 1 && t == n - 1)
		printf("YES\n");
	else 
		printf("NO\n");
	return 0;
	
}
