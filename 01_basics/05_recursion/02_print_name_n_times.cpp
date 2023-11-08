#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<string> &ans)
{
    if (n == 0)
        return;

    ans.push_back("Coding Ninjas");
    solve(n - 1, ans);
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;

    vector<string> ans;

    solve(n, ans);

    for (auto val : ans)
    {
        cout << val << " ";
    }
}