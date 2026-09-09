class Solution {
public:
    int singleNumber(vector<int>& arr) {
       int n=arr.size();
       int xorr=0;int result=0;
       for(int i=0;i<n;i++){
         result=result^arr[i];
       }
       return result;
    }
};