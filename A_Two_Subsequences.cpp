#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string str;
    cin >> str;
    int n=str.length();
    char ch;
    bool flag=true;
    string s2="";
    vector<int> mp(26,0);
    for(int i=0;i<n;i++)
       mp[str[i]-'a']++;
    for(int i=0;i<26;i++){   
        if(mp[i]>0){
           ch = i+'a';
           break;    
        } 
    }
    for(int i=0;i<n;i++){
        if((str[i]==ch)&&(flag)){
            i++;
            flag=false;
        }
        s2 += str[i];
    }
    cout << ch << " " << s2 << "\n";
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