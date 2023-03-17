#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
bool possible(int x,int cartridges, int dollars, int  recycleReward, int perksCost)
{
	long long int extra_dollars_needed = x*1ll*perksCost-dollars;
	if(extra_dollars_needed > cartridges*1ll*recycleReward)	return false;
	if(extra_dollars_needed<0)  extra_dollars_needed=0;
	cartridges-=(extra_dollars_needed/recycleReward)+(extra_dollars_needed%recycleReward!=0);
	if(cartridges>=x)	
      return true;
	else				
      return false;
}

int maxPerksItems(int cartridges,int dollars, int recycleReward, int perksCost){
   int low = 0;		
	int hig = 1e9+1;	
	while(low+1<hig)
	{
		int mid = (low+hig);
		mid = mid>>1;
		if(possible(mid,cartridges,dollars,recycleReward,perksCost))
			low=mid;
		else
			hig=mid;
	}
    if(possible(low+1,cartridges, dollars, recycleReward, perksCost))		
        return low + 1;
	else					
       return low;
}


int main()
{
ios;
int cartridges, dollars, recycleReward, perksCost;
cin >> cartridges >> dollars >> recycleReward >> perksCost;
int ans = maxPerksItems(cartridges,dollars,recycleReward,perksCost);
cout << ans << "\n";
return 0;
}