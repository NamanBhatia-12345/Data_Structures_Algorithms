#include <bits/stdc++.h>
using namespace std;

int funcEnergy(int intialEnergy,int rate,int timeN){
    int answer = intialEnergy;
    timeN--;
    while(timeN--){
        answer += rate;
    }
    //answer = intialEnergy;
    return answer; 
}
int main()
{
int intialEnergy;
cin >> intialEnergy;

int rate;
cin >> rate;

int timeN;
cin >> timeN;

int result = funcEnergy(intialEnergy,rate,timeN);
cout << result << "\n";
return 0;
}