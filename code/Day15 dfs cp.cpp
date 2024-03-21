// https://www.interviewbit.com/problems/good-graph/

#include <bits/stdc++.h>
using namespace std;
using ve = vector<int>;
using vve = vector<ve>;

int c;
int k;
void dfs(int x, ve &vis, vve &v)
{

    for (int y : v[x])
    {
        if (vis[y] == k)
        {
            if (y != 0)
            {
                c++;
            }
        }
        else if (vis[y] > -1)
        {
            return;
        }
        else
        {
            vis[y] = k;
            dfs(y, vis, v);
        }
    }
}

int solve(vector<int> &a)
{

    c = 0;
    int n = a.size();
    vve v(n, ve());

    ve vis(n, -1);

    for (int i = 0; i < n; i++)
    {

        v[i].push_back(a[i] - 1);
    }

    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == -1)
        {
            k = i;
            vis[i] = k;
            dfs(i, vis, v);
        }
    }
    return c;
}
