#include <string>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
char lostCharNW(string stringSent, string stringRec){
    char answer;
    map<char,int> mp;
    int n = stringSent.length();
    int m = stringRec.length();

    for(int i=0;i<n;i++)
      mp[stringSent[i]]++;
    for(int i=0;i<m;i++)
      mp[stringRec[i]]--;
    for(auto itr : mp){
      if(itr.second == 1)
        answer = itr.first;
    }    
    return answer;
}
int main()
{
ios;
string stringSent;
getline(cin,stringSent);

string stringRec;
getline(cin,stringRec);

char result = lostCharNW(stringSent,stringRec);
cout << result << "\n";
return 0;
}