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
	string s;
	cin >> s;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=s[i+1])
			count++;
	}
	cout << count << endl;
}

int main()
{

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;
	cin >> t;
	while(t--) solve();
}
