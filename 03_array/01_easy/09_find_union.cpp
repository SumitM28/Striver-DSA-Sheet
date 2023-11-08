// find union and merge two arr
#include <bits/stdc++.h>
using namespace std;

// time complexity O(n) & space O(1)
vector<int> mergeArray(vector<int> a, vector<int> b)
{
    set<int> temp;

    int i = 0, j = 0;

    while (i < a.size())
    {
        temp.insert(a[i++]);
    }

    while (j < b.size())
    {
        temp.insert(b[j++]);
    }
    vector<int> ans;
    for (auto val : temp)
    {
        ans.push_back(val);
    }
    return ans;
}

int main()
{

    vector<int> a = {1, 2, 3, 4, 6};
    vector<int> b = {2, 3, 5};

    vector<int> ans = mergeArray(a, b);
    for (auto val : ans)
    {
        cout << val << " ";
    }
}