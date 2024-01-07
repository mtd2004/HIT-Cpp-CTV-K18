#include <bits/stdc++.h>
using namespace std ;
bool soNguyenTo(int n)
{
	for(int i = 2 ; i <= sqrt(n) ; i++)
	{
		if(n % i == 0)
			return false ;
	}
	return n > 1 ;
}
int main()
{
    int n ; cin >> n ;
    int a[n][n] ;
    int count = 0 , sum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
    	for(int j = 0 ; j < n ; j++)
    	{
    		cin >> a[i][j] ;
    	}
    }
    for(int i = 0 ; i < n ; i++)
    {
    	for(int j = 0 ; j < n ; j++)
    	{
    		if(soNguyenTo(a[i][j]))
    		{
    			count++ ;
    			sum += a[i][j] ;
    			cout << a[i][j] << " " ;
    		}
    	}
    }
    if(count == 0)
    	cout << 0 << endl ;
    else
    {
    	cout << endl ;
    	cout << sum << endl ;
    }
    return 0 ;
}
