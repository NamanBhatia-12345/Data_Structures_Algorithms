#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    string text;
    getline(cin,text);
    if(text.size() == 1){
      cout << "1\n";
      return;
    }
    stack<char> st;
    int ans;
    bool flag = false;
    for(int i=0;i<text.size();i++){
        if((text[i] == '{') || (text[i] == '[') || (text[i] == '(')){
            ans = i+1;
            st.push(text[i]);   
        }
        if(!st.empty() && text[i] == ')' && st.top() == '(')
          st.pop();
        else{
          ans = i+1;
          break;
        }  
        if(!st.empty() && text[i] == ']' && st.top() == '[')
          st.pop(); 
        else{
          ans = i+1;
          break;
        }     
        if(!st.empty() && text[i] == '}' && st.top() == '{')
          st.pop(); 
        else{
          ans = i+1;
          break;
        }
    }
    if(flag == true)
      cout << "yes" << "\n";
    if(st.empty() == true)
      cout << "Success\n";
    else  
      cout << ans << "\n";  
}
int main()
{
ios;
solve();
return 0;
}