#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solution(vector<int> memberIds,vector<pair<int,int>> followers,int follower,int following){
    map<int,vector<int>> mp;
    vector<int> arr;
    int n = followers.size();
    for(int i=0;i<n;i++)
        mp[followers[i].first].push_back(followers[i].second);
    bool fg = true;
    vector<int> res = mp[follower];
    for(int i=0;i<res.size();i++){
        if(res[i] == following){
            fg = true;
            break;
        }
        else{
            fg = false;
        }
    }
    if(fg == false)
        cout << "0\n";
    else
        cout << "1\n";
}
int main()
{
ios;
int t;
cin >> t;
vector<int> memeberIds;
while(t--){
    int n;
    cin >> n;
    memeberIds.push_back(n);
}
int x;
cin >> x;
vector<pair<int,int> > followers;
while(x--){
    int y,z;
    cin >> y >> z;
    followers.push_back(make_pair(y,z));
}
int follower;
int following;
cin >> follower;
cin >> following;
solution(memeberIds,followers,follower,following);
return 0;
}