#include <bits/stdc++.h>

using namespace std;

double dfs(vector<set<int> > g, int atual, int barato, int caro)
{
    if(atual == caro)
    {
        return 0.0;
    }

    if(atual == barato)
    {
        return 1.0;
    }

    
    for(auto &x : g[atual])
    {

    }
    double p = 1.0 / g[atual].size();

}

int main()
{
    int n, a, b, c;
    while(cin >> n >> a >> b >> c)
    {
        vector<set<int> > matriz (n);

        int x, y;
        for(int i = 0; i < n - 1; i++)
        {
            cin >> x >> y;
            x--;
            y--;
            
            matriz[x].insert(y);
            matriz[y].insert(x);
        }

        // for(auto &y: matriz)
        // {
        //     for(auto &x: y)
        //     {
        //         cout << x << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        cout<< dfs(matriz, a, b, c) << endl;
    }
}