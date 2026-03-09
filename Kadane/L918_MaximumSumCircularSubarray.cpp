#include<iostream>
using namespace std;

   int maxSub(vector<int> &nums){
        int sum = 0;
        int maxi = nums[0];
        for(int x = 0; x < nums.size(); x++){
            sum += nums[x];
            maxi = max(maxi, sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
    int minSub(vector<int> &nums){
         int sum = 0;
        int mini = nums[0];
        for(int x = 0; x < nums.size(); x++){
            sum += nums[x];
            mini = min(mini, sum);
            if(sum > 0){
                sum = 0;
            }
        }
        return mini;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxNormal = maxSub(nums);
        int minNormal = minSub(nums);
        int totalSum = 0;
        for(int x = 0; x < nums.size(); x++){
            totalSum += nums[x];
        }
        int wrapped = totalSum - minNormal;
        if(maxNormal < 0){
            return maxNormal;
        }
        return max(maxNormal, wrapped);

        
    }