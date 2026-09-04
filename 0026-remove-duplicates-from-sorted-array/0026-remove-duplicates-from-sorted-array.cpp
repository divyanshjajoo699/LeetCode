class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
       int i=0;int j=1;
       while(j<arr.size()){
        if(arr[i]!=arr[j]){
            swap(arr[i+1],arr[j]);
            i++;
        }
        j++;
       }
       return i+1;
    }
};