#include <bits/stdc++.h>
#define MOD 1000000007
#define maxn 1000000
#define endl '\n'
#define fi first
#define se second
using namespace std ;
using ll = long long ;

int main()
{
	int n ; cin >> n ;
	long long sum = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		if(i % 2 == 0)
			sum -= i ;
		else
			sum += i ;
	}
	cout << sum << endl ;
	return 0 ;
}