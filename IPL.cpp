#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    for(int i=0;i<1;i++){
    vector<string> s;
        string str;
        getline(cin,str);
        string s1="",s2="",s3="",s4="",temp="";
        int a1,b1,a2,b2;    
        for(int i=0;i<str.size();i++){
            if(str[i] != ' ')
               s1 += str[i];
            else{
                s.push_back(s1);
                s1 = "";
            }   
        }
        s.push_back(s1);
        s1 = "";
        s1 = s[0];
        s2 = s[3]; 
        s3 = s[1];
        s4 = s[4];
        b1 = stoi(s[2]);
        b2 = stoi(s[5]);
        int j=0;
        while(s3[j] != '/'){
            temp += s3[j];
            j++;
        }
        a1 = stoi(temp);
        temp = "";j=0;
        while(s4[j] != '/'){
            temp += s4[j];
            j++;
        }
        a2 = stoi(temp);
        map <string,float> mp1;
        map <string,float> mp2;
        float x1;
        if(a1>a2){
            mp1[s1] +=2.0;
            mp1[s2] +=0.0;
            mp2[s1] += ((a1-a2)*0.05);
            mp2[s2] += (((a1-a2)*0.05)*(-1));
        }
        else if(a1 < a2){
            x1 = (a2*120)/b2;
            mp1[s2] += 2.0;
            mp1[s1] += 0.0;
            mp2[s2] += ((x1-(float) a1)*(0.05));
            mp2[s1] += ((x1-(float) a1)*(0.05)*(-1));
        }
        else{
           mp1[s1] +=1.0;
            mp1[s2] +=1.0;
            mp2[s1] += 0.0;
            mp2[s2] += 0.0; 
        }
    }
    vector<string> team = {"MI","CSK","RCB","RR","SRH","DC","PBKS","KKR"};  
    map<string,float>::iterator it=mp1.begin();  
    for(it = mp1.begin(); it!= mp1.end();  ++it)
        cout << it->first << " " << it->second;
}
int main()
{
ios;
solve();
return 0;
}