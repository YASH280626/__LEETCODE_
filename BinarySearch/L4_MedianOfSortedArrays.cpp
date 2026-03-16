#include<iostream>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        vector<int> temp;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }
            else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums1.size()){
            temp.push_back(nums1[i]);
            i++;

        }
        while(j < nums2.size()){
            temp.push_back(nums2[j]);
            j++;
        }
        int n = temp.size();
        if(n%2 == 1) return temp[n/2];
        else{
            return (temp[n/2] + temp[(n/2) - 1])/2.0;
        }
        return -1;


    }