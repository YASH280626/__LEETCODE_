#include<iostream>
using namespace std;

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       
        
     vector<int> sorted_nums = nums;
    sort(sorted_nums.begin(), sorted_nums.end());
    
    unordered_map<int, int> counts;
    // We go backwards or check if exists so we only store the FIRST 
    // occurrence of a number (the smallest index).
    for (int i = 0; i < sorted_nums.size(); i++) {
        if (counts.find(sorted_nums[i]) == counts.end()) {
            counts[sorted_nums[i]] = i;
        }
    }
    
    vector<int> ans;
    for (int x : nums) {
        ans.push_back(counts[x]);
    }
    return ans;
        
    }