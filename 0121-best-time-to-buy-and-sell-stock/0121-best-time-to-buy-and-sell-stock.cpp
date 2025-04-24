#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int maxi=0;
        int mini=INT_MAX;
       
        for(int i=0;i<arr.size();i++){
            mini = min(mini,arr[i]);
            maxi = max(maxi,arr[i]-mini);
        }
        return maxi;
    }
};