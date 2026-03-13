#include<iostream>
using namespace std;

    int sum (vector<int> & nums, int divisor){
        long long  ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans += ceil((double) nums[i]/(double)divisor);
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int anss = 0;
        
        while(low <= high){
            int mid = (low + high)/2;
            int summ = sum(nums, mid);
            if(summ <= threshold){
                anss = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return anss;
        
    }