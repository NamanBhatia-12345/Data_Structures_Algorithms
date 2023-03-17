#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void swap_char(char *a , char *b){
    char te;
    te = *a;
    *a = *b;
    *b = te;
}
bool checkPalin(string &str){
    int i = 0, j = str.length() - 1;
    string temp = str;
    while(i <= j){
        int val = abs(temp[i] - temp[j]);
        if(val == 32){
            i++;
            j--;
            continue;
        }
        else{
            swap_char(&temp[i] , &temp[j]);
            i++;
            j--;
        }
    }
    if(temp == str)
      return true;
    return false;
}
int main()
{
ios;
string num;
cin >> num;
if(checkPalin(num)){
    cout << "YES\n";
}else{
    cout << "NO\n";
}
return 0;
}