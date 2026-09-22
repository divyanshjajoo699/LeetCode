class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        // int n= arr.size();
        // int j=-1;
        // for(int i=0;i<n;i++){
        //     if(arr[i]==0){
        //         j=i;
        //         break;
        //     }
        // }

        //  if(j==-1){
        //     return ;
        // }
        
        // for(int i=j+1;i<n;i++){
        //     if(arr[i]!=0){
        //       swap(arr[j],arr[i]);
        //             j++;
        //     }
        // }

    // int n=arr.size();
    //     int i=0;int j=1;
    // for(int j=0;j<n;j++){
    //     if(arr[j]!=0){
    //         swap(arr[i],arr[j]);
    //         i++;
    //     }
    // }

    int n=arr.size();
    int i=0;int j=1;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    }
};


//brute approach is by one loop i am checking for zero elements and marking then with index j and in the second loop i am finding the elements !=0 and swapping with the element at index j

//optimised we use 2 pointer approach in which we put i=0 and j=1 and iterate the j till end and check if arr[j]!=0 then swap it with the index i and then i++ so that we can assume next element to be zero 