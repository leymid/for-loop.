#include <iostream>
using namespace std;
int main()
{
    int x;
    for (x = 0; x <= 10000000; x++) {
        if (x%2) continue;
        cout << x << ' ';
    }
    return 0;
}