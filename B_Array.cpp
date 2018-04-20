#include<iostream>
using namespace std;
#define MAX 100005

// Link problem: http://codeforces.com/contest/224/submission/37422481

int main(int argc, char** argv) {
	int n, k, arr[MAX], count[MAX] = {}, left = 0, right = 0, dem = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	for (right = 1; right <= n; ++right)
	{
		count[arr[right]]++;
		if (count[arr[right]] == 1)
			++dem;
	
		if (dem == k)
		{
			for (left = 1; left <= right; ++left)
			{
				count[arr[left]]--;
				if (count[arr[left]] == 0)
				{
					cout << left << " " << right << endl;
					return 0;
				}
			}
		}
	}

	if (dem < k)
		cout << "-1 -1" << endl;

	return 0;
}
