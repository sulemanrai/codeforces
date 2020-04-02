#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <regex>

using namespace std;
int main()
{
	int n;
	cin >> n;
	string str1 = "I hate it";
	string str2 = "I love it";
	
	// vector<string> ans(n);
	vector<string> ans;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0 && i !=0)
		{
			ans.push_back("I hate it");
			// ans += ' ';
		}
		else if (i % 2 != 0)
		{
			ans.push_back("I love it");
			// ans += ' ';
		}
		else if (i == 0)
		{
			ans.push_back(str1);
		}
	}
	if(n > 1 )
	{
		for(int i=0; i < ans.size() - 1; i++)
		{
			if(ans[i] == "I love it")
			{
				ans[i] = "I love that";
			} else if(ans[i] == "I hate it")
			{
				ans[i] = "I hate that";
			}
		}
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << ' ';
	}
}