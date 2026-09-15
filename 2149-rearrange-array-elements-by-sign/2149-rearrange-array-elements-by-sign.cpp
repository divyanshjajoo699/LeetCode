class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();int ei=0;int oi=1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                ans[ei]=arr[i];
                ei=ei+2;
            }
            else{
                ans[oi]=arr[i];
                oi+=2;
            }
        }
        return ans;
        
    }
};