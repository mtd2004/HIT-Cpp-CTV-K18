#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n ; cin >> n ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++)
		cin >> a[i] ;
	int value ; cin >> value ;
	int b[n + 1] ;
	for(int i = 0 ; i < n + 1 ; i++)
	{
		if(i == 0)
			b[i] = value ;
		else
			b[i] = a[i - 1] ;
	}
	// In mang
	for(int i = 0 ; i < n + 1 ; i++)
		cout << b[i] << " " ;
	cout << endl ;
	// Tim max va min
	int maxn = a[0] , minn = a[0] ;
	for(int i = 1 ; i < n ; i++)
	{
		if(maxn < a[i])
			maxn = a[i] ;
		if(a[i] < minn)
			minn = a[i] ;
	}
	int sum = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		sum += a[i] ;
	}
	double avg = 1.0 * sum / n ;
	cout << "Min la: " << minn << endl ;
	cout << "Max la: " << maxn << endl ;
	cout << "Medium score la: " << avg << endl ;
	return 0 ;
}
