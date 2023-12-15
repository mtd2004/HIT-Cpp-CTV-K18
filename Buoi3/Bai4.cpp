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
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n - i ; j++)
		{
			cout << " " ;
		}
		for(int j = 1 ; j <= 2 * i - 1 ; j++)
		{
			cout << "x" ;
		}
		cout << endl ;
	}
	return 0 ;
}