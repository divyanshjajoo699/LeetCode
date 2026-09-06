class Solution {
public:
    int missingNumber(vector<int>& arr) {
        // int n=arr.size();
        // int xor1=0,xor2=0;
        // for(int i=0;i<n;i++){
        //     xor2=xor2^arr[i];
        //     xor1=xor1^(i+1);
        // }
        // return xor1^xor2;
    int n=arr.size();
        int result=0;int sum=0;
        for(int i=0;i<n;i++){
            result+=arr[i];
        }
        sum=(n*(n+1))/2;
        return sum-result;
    }
    }
};