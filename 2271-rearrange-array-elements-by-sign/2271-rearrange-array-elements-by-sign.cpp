class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> ne;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                p.emplace_back(nums[i]);

            } else {
                ne.emplace_back(nums[i]);
            }
        }
        // vector<int> ans;
        // if(p.size()>ne.size()){
        //     for(int i=0;i<2*ne.size()+1;){
        //         ans.push_back(p[i++]);
        //         ans.push_back(ne[i++]);
        //     }
        //     for(int i=2*ne.size()+1;i<p.size();i++){
        //         ans.push_back(p[i]);
        //     }
        // }else{
        //     for(int i=0;i<2*p.size();){
        //         ans.push_back(p[i++]);
        //         ans.push_back(ne[i++]);
        //     }
        //     for(int i=2*p.size();i<ne.size();i++){
        //         ans.push_back(ne[i]);
        //     }
        // }
       
        for (int i = 0; i < n / 2; i++) {

            nums[2 * i] = p[i];
            nums[2 * i + 1] = ne[i];
        }
        return nums;
    }
};