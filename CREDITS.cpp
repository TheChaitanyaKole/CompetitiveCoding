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
	int credits;
	cin >> credits;
	if(credits>65)
		cout  << "Overload" << endl;
	else if(credits>34)
		cout << "Normal" << endl;
	else
		cout << "Underload" << endl;
}

int main()
{

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;
	cin >> t;
	while(t--) solve();
}
