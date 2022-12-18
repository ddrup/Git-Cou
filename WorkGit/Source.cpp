#include<iostream>
using namespace std;
const int MAXN = 100500;
int dp[MAXN];
int main()
{
	int n;
	int* a = new int[n];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] = 23 + a[i];
	}
	dp[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		for(int j=0;j<i;j++)
		{
			if (a[i] > dp[i - 1])
			{
				dp[i] = a[i];
			}
		}
	}
	return 0;
}