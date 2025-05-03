class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        int sum=0;
        map<int,int> m;
        m[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum-k;
            cnt+=m[rem];
            m[sum]+=1;
            
        }
        return cnt;
        
    }
};