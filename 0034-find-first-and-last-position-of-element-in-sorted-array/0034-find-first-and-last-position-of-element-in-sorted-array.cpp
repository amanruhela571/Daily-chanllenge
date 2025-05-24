class Solution {
public:
    // int lowerbound(vector<int> & nums, int target ){
    //     int n= nums.size();
    //     int low = 0 , high = nums.size()-1;
    //     int ans = n;
    //     while(low <= high ) {
    //         int mid = ( low + high ) / 2 ;
    //         if ( nums[mid] <= target ) { // it will give you that number if exist
    //             ans = nums[mid] ;
    //             high = mid -1;
    //         }
    //         else low = mid + 1;
    //     }
    //     return ans;

    // }

    // int upperbound(vector<int> & nums, int target ) {
    //     int n = nums.size();
    //     int low = 0 , high = n-1;
    //     int ans = n;
    //     while( low <= high ) {
    //         int mid = ( low + high ) / 2; 
    //         if(nums[mid]>=target ) {
    //             ans=mid;
    //             high = mid-1;
    //         }
    //         else{
    //             low=mid+1;
    //         }
    //     }
    //     return ans;
    // }
    // vector<int> searchRange(vector<int>& nums, int target) {
    //     int n=nums.size();
    //     if(n==0){
    //         return {-1,-1};
    //     }
    //     int a = lowerbound(nums, target);
        
    //     if(nums[a] != target || a ==n){
    //         return {-1,-1};
    //     }
    //     int b = upperbound(nums, target);
    //     return {a,b-1};
    // }
    int lowerbound(vector<int> &nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;  // default to end if not found
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperbound(vector<int> &nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return {-1, -1};

        int start = lowerbound(nums, target);
        int end = upperbound(nums, target) - 1;

        // Check if target exists
        if (start == n || nums[start] != target) return {-1, -1};

        return {start, end};
    }
};