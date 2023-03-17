#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int majority_element(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    sort(arr.begin(),arr.end());  
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i])
          count++;
        else{
            if(count > (n/2))
              return 1;
            else
                count=1;
        } 
    }
    if(count > (n/2))
      return 1;  
    return 0;     
}
int main()
{
ios;
int ans;
ans=majority_element();
cout << ans << "\n";
return 0;
}