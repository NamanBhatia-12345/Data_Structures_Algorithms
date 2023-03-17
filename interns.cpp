#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int internNumber(int input1, int input2){
    int n = input1;
    int p = input2;
    vector<pair<int, vector<int>>> arr;
    int ans;
    bool f1 = false;
    for(int i=0;i<n;i++){
        vector<int> a(50,0);
         a[0] = 5000*(i+1);               
        for(int j=1;j<50;j++){
            a[j] = a[j-1] + 5000 + j;
        }
        arr.push_back({(i+1),a});
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i].second.size();j++){
            if(p == arr[i].second[j]){
                ans = arr[i].first;
                f1 = true;
                break;
            }
        }
        if(f1 == true)
           break;
    }
    return ans;
}
int main()
{
ios;
int n1,n2;
cin >> n1 >> n2;
int result = internNumber(n1,n2);
cout << result << "\n";
return 0;
}