class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){ z++;}
            else if(nums[i]==1){ o++;}
            else{ t++;}
        }
        vector<int>ans;
        while(z--){
            ans.emplace_back(0);
        }
        while(o--){
            ans.emplace_back(1);
        }
        while(t--){
            ans.emplace_back(2);
        }
        nums=ans;
    }
};