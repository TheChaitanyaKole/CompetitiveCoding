#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int t;
	cin >> t;
	while(t--) 
	{
		int b,c;
		cin >> b >> c;
		int a = 1;
		cout << c/(gcd(c,b)) << endl;
	}
	return 0;
}
