#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>


using namespace std;



int main() {
	int n = 1;
	int itr = 0;
	unordered_map<string, int> umap;
	umap["Tetrahedron"] = 4;
	umap["Cube"] = 6;
	umap["Octahedron"] = 8;
	umap["Dodecahedron"] = 12;
	umap["Icosahedron"] = 20;
	int total = 0;

	cin >> n;
	
	vector<string> inputs;
	for(int i = 0; i <= n; i++)
	{
		string str;
		getline(cin, str);
		inputs.push_back(str);
	}

	for (auto it = inputs.begin(); it != inputs.end(); ++it) {
		//cout << *it << endl;
		if (umap.find(*it) == umap.end()) {
			// not found
		}
		else {
			// found
			total += umap.at(*it);
		}
	}
	cout << total << endl;
	return 0;
}
