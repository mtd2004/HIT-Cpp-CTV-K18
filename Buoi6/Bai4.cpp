#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n , m ; cin >> n >> m ;
    int a[n][m] ;
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
    		for(int k = j + 1 ; k < m ; k++)
    		{
    			if(a[i][j] > a[i][k])
    			{
    				int temp = a[i][j] ;
    				a[i][j] = a[i][k] ;
    				a[i][k] = temp ;
    			}
    		}
    	}
    }
    for(int i = 0 ; i < n ; i++)
    {
    	for(int j = 0 ; j < m ; j++)
    		cout << a[i][j] << " " ;
    	cout << endl ;
    }
    return 0 ;
}
