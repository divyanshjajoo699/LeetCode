class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        // for(int i=0;i<n-1;i++){
        //     for(int j=0;j<n-i-1;j++){
        //         if(arr[j]>arr[j+1]){
        //             swap(arr[j],arr[j+1]);
        //         }
        //     }
        // }

    // long long  countzero,countone,counttwo;
    //     for(long long i=0;i<n;i++){
    //       if(arr[i]==0){
    //          countzero++;
    //       } 
    //         if(arr[i]==1){
    //         countone++;
    //       }
    //       else{
    //         counttwo++;
    //       }
    //     }

    //     for(long long i=0;i<countzero;i++){
    //         arr[i]=0;
    //     }
    //     for(long long  i=countzero;i<countzero+countone;i++){
    //         arr[i]=1;
    //     }
    //     for(long long i=countzero+countone;i<countzero+countone+counttwo;i++){
    //         arr[i]=2;
    //     }
        int countzero=0;
        int countone=0;
        int counttwo=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                countzero++;
            }
            else if(arr[i]==1){
                countone++;
            }
            else if(arr[i]==2){
                counttwo++;
            }
        }

        for(int i=0;i<countzero;i++){
            arr[i]=0;
        }
        for(int i=countzero;i<countzero+countone;i++){
            arr[i]=1;
        }
        for(int i=countzero+countone;i<countzero+countone+counttwo;i++){
            arr[i]=2;
        }


    }
};