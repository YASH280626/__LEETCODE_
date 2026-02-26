#include<iostream>
using namespace std;

    int maxAbsoluteSum(vector<int>& nums) {
      int maxsum = 0;
      int minsum = 0;
      int ans = 0;
      for(int i = 0; i < nums.size(); i++){
        maxsum = max(nums[i], maxsum+nums[i]);
        minsum = min(nums[i], minsum + nums[i]);
        ans = max(ans, max(abs(maxsum), abs(minsum)));
      }
      return ans;
    }