#include<iostream>
#include<numeric>
using namespace std;

int sub (vector<int> & nums, int mid){
        int subarr = 1;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(sum += nums[i] <=  mid){
                
                sum += nums[i];
            }
            else{
                subarr++;
                sum = nums[i];
            }
        }
        return subarr;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
            int subss = sub(nums, mid);
            if(subss > k){
                low = mid + 1;

            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }

