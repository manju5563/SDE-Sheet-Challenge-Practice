#include<bits/stdc++.h>
using namespace std;
int  maxProfit(vector<int>& prices) {
        int minPrice=1e9;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minPrice);
        }
    return maxProfit;
}