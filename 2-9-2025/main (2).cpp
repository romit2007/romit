#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int max;

    if (a > b)
    {
        if (a > c)
        {
            max = a;
        } else 
        {
            max = c;
        }
    } 
    else
    {
        if (b > c) 
        {
            max = b;
        } else 
        {
            max = c;
        }
    }

    cout << "The maximum number is: " << max << endl;

    return 0;
}
