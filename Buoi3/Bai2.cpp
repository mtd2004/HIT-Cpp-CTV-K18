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
	int count = 0 , sum = 0 ;
	for(int i = 1 ; i < n ; i++)
	{
		if(n % i == 0)
		{
			count++ ;
			sum += i ;
		}
	}
	cout << n << " co " << count << " uoc duong" << endl ;
	cout << "Tong cua chung la: " << sum << endl ;
	return 0 ;
}