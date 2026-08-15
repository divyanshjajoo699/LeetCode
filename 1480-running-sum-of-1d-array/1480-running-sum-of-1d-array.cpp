class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
     int n=arr.size();
     vector<int> narr(n);
    for(int i=0;i<n;i++){
        if(i==0){
           narr[i]=arr[i];
        }
        else{
           narr[i]=arr[i]+narr[i-1];
        }
    }
    return narr;
    
    }
};