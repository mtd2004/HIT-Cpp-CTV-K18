#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int tc ; cin >> tc ;
	cin.ignore() ;
	while(tc--)
	{
		string s ; getline(cin , s) ;
		string temp ;
		stringstream ss(s) ;
		while(ss >> temp)
		{
			for(int i = 0 ; i < temp.length() ; i++)
			{
				if(i == 0)
					temp[i] = toupper(temp[i]) ;
				else
					temp[i] = tolower(temp[i]) ;
			}
			cout << temp << " " ;
		}
		cout << endl ;
	}
	return 0 ;
}
