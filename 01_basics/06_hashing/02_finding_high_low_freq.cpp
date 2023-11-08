#include <bits/stdc++.h>
using namespace std;

void countFreq(vector<int> &v, int n)
{
    unordered_map<int, int> m;
    for (auto x : v)
    {
        m[x]++;
    }
    int minFreq, maxFreq, maxFreqMinEl, minFreqMinEl;
    minFreq = maxFreqMinEl = minFreqMinEl = INT_MAX;
    maxFreq = INT_MIN;

    for (auto x : m)
    {
        int freq = x.second;
        int el = x.first;
        if (freq > maxFreq)
        {
            maxFreq = freq;
            maxFreqMinEl = el;
        }
        if (freq == maxFreq)
        {
            maxFreqMinEl = min(maxFreqMinEl, el);
        }

        if (freq < minFreq)
        {
            minFreq = freq;
            minFreqMinEl = el;
        }
        if (freq == minFreq)
        {
            minFreqMinEl = min(minFreqMinEl, el);
        }
    }
    cout << maxFreqMinEl << " " << minFreqMinEl << endl;
}

int main()
{
    vector<int> v = {10, 5, 10, 15, 10, 5};
    int n = v.size();
    countFreq(v, n);
    return 0;
}