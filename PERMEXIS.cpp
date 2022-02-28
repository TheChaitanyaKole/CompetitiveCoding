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
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];
	sort(arr,arr+n);
	for(int i=0; i<n-1; i++)
	{
		if((arr[i+1]-arr[i])>1)
		{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--) solve();
}
