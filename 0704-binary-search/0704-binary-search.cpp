class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int s=0;
        int e=n-1;
        bool found=false;
        int mid;
        while(s<=e){
             mid=(s+e)/2;
            if(arr[mid]==target){
               found=true; 
               break;
            }
            else if(arr[mid]<target){
                s=mid+1;
            }
            else if(arr[mid]>target){
                e=mid-1;
            }
        }
        if(found){
            return mid;
        }
        else{
            return -1;
        }
    }
};