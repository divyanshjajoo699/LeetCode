class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();int count=0;
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count>n/2){
                return arr[i];
                break;
            }
        }
        return 0;
    }
};