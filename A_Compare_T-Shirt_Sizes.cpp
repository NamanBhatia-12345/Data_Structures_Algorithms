#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string s1,s2;
    cin >> s1 >> s2;
    vector<int> a1(4,0),a2(4,0);
    for(int i=0;i<s1.length();i++){
        if(s1[i] == 'X')
          a1[0]++;
        else if(s1[i] == 'S') 
          a1[1]++;
        else if(s1[i] == 'M')
          a1[2]++;
        else
          a1[3]++;     
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i] == 'X')
          a2[0]++;
        else if(s2[i] == 'S') 
          a2[1]++;
        else if(s2[i] == 'M')
          a2[2]++;
        else
          a2[3]++;     
    }
    if((a1[3] == a2[3] and a1[0] > a2[0] and a1[3] == 1) or (a1[3] == 1 and a2[3] == 0)){
        cout << ">\n";
    }
    else if((a1[3] == a2[3] and a1[0] < a2[0] and a1[3] == 1)  or (a1[3] == 0 and a2[3] == 1)){
        cout << "<\n";
    }
    else if((a1[3] != 0 and a2[3] == 0) or (a1[2] != 0 and a2[2] == 0)){
        cout << ">\n";
    }
    else if((a1[3] == 0 and a2[3] != 0) or (a1[2] == 0 and a2[2] != 0)){
        cout << "<\n";
    }
    else if(a1[1] == a2[1] and a1[0] < a2[0]){
        cout << ">\n";
    }
    else if(a1[1] == a2[1] and a1[0] > a2[0]){
        cout << "<\n";
    }
    else{
        cout << "=\n";
    }
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