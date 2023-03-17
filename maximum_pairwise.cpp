#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
vector<int> exclusion(int N,vector<int> arr){
    int ans=1;
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]==0)
                count++;    
        }
    if(count==0){
       for(int i=0;i<N;i++)
                ans=ans*arr[i];
            for(int i=0;i<N;i++)
                    arr[i]=(ans/arr[i]);
        }
        else if(count==1){
            for(int i=0;i<N;i++){
                if(arr[i]==0)
                    continue;
                else
                    ans=ans*arr[i];
            }
            for(int i=0;i<N;i++){
                if(arr[i]==0)
                    arr[i]=ans;
                else
                    arr[i]=0;
            }
        }
        else{
            for(int i=0;i<N;i++)
                arr[i]=0;
        }
        return arr;
}
int main()
{
ios;
int n;
cin >> n;
vector<int> arr(n),res;
for(int i=0;i<n;i++)
  cin >> arr[i];
res = exclusion(n,arr);
for(int i=0;i<n;i++)
  cout << res[i] << "\n";
return 0;
}