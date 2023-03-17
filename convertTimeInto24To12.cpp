#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
string convert24To12(string &str){
    string ans = "";
    string am = " AM", pm = " PM";
    string st = str.substr(0,2);
    int res = stoi(st);
    st = "";
    if(str[0] == '0' && str[1] == '0'){
       ans += "12"; 
       ans += str.substr(2);
       ans += am;
    }
    else if(str[0] == '1' && str[1] == '2'){
        ans += str;
        ans += pm;
    }
    else if((str[0] == '0' && str[1] <= '9') || (str[0] == '1' && str[1] == '1') || (str[0] == '1' && str[1] == '0')){
        ans += str;
        ans += am;
    }
    else{
        res -= 12;
        st = to_string(res);
        ans += st;
        ans += str.substr(2);
        ans += pm;
    }
    return ans;
}
int main()
{
ios;
string time;
cin >> time;
string result = convert24To12(time);
cout << result << endl;
return 0;
}