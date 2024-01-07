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
    int maxsumrow =  INT_MIN , minsumcol = INT_MAX ;
    int indexrow[n] , indexcol[m] ;
    int row = 0 , col = 0 ;
    for(int i = 0 ; i < n ; i++)
    {	
    	int tonghang = 0 ;
    	for(int j = 0 ; j < m ; j++)
    	{
    		tonghang += a[i][j] ;
    	}
    	if(maxsumrow < tonghang)
    	{
    		maxsumrow = tonghang ;
    		indexrow[0] = i ;
    		row = 1 ;
    	}
    	else if(maxsumrow == tonghang)
    	{
    		indexrow[row] = i ;
    		row++ ;
    	}
    }
    for(int i = row - 1 ; i >= 0 ; i--)
    {
    	int index = indexrow[i] ;
    	for(int j = index ; j < n - 1 ; j++)
    	{
    		for(int k = 0 ; k < m ; k++)
    		{
    			a[j][k] = a[j + 1][k] ;
    		}
    	}
    	n--;
    }
    for(int i = 0 ; i < n ; i++)
    {
    	for(int j = 0 ; j < m ; j++)
    		cout << a[i][j] << " " ;
    	cout << endl ;
    }	
    for(int j = 0 ; j < m ; j++)
    {
    	int tongcot = 0 ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		tongcot += a[i][j] ;
    	}
    	if(tongcot < minsumcol)
    	{
    		minsumcol = tongcot ;
    		col = 1 ;
    		indexcol[0] = j ;
    	}
    	else if(tongcot == minsumcol)
    	{
    		indexcol[col] = j ;
    		col++ ;
    	}
    }
    
    for(int i = col - 1 ; i >= 0 ; i--)
    {
    	int index = indexcol[i] ;
    	for(int j = 0 ; j < m ; j++)
    	{
    		for(int k = index ; k < m - 1 ; k++)
    		{
    			a[j][k] = a[j][k + 1] ;
    		}
    	}
    	m-- ;
    }
    for(int i = 0 ; i < n ; i++)
    {
    	for(int j = 0 ; j < m ; j++)
    		cout << a[i][j] << " " ;
    	cout << endl ;
    }
    return 0 ;
}
