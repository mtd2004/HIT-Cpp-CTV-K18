#include <bits/stdc++.h>
using namespace std ;
int main()
{
     string s ; cin >> s ;
     int c[256] = {0} ;
     for(int i = 0 ; i < s.length() ; i++)
          c[s[i]]++ ;
     for(int i = 0 ; i < 256 ; i++)
     {
          if(c[i] != 0)
               cout << (char)i << " " << c[i] << endl ;
     }
     cout << endl ;
     for(int i = 0 ; i < s.length() ; i++)
     {
          if(c[s[i]] != 0)
          {
               cout << s[i] << " " << c[s[i]] << endl ;
               c[s[i]] = 0 ;
          }
     }
     return 0 ;
}
