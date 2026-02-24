#include<iostream>
using namespace std;

 double findMaxAverage(vector<int>& nums, int k) {
        int windowsum = 0;
        for(int i = 0; i < k; i++){
            windowsum += nums[i];
        }
        int maxi = windowsum;
        for(int i = k; i < nums.size(); i++){
            windowsum += nums[i];
            windowsum -= nums[i - k];
            maxi = max(windowsum, maxi);

        }
        return (double) maxi/k;
}