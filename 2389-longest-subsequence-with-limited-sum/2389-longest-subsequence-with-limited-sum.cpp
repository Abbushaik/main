class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0;i<queries.size();i++)
        {
            cnt=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]<=queries[i])
                {
                    cnt++;
                    queries[i]=queries[i]-nums[j];
                }
                if(queries[i]==0)
                    break;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};