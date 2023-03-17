#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void palindrome(){
    string str,ch;
    cin >> str;
    ch=str;
    reverse(str.begin(),str.end());
    if(ch==str){
        cout << "Palindrome\n";
    }
    else{
        cout << "Not Palindrome\n";
    }
}
int main()
{
ios;
palindrome();
return 0;
}