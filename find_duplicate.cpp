#include<bits/stdc++.h>
using namespace std;

 int findDuplicate(vector<int>& nums) {
        int n=nums.size()+1;
        vector<int>freq(n+1,0);
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]==0){
                freq[nums[i]]++;
            }
            else{
                return nums[i];
            }
        }
        return 0;
}