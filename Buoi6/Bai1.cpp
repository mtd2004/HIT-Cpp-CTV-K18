#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n , m ; cin >> n >> m ;
    int a[n][m] ;
    int tongchan = 0 , hieule = 0 ;
    int chan = 0 , le = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
    	for(int j = 0 ; j < m ; j++)
    	{
    		cin >> a[i][j] ;
    	}
    }
    for(int i = 0 ; i < n ; i++)
    {
    	for(int j = 0 ; j < m ; j++)
    	{
    		if(a[i][j] % 2 == 0)
    		{
    			chan++ ;
    			tongchan += a[i][j] ;
    		}
    		else
    		{
    			le++ ;
    			hieule -= a[i][j] ;
    		}
    	}
    }
    cout << chan << " " << tongchan << endl ;
    cout << le << " " << hieule << endl ;
    return 0 ;
}
