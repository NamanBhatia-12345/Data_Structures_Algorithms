#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
int nonRepeatedChar(string compString){
    int answer = 0;
    map<char,int> mp;
    int n = compString.length();
    for(int i=0;i<n;i++){
        mp[compString[i]]++;
    }
    for(auto itr : mp){
        if(itr.second == 1)
          answer++;
    }
    return answer;
}
int main()
{
ios;
string compString;
getline(cin,compString);
int result = nonRepeatedChar(compString);
cout << result << "\n";
return 0;
}