#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int c1[256] = {0} ;
    int c2[256] = {0} ;
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    for(int i = 0 ; i < s1.length() ; i++)
    	c1[s1[i]]++ ;
    for(int i = 0 ; i < s2.length() ; i++)
    	c2[s2[i]]++ ;
    for(int i = 0 ; i < 256 ; i++)
    {
    	if(c1[i] > 0 && c2[i] > 0)
    		cout << (char)i ;
    }
    cout << endl ;
    for(int i = 0 ; i < 256 ; i++)
    {
    	if(c1[i] > 0 || c2[i] > 0)
    		cout << (char)i ;
    }
	return 0 ;
}
