#include <bits/stdc++.h>
#define MOD 1000000007
#define maxn 1000000
#define endl '\n'
#define fi first
#define se second
using namespace std ;
using ll = long long ;

int main()
{
	int tc ; cin >> tc ;
	while(tc--)
	{
		int x , y ; cin >> x >> y ;
		int canh = max({2 * min(x , y) , x , y}) ;
		cout << canh * canh << endl ;
	}
	return 0 ;
}