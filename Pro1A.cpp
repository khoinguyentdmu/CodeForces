//http://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;
int main()
{
	double n, m, a;
	cin>>n>>m>>a;
	cout<<(ll)(ceil(n/a))*(ll)(ceil(m/a));
	return 0;
}
