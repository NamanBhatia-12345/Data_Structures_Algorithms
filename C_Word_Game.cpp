#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<string> s1(n),s2(n),s3(n);
    for(int i=0;i<n;i++)
      cin >> s1[i]; 
    for(int i=0;i<n;i++)
      cin >> s2[i];
    for(int i=0;i<n;i++)
      cin >> s3[i];
    unordered_map<string,int> mp1,mp2,mp3;
    for(int i=0;i<n;i++){
       mp1[s1[i]]++;
       mp2[s2[i]]++;
       mp3[s3[i]]++;
    }
    int first = 0, second = 0, third = 0;
    for(int i=0;i<n;i++){
        if((mp2.find(s1[i]) != mp2.end()) and (mp3.find(s1[i]) != mp3.end()))
          continue;
        else if(mp2.find(s1[i]) != mp2.end())
          first += 1;
        else if(mp3.find(s1[i]) != mp3.end())
          first += 1;
        else
          first += 3;      
    }
    for(int i=0;i<n;i++){
        if((mp3.find(s2[i]) != mp3.end()) and (mp1.find(s2[i]) != mp1.end()))
          continue;
        else if(mp1.find(s2[i]) != mp1.end())
          second += 1;
        else if(mp3.find(s2[i]) != mp3.end())
          second += 1;
        else
          second += 3;      
    }
    for(int i=0;i<n;i++){
        if((mp2.find(s3[i]) != mp2.end()) and (mp1.find(s3[i]) != mp1.end()))
          continue;
        else if(mp2.find(s3[i]) != mp2.end())
          third += 1;
        else if(mp1.find(s3[i]) != mp1.end())
          third += 1;
        else
          third += 3;      
    }
    cout << first << " " << second << " " << third << "\n";
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