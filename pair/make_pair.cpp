#include <iostream>
#include <utility>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        pair<int, int> p = {x, y};
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}