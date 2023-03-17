#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(string s1){
    int n = s1.size();  
    bool f1 = false,f2 = false; 
    vector<string> str;  
    vector<string> mon(13);
    string val = "-1 -1 -1";
    mon[1] = "Jan"; mon[2] = "Feb"; mon[3] = "Mar"; mon[4] = "Apr"; mon[5] = "May"; mon[6] = "Jun";
    mon[7] = "Jul"; mon[8] = "Aug"; mon[9] = "Sept"; mon[10] = "Oct"; mon[11] = "Nov"; mon[12] = "Dec";
    for(int i=0;i<n;i++){
        if(s1[i] == '/')
            f1 = true;
        if(s1[i] == '.')
            f2 = true;
    }
    string res = "";
    if(f1 == true){
        for(int i=0;i<n;i++){
            if(s1[i] == '/'){
                str.push_back(res);
                res = "";
            }
            res.push_back(s1[i]);
        }
         cout << str[0] << " " << str[1] << " " << str[2];
        // return val;
    }
    else if(f2 == true){
        for(int i=0;i<n;i++){
            if(s1[i] == '.'){
                str.push_back(res);
                res = "";
            }
            res.push_back(s1[i]);
        }
        cout << str[0] << " " << str[1] << " " << str[2];
        // return val;
    }
    else{
        for(int i=0;i<n;i++){
            if(s1[i] == ' '){
                str.push_back(res);
                res = "";
            }
            if(s1[i] == ','){
                str.push_back(res);
                res = "";
            }
            res.push_back(s1[i]);
        }
        str.push_back(res);
        res = "";
        cout << str[0] << " " << str[1] << " " << str[2];
        // return val;
    }
}
int main()
{
ios;
int n;
cin >> n;
while(n--){
string s1;
cin >> s1;    
solve(s1);
}
return 0;
}