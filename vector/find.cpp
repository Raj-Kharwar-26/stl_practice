#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    auto it = find(arr.begin(), arr.end(), 5);
    cout << *it << endl;
    cout << arr.capacity() << endl;
    arr.push_back(60);
    cout<<arr.capacity()<<endl;
    arr.resize(1);
    cout<<arr.capacity()<<endl;
    arr.push_back(1);
    cout<<arr.capacity()<<endl;
    return 0;
}