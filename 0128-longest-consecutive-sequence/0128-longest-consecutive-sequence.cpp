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
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);

        }
        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int x=it;
                int cnt=1;
                while(s.find(x+1)!=s.end()){
                    x++;
                    cnt++;
                }
                m=max(m,cnt);
            }
        }
        return m;
    }
};