#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        int f[6] = {0, 0, 0, 0, 0, 0};

        int count = 0;
        while(true)
        {
            count++;
            for(auto &x: str)
            {
                switch (x)
                {
                    case 'U':
                        f[0] = (f[0] + 1) %4;
                        break;
                    case 'u':
                        f[0] = (f[0] + 4 - 1) % 4;
                        break;

                    case 'F':
                        f[1] = (f[1] + 1) %4;
                        break;
                    case 'f':
                        f[1] = (f[1] + 4 - 1) % 4;
                        break;

                    case 'D':
                        f[2] = (f[2] + 1) %4;
                        break;
                    case 'd':
                        f[2] = (f[2] + 4 - 1) % 4;
                        break;

                    case 'R':
                        f[3] = (f[3] + 1) %4;
                        break;
                    case 'r':
                        f[3] = (f[3] + 4 - 1) % 4;
                        break;

                    case 'L':
                        f[4] = (f[4] + 1) %4;
                        break;
                    case 'l':
                        f[4] = (f[4] + 4 - 1) % 4;
                        break;

                    case 'B':
                        f[5] = (f[5] + 1) %4;
                        break;
                    case 'b':
                        f[5] = (f[5] + 4 - 1) % 4;
                        break;
                }
            }

            bool zero = true;
            for(int i = 0; i < 6; i++)
            {
                if(f[i] != 0)
                {
                    zero = false;
                    break;
                }
            }

            if(zero)
            {
                break;
            }
        }

        cout << count << endl;
    }
}