#include <iostream>
using namespace std;

int main()
{
    system("color 0A");
    int t, count;
    for(t = 0; t<1000; t++) {
        count =1;
        for (;;){
            cout << count << ' ';
            count++;
            if (count == 100) break;
        }
        cout << '\n';
    }
    return 0;
}


