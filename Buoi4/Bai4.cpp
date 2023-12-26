#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n ; cin >> n ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++)
		cin >> a[i] ;
	int maxn = a[0] ;
	for(int i = 1 ; i < n ; i++)
	{
		if(maxn < a[i])
			maxn = a[i] ;
	}
	int b[n] , count = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] != maxn)
		{
			b[count] = a[i] ;
			count++ ;
		}
	}
	if(count == 0)
		cout << 0 << endl ;
	else
	{
		for(int i = 0 ; i < count ; i++)
			cout << b[i] << " " ;
	}
	return 0 ;
}
