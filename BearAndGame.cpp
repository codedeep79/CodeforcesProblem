// Link: http://codeforces.com/problemset/problem/673/A

#include<iostream>
#include <vector>

using namespace std;
vector<int> interestingTime;
int main(int argc, char **argv)
{
	int n, minute, next, current;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> minute;
		interestingTime.push_back(minute);
	}

	if (n == 1)
	{
		if (interestingTime[0] >= 16)
			cout << 15 << endl;
		else if (interestingTime[0] <= 15)
			cout << interestingTime[0] + 15 << endl;

		return 0;
	}

	if (n >= 2)
	{
		if (interestingTime.front() < 30 && interestingTime.front() > 15)
		{
			cout << 15 << endl;
			return 0;
		}
		else
		{
			current = 0;
			for (int i = 0; i < n; ++i)
			{
				next = interestingTime[i];
				if (next - current <= 15)
					current = next;
				else
				{
					cout << current + 15 << endl;
					return 0;
				}
			}
			if (interestingTime[interestingTime.size() - 1] - interestingTime[interestingTime.size() - 2] > 15)
			{
				cout << interestingTime[interestingTime.size() - 2] + 15 << endl;
				return 0;
			}
			if (90 - interestingTime[interestingTime.size() - 1] > 15) {
				cout << interestingTime[interestingTime.size() - 1] + 15 << endl;
				return 0;
			}
		}
	}

	cout << 90 << endl;

	return 0;
}
