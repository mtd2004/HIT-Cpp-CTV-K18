#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int tc ; cin >> tc ;
	cin.ignore() ;
	string total[100] ;
	int index = 0 ;
	while(tc--)
	{
		string s ; getline(cin , s) ;
		string temp ;
		stringstream ss(s) ;
		string ans[100] ;
		int count = 0 ;
		while(ss >> temp)
		{
			for(int i = 0 ; i < temp.length() ; i++)
				temp[i] = tolower(temp[i]) ;
			ans[count] = temp ;
			count++ ;
		}
		string res = "" ;
		res += ans[count - 1] ;
		for(int i = 0 ; i < count - 1 ; i++)
		{
			res += ans[i][0] ;
		}
		total[index] = res ;
		index++ ;
		int fre = 0 ;
		for(int i = 0 ; i < index ; i++)
		{
			if(total[i] == res)
				fre++ ;
		}
		if(fre > 1)
			res += to_string(fre) ;
		res += "@gmail.com" ;
		cout << res << endl ;
	}
	return 0 ;
}
