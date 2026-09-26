class Solution {
public:
    vector<int> generateRow(int numRows){
        long long ans=1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int i=1;i<numRows;i++){
            ans=ans*(numRows-i);
            ans=ans/i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        for(int i=1;i<=numRows;i++){
            pascalTriangle.push_back(generateRow(i));
        }
        return pascalTriangle;
    }
};