#include<iostream>
using namespace std;

    bool possible(vector<int> & bloomDay, int day, int m, int k){
        int count = 0;
        int noofBu = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= day){
                count++;

            }
            else{
                noofBu += (count/k);
                count = 0;
            }
        }
        noofBu += (count/k);
        if(noofBu >= m){
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = INT_MAX;
        if((long long)m*k > bloomDay.size()) return -1;
        while(mini<=maxi){
            int mid = (mini + maxi)/2;
            if(possible(bloomDay, mid, m, k)){
                ans = mid;
                maxi = mid - 1;

            }
            else{
                mini = mid + 1;
            }
        }
        return ans;
    }

