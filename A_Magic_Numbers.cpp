#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    int s;
    vector<int> v1;
    while(n!=0){
      s=n%10;
      v1.push_back(s);
      n=n/10;
    }
    int temp=0;
    reverse(v1.begin(),v1.end());
    // for(int i=0;i<v1.size();i++)
    //   cout << v1[i] << " ";
    // cout << "\n";  
    for(int i=0;i<v1.size();i++){
        if((i+2<v1.size())&&(v1[i]==1&&v1[i+1]==4&&v1[i+2]==4))
          i+=2;   
        else if((i+1<v1.size())&&(v1[i]==1&&v1[i+1]==4))
          i++;
        else if(v1[i]==1)
         continue;
        else{
            temp=1;
            break;
        }  
    }
    if(temp)
      cout << "NO\n";
    else
      cout << "YES\n";  

}
int main()
{
ios;
solve();
return 0;
}