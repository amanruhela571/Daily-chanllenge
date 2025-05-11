class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        

        int n=nums.size();
        int r=int(n/3) + 1; 
        // by this we dont need set ( we can check if frequency is equal to r then save in vector directly so we can handle duplicate insertion cases )
        vector<int> ans;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==r) ans.push_back(nums[i]);\
            if(ans.size()==2) break; 
            // if n/3 then there is only 2 element possible like if it ask us n/2 then there is only 1 element possible right.
        }
        
        return ans;

    }
};