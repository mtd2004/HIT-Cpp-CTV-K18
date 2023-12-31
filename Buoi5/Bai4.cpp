#include <bits/stdc++.h>
using namespace std ;
int main()
{
	string s ; getline(cin , s) ;
	string temp ;
	stringstream ss(s) ;
	string ans[100] ;
	int count = 0 ;
	//vector<string> v ;
	while(ss >> temp)
	{
		for(int i = 0 ; i < temp.length() ; i++)
			temp[i] = tolower(temp[i]) ;
		//v.push_back(temp) ;
		ans[count] = temp ;
		count++ ;
	}
	string res = "" ;
	res += ans[count - 1] ; // res += v.back() ;
	for(int i = 0 ; i < count - 1 ; i++)
	{
		res += ans[i][0] ;
		//res += v[i][0] ;
	}
	res += "@gmail.com" ;
	cout << res << endl ;
	return 0 ;
}
