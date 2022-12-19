
#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter coordinates x: ";
    cin >> x;
    cout << "Enter coordinates y: ";
    cin >> y;

    if (x > 0 && x < 2 && y>0 && y < 1)
    {
        cout << "Point is in the area" << endl;
    }
    else
    {
        cout << "Point is not in the area" << endl;
    }

    return 0;
}

