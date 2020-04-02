#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	int limak_weight, bob_weight;
	int years = 0;
	cin >> limak_weight >> bob_weight;
	while(true)
	{
		if(limak_weight > bob_weight)
		{
			break;
		}
		limak_weight = limak_weight * 3;
		bob_weight = bob_weight * 2;
		years++;
	}

	cout << years << endl;

}

