#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<string> str(n);
    for(int i=0;i<n;i++)
      cin >> str[i];
    bool flag = false;
    int temp = -1;
    int x = -1;
    for(int i=0;i<n;i++){
        int m = str[i].size();
        for(int j=0;j<m;j++){
            if(str[i][j] >= 'a' && str[i][j] <= 'm'){
                if(x == 0){
                    flag = false;
                    break;
                }
                flag = true;
                x = 1;
            }
            else if(str[i][j] >= 'N' && str[i][j] <= 'Z'){
                if(x == 1){
                    flag = false;
                    break;
                }
                flag = true;
                x = 0;
            }
            else{
                flag = false;
                break;
            } 
        }
        if(flag == false){
            temp = 0;
            break;
        }
        else
            temp = 1;
        x = -1;    
    }
    if(temp == 0)
      cout << "NO\n";
    else
      cout << "YES\n";    

}
int main()
{
ios;
int t;
cin >> t;
while(t--){
solve();
}
return 0;
}