#include <vector>
#include <iostream>
using namespace std;
int main()
{
    // vector<vector<int>> d = {{1, 2, 3}, {2, 4, 5}};
    // vector<vector<int>> d(int n, vector<int> m);
    /*for (int i = 0; i < 2; i++)
    {
        vector<int> v{1,2,3,4};
        /*for (int j = 0; j < 2; j++)
        {
            int x;
            cin >> x;

            v.push_back(x);
        }
    d.push_back(v);*/
    int n;
    cin >> n;
    vector<vector<int>> d(n);
    for (int i = 0; i < n; i++)
    {
        // arr[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cin >> d[i][j];
        }
    }
    // vector<vector<int>> matrix;
    // vector<vector<int>>arr = {{1, 2, 3}, {4, 5, 6}, {7, 8}};
    // matrix.push_back(arr);
    for (int i = 0; i < d.size(); i++)
    {
        for (int j = 0; j < d[i].size(); j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
}
