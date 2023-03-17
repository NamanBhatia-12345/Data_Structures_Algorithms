#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
vector<string> dictWords (string textInput){
    vector<string> answer;
    vector<string> temp;
    int n = textInput.length(); 
    string s = "";
    for(int i=0;i<n;i++){
        if(textInput[i] == ' '){
          temp.push_back(s);
          s = "";
          continue;
        }
        s += textInput[i];
    }
    temp.push_back(s);
    map<string,int> mp;
    for(int i=0;i<temp.size();i++){
        mp[temp[i]]++;
    }
    for(auto itr : mp){
        if(itr.second > 1)
          answer.push_back(itr.first);
    }
    if(answer.size() == 0){
        answer.push_back("NA");
    }
    return answer;
}
int main()
{
ios;
string textInput;
getline(cin,textInput);
vector<string> result = dictWords(textInput);
for(int idx = 0; idx<result.size() - 1; idx++)
   cout << result[idx] << " ";
cout << result[result.size() - 1];   
return 0;
}