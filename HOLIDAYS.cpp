#include <bits/stdc++.h>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
using namespace std;

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}


void solve()
{
	int n,w;
	cin >> n >> w;
	int a[n];
	int count = 0;
	int days=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		days+=a[i];
		count++;
		if(days>=w)
		{
			break;
		}
	}
	cout << n-count << endl;
}

int main()
{

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;
	cin >> t;
	while(t--) solve();
}
