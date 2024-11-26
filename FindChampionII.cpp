#include <bits/stdc++.h>
using namespace std;

auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int findChampion(int n, vector<vector<int>> &edges)
{
    vector<int> adj[n];

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    vector<int> indegree(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (auto it : adj[i])
        {
            indegree[it]++;
        }
    }

    for (int i = 0; i < indegree.size(); i++)
    {
        cout << indegree[i] << " ";
    }
    cout << endl;


    
}

int main()
{
    vector<vector<int>> edges = {{0, 1},{1, 2}};
    cout << findChampion(3, edges) << endl;
    return 0;
}