class Solution {
public:
    bool ls(vector<int> nums,int x){
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==x){
                return true;
            }
        }
        return false;
    }
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int m=0;
        sort(nums.begin(),nums.end());
        int le=INT_MIN;
        int cnt=1;
        
        for(int i=0;i<n;i++){
            
            if(nums[i]-1==le){
                cnt++;
                le=nums[i];
            }
            else if(nums[i]>le){
                le=nums[i];
                cnt=1;
            }
            m=max(m,cnt);
        }
        return m;
    }
};