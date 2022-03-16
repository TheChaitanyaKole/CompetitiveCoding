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

void reverse(string str, int n)
{
	string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";
	for(int i=0; i<n; i++)
		str[i] = reverseAlphabet[str[i]-'a'];
	cout << str << endl;
}


void solve()
{
	int N;
	cin >> N;
	string s;
	cin >> s;
	int sl = s.length();
	if(sl%2==0)	
	{
		for(int i=0; i<sl; i++)
		{
			char temp = s[i+1];
			s[i+1] = s[i];
			s[i] = temp;
			i++;
		}
	}
	else
	{
		for(int i=0; i<sl-1; i++)
		{
			char temp = s[i+1];
			s[i+1] = s[i];
			s[i] = temp;
			i++;
		}
	}
	reverse(s , sl);
}

int main()
{
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin >> t;
	while(t--) solve();
}
