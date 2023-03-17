#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
class Solution{
    public:
    void transpose(vector<vector<int>> &arr,int &n, int &m){
        vector<vector<int>> res;
        vector<int> temp;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                temp.push_back(arr[i][j]);
            }
            res.push_back(temp);
            temp.clear();
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << res[i][j] << " ";
            }
            cout << "\n";
        }
        cout << endl;
    }
};
int main()
{
ios;
int n,m;
cin >> n >> m;
vector<vector<int>> arr(n,vector<int> (m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
      cin >> arr[i][j];
}
Solution obj;
obj.transpose(arr,n,m);
return 0;
}