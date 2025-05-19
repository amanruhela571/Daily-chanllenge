class Solution {
public:
    bool prime(int n){
        for(int i=0;i<sqrt(n);i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    int countPrimes(int n) {
        vector<bool> arr(n+1,1);
        for(int i=2;i<n+1;i++){
            arr[i]=1;
        }
        arr[0]=0;
        arr[1]=0;
        for(int i=2;i<sqrt(n);i++){
            if(arr[i]){
                for(int j=i*i;j<n;j+=i){
                    arr[j]=0;
                }
            }
        }
        int cnt=0;
        for(int i=2;i<n;i++){
            if(arr[i]==1) cnt++;
        }
        return cnt;
    }

};