#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int q;
    cin >> q;
    vector<string> str;
    for(int i=0;i<q;i++){
        string s1;
        getline(cin,s1);
        str.push_back(s1);
        fflush(stdin);
    }
   // fflush(stdin);
    for(auto i : str){
        cout << i << "\n";   
    }
    cout << "\n";

}
int main()
{
ios;
solve();
return 0;
}