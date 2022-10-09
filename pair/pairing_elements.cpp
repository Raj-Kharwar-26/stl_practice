#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<pair<int, int>> p1;
    vector<pair<int, int>> p2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            p1.push_back(make_pair(arr[i], arr[n - i - 1]));
        }
        for (int i = 0; i < n; i++)
        {
            cout << "(" << p1[i].first << "," << p1[i].second << ")" << endl;
        }
    }
    else
    {
        p2.emplace_back(p1);
        p2[n / 2] = make_pair(arr[n / 2], arr[n / 2]);
    }
    return 0;
}