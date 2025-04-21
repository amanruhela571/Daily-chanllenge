class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //MOORE's voting system
        int cnt =0;
        int ele =0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;  // we are doing this for consecutive ele are different otherwise cnt will be negatine
                ele=nums[i];

            }
            else if( ele==nums[i]){
               
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(auto it : nums){
            if(it==ele)cnt1++;
        }
        return cnt1>(n/2)?ele:-1;


    }
};