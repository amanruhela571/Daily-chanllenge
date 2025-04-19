class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
           if(mp.find(target-nums[i]) == mp.end()){
            mp[nums[i]]=i;
           }
           else{
            ans.push_back(i);
            ans.push_back(mp[target-nums[i]]);
            return ans;
           }
        }
        ans.push_back(-1);
        ans.emplace_back(-1);
        return ans;
    }
};