#include <iostream>

using namespace std;
int main()
{
	int target, steps;
	
	cin >> target >> steps;
    
	for(int i=1; i <=steps; i++)
	{
		if(target % 10 == 0)
		{
			target = target / 10;
		} else
		{
			target = target - 1;
		}		
	}
	std::cout << target;;
}
