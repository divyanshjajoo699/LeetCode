class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        //m-1 bubble sort / any sorting algo 
        // for(int i=0;i<n-1;i++){
        //     for(int j=0;j<n-i-1;j++){
        //         if(arr[j]>arr[j+1]){
        //             swap(arr[j],arr[j+1]);
        //         }
        //     }
        // }

        //m-2 using count approach better approach O(2n)
        // int countzero=0;
        // int countone=0;
        // int counttwo=0;
        // for(int i=0;i<n;i++){
        //     if(arr[i]==0){
        //         countzero++;
        //     }
        //     else if(arr[i]==1){
        //         countone++;
        //     }
        //     else if(arr[i]==2){
        //         counttwo++;
        //     }
        // }
        // // for(int i=0;i<countzero;i++){
        // //     arr[i]=0;
        // // }
        // // for(int i=countzero;i<countzero+countone;i++){
        // //     arr[i]=1;
        // // }
        // // for(int i=countzero+countone;i<countzero+countone+counttwo;i++){
        // //     arr[i]=2;
        // // }

        //m-3 DNS O(n)
        int low=0;int mid=0;int high=n-1;

        for(int i=0;i<n;i++){
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    


    }
};