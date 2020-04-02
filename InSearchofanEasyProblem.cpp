#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	int n;
	vector<string> vec;
	vector<int> num;

	cin >> n;
	string k;
	int x = 0;


	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	for(int i =0; i < v.size(); i++)
	{
		if(v[i] == 1)
		{
			cout << "HARD";
			x = 0;
			break;
		} else
		{
			x++;
		}
	}
	if(x == v.size())
	{
		cout << "EASY";
	}
}