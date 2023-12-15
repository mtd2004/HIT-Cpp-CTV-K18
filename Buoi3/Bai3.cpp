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
	long long n ; cin >> n ;
	cout << n << " " ;
	while(n != 1)
	{
		if(n % 2 == 1)
			n = n * 3 + 1 ;
		else
			n = n / 2 ;
		cout << n << " " ;
	}
	return 0 ;
}