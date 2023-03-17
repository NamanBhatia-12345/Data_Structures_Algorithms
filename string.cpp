#include <bits/stdc++.h>
using namespace std;
string isValid(string s) {
    int freq[26];
    int n=s.size();
    for(int i=0;i<26;i++)
        freq[i]=0;
    vector<int> res;
    for(int i=0;i<n;i++){
         freq[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0)
            res.push_back(freq[i]);
    }
    sort(res.begin(),res.end());
    int m=res.size();
    if(res[0]==res[m-1])
        return "YES";
    int count=1;
    for(int i=1;i<m;i++){
        if(res[i-1]!=res[i])
            count++;
    }
    for(int i=0;i<m;i++)
      cout << res[i] << " ";
    cout << "\n";  
    int x1=res[m-1]-res[0];
    if(count>2)
        return "NO";
    else if(count==1)
        return "YES";
    else if(count==2){
        if((res[m-2]==res[0])&&(res[m-1]-res[m-2]==1)||(res[m-1]==res[1]&&res[1]-res[0]==1)||(res[m-1]==res[1]&&res[0]==1))
        return "YES";
        else
          return "NO";
    }    
    else
        return "NO";
}

int main()
{
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << "\n";
    return 0;
}

