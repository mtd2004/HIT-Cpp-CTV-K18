#include <bits/stdc++.h>
using namespace std ;

int main()
{
	int n ; cin >> n ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	int c100 = 0 , c200 = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] == 100)
			c100++ ;
		else if(a[i] == 200)
			c200++ ;
	}
	if((c100 + c200 * 2) % 2 == 0)
		cout << "YES" << endl ;
	else
		cout << "NO" << endl ;
	return 0 ;
}
