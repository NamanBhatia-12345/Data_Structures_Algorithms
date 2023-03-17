#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, N;
    int count;
   cin >> N;
   count = N * 2 - 1;
    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
            {
                if(j == N)
                  cout << j;
                else  
                  cout << (j % N);

            }
            else
            {
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}