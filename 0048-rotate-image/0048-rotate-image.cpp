class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>>temp;
        for(int i=0;i<row;++i)
        {
            vector<int>ans;
            for(int j=0;j<col;++j)
            {
                ans.push_back(matrix[j][i]);
            }
            reverse(ans.begin(),ans.end());
            temp.push_back(ans);
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                matrix[i][j]=temp[i][j];
            }
        }
    }
};