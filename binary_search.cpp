#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void binary_search(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin >> arr[i];
    int key;
    cin >> key; 
    int v1[key];
    for(int i=0;i<key;i++)
      cin >> v1[i];
    vector<int> res;  
    for(int i=0;i<key;i++){  
    int high=n-1,low=0,mid,ans;
    bool temp=false;
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==v1[i]){
          temp=true;
          ans=mid;
          break;
          }
        else if(arr[mid]<v1[i])
          low=mid+1;
        else
          high=mid-1;    
      }
     if(temp==true)
       res.push_back(ans);
      else 
        res.push_back(-1); 
   }
   for(int i=0;i<res.size();i++)
     cout << res[i] << " "; 
   cout << "\n";  
}
int main()
{
ios;
binary_search();
return 0;
}