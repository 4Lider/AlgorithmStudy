#include <iostream>
#include <algorithm>

#include <vector>
using namespace std;

const int MAX_N = 16;
const int INF = 2147000000;

int n, w[MAX_N][MAX_N];
int dp[MAX_N][1<<MAX_N];
int ans = INF;

int Answer(int curr, int state)
{
	if(state == (1<<n)-1 )
	{
		
	}

	int& ret = dp[curr][state];
	if(ret != 0) return ret;

	int tmp = INF;
	for(int next=0; next<n; next++)
	{
		
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin>>n;

	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
		cin>>w[i][j];

	cout<<Answer(0, 1)<<'\n';

	return 0;
}
