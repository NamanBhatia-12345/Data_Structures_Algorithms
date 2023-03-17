#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int i , j, cnt;
    cnt = n*2 - 1;
    int k = 1, p = 0;

    for(i = 1; i <= cnt; i++){
        p = 0;
        for(j = 1; j <= cnt; j++){
            if(p == 2 || (p == 1 && i == n)) break;
            if(j == i || (j == cnt-i + 1)){
                cout << k << " ";
                p++;
            }
            else  cout << "  ";
        }
        k = i < n ? k + 1 : k - 1;
        cout << "\n";
    }
}
int main()
{
	
	return 0;
}