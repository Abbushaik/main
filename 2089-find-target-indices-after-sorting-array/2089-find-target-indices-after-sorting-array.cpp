class Solution {
     public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        int n=nums.size();
        if(n==1 && nums[0]!=target)
            return {};
        else if(n==1 && nums[0]==target)
            return {0};
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int j=0;
        for(int i=0;i<n;i++)
        {
            int it=lower_bound(nums.begin()+j,nums.end(),target)-nums.begin();
            if(nums[it]==target)
            {
                j=it+1;
                ans.push_back(it);
            }
            else
                return ans;
        }
        return ans;
    }
};