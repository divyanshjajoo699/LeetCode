//         //BRUTE

// class Solution {
// public:
//     int maxSubArray(vector<int>& arr) {
//         int n=arr.size();int sum=0;int maxi=INT_MIN;

//         // for(int i=0;i<n;i++){
//         //     for(int j=i;j<n;j++){
//         //         sum=0;
//         //         for(int k=i;k<=j;k++){
//         //             sum+=arr[k];
//         //             maxi=max(maxi,sum);
//         //         }
//         //     }
//         // }
//         // return maxi;


        //BETTER
// class Solution {
// public:
//     int maxSubArray(vector<int>& arr) {
//         int n=arr.size();int sum=0;int maxi=INT_MIN;
//         for(int i=0;i<n;i++){
//             sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=arr[j];
//                 maxi=max(maxi,sum);
                
//             }
//         }
//         return maxi;
//     }
// };

//OPTIMAL
class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();int sum=0;int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>maxi){
                maxi=sum;
            }

            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};