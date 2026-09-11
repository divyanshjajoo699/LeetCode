class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i=0;
        int j=0;
        vector<int> c;
        while(i<m&&j<n){
            if(a[i]<b[j]){
                c.push_back(a[i]);
                i++;
            }
            else if(a[i]>b[j]){
                c.push_back(b[j]);
                j++;
            }
            else{
                c.push_back(a[i]);
                c.push_back(b[j]);
                i++;
                j++;
            }
        }

        while(i<m){
            c.push_back(a[i]);
            i++;
        }

        while(j<n){
            c.push_back(b[j]);
            j++;
        }
        int x=c.size();
        for(int i=0;i<x;i++){
            a[i]=c[i];
        }
    }
};