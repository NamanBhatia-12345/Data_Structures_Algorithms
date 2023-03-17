#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(7);
    v1.push_back(44);
    v1.push_back(47);
    v1.push_back(74);
    v1.push_back(77);
    v1.push_back(444);
    v1.push_back(447);
    v1.push_back(474);
    v1.push_back(477);
    v1.push_back(744);
    v1.push_back(747);
    v1.push_back(777);
    int n;
    cin >> n;
    int m=v1.size();
    bool flag=false;
    for(int i=0;i<m;i++){
        if(n%v1[i]==0){
            flag=true;
            break;
        }
    }
    if(flag)
      cout << "YES\n";
    else 
      cout << "NO\n";  

}
int main()
{
ios;
solve();
return 0;
}