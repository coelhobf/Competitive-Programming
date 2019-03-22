#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, c;
    while(cin >> n >> l >> c)
    {
        vector<string> vs;
        string str;
        while(n--)
        {
            cin >> str;
            vs.push_back(str);
        }

        int sum_char = 0, sum_line = 1;
        for(int i = 0; i < vs.size(); i++)
        {
            if(sum_char + vs[i].size() > c)
            {
                // cout << endl;
                sum_char = 0;
                sum_line++;
            }
            // cout << vs[i] << " ";
            sum_char += vs[i].size() + 1;
        }

        cout << sum_line / l + ((sum_line % l ) > 0) << endl;
    }
}