#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        // cout << "n: " << n << endl;
        vector<int> v;
        
        int note, sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> note;
            sum += note;
            v.push_back(note);
        }

        int med = sum / n;

        for(int i = 0; i < n; i++)
        {
            v[i] -= med;
        }

        // for(int i = 0; i < n; i++)
        // {
        //     cout<< v[i] << " ";
        // }
        // cout << endl;

        int psum = 0, nsum = 0;

        for(int i = 0; i < n; i++)
        {
            if(v[i] >= 0)
            {
                psum += v[i];
            }
            else
            {
                nsum += v[i];
            }
            
        }

        // cout << "psum: " << psum << endl;
        // cout << "nsum: " << nsum << endl;
        if(psum + nsum == 0)
        {
            cout << psum + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}