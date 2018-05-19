#include "iostream"

using namespace std;

int main()
{
    int w;
    int firsthalf;
    int secondhalf;

    cin >> w;

    int count = 1;
    if(count == w)
    {
        cout << "NO" << endl;
        return 0 ;
    }

    while(count != w)
    {
        firsthalf = count;
        secondhalf = w - firsthalf;

        if(firsthalf % 2 == 0 && secondhalf % 2 == 0)
        {
            cout << "YES" << endl;
             break;
        } else if(firsthalf % 2 != 0 || secondhalf % 2 != 0) {
            if (count ==  w - 1) {
                cout << "NO" << endl;
            }
        }
        count = count + 1;
    }
}
