#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "nhap 3 canh tam giac" << endl;
	cin >> a >> b >> c;
	if (a > 100 or a < -100 or b > 100 or b < -100 or c > 100 or c < -100)
	{
		cout << endl
			 << "ban nhap sai, yeu cau nhap lai" << endl;
	}
	else
	{
		if (a + b > c and a + c > b and b + c > a && a > 0 && b > 0 && c > 0)
		{
			if (a == b and b == c)
			{
				cout << "day la tam giac deu";
			}
			else if (a == b && a * a + b * b == c * c || a == c && a * a + c * c == b * b || b == c && b * b + c * c == a * a)
			{
				cout << "day la tam giac vuong can";
			}
			else if (a * a + b * b == c * c or c * c + b * b == a * a or a * a + c * c == b * b)
			{
				cout << "day la tam giac vuong";
			}
			else if (a * a + b * b > c * c or c * c + b * b > a * a or a * a + c * c > b * b)
			{
				cout << "Day la tam giac tu";
			}
			else if (a == b or a == c or b == c)
			{
				cout << "day  la tam giac can";
			}
			else
			{
				cout << "Day la tam giac nhon";
			}
		}
		else
		{
			cout << "day khong phai la tam giac";
		}
	}
	return 0;
}
