#include <bits/stdc++.h>
using namespace std;

void hash_method(vector<int>v)
{
    int n = v.size();
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[v[i]]++;

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    // Traverse through map to find the elements.
    for (auto it : map) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "Highest: " << maxEle <<" with "<< maxFreq << " freq" << "\n";
    cout << "Lowest: " << minEle <<" with "<< minFreq << " freq" << "\n";
}

void hash_method_multiple(vector<int> v)
{
    int n = v.size();
    unordered_map<int, int> mp;

    // Count frequencies
    for (int i = 0; i < n; i++)
        mp[v[i]]++;

    // Find highest and lowest frequency values
    int maxFreq = 0, minFreq = n;
    for (auto it : mp)
    {
        maxFreq = max(maxFreq, it.second);
        minFreq = min(minFreq, it.second);
    }

    // Collect all elements with highest and lowest frequency
    vector<int> highestElems, lowestElems;
    for (auto it : mp)
    {
        if (it.second == maxFreq)
            highestElems.push_back(it.first);
        if (it.second == minFreq)
            lowestElems.push_back(it.first);
    }

    // Print results
    cout << "Highest Frequency (" << maxFreq << "): ";
    for (int x : highestElems)
        cout << x << " ";
    cout << endl;

    cout << "Lowest Frequency (" << minFreq << "): ";
    for (int x : lowestElems)
        cout << x << " ";
    cout << endl;
}

void regular_method(vector<int>v)
{
    int n = v.size();
    vector<bool> visited(n, false);
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (int i = 0; i < n; i++) {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                visited[j] = true;
                count++;
            }
        }
        if (count > maxFreq) {
            maxEle = v[i];
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = v[i];
            minFreq = count;
        }
    }
    cout << "Highest: " << maxEle <<" with "<< maxFreq << " freq" << "\n";
    cout << "Lowest: " << minEle <<" with "<< minFreq << " freq" << "\n";
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // regular_method(v);
    // hash_method(v);
    hash_method_multiple(v);

    return 0;
}