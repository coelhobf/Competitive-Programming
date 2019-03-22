#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> v1, v2;
        int p;
        for(int i = 0; i < n; i++)
        {
            cin >> p;
            v1.push_back(p);
        }

        for(int i = 0; i < n; i++)
        {
            cin >> p;
            v2.push_back(p);
        }

        int sum = 0;
        int i = 0;
        while(!v1.empty())
        {
            for(int j = 0; j < n; j++)
            {
                if(v1[i] == v2[j])
                {
                    sum += abs(i - j);
                    v1.erase(v1.begin()+i);
                    v2.erase(v2.begin()+j);
                    i = -1;
                }
            }
            i++;
        }

        cout << sum << endl;
    }
}
