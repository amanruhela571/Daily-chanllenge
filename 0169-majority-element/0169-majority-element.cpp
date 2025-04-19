class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int ans = 0;
        int n=nums.size();

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            
        }
        for(auto it:m){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;

    }
};