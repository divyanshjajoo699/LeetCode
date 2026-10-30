class Solution {
public:
    void merge(vector<int>&arr,int s,int mid,int e){
        vector<int> result;
        int i=s;
        int j=mid+1;
        while(i<=mid&&j<=e){
            if(arr[i]<arr[j]){
                result.push_back(arr[i]);
                i++;
            }
            else{
                result.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            result.push_back(arr[i]);
            i++;
        }
        while(j<=e){
            result.push_back(arr[j]);
            j++;
        }

        for(int i=s;i<=e;i++){
            arr[i]=result[i-s];
        }
    }
    void mergeHelper(vector<int>&arr,int s,int e){
        if(s>=e) return ;
        int mid=(s+e)/2;
        mergeHelper(arr,s,mid);
        mergeHelper(arr,mid+1,e);
        merge(arr,s,mid,e);
    }
    vector<int> sortArray(vector<int>& arr) {
      int s=0;
      int e=arr.size()-1;
      mergeHelper(arr,s,e);
      return arr;
    }
};