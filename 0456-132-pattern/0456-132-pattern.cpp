class Solution {
public:
    bool find132pattern(vector<int>& nums) 
    {
        int n=nums.size();
        int mn[n];
        mn[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            mn[i]=min(mn[i-1],nums[i]);
        }
        stack<int>stk;
        for(int j=n-1;j>=0;j--)
        {
            if(nums[j]>mn[j])
            {
                while(!stk.empty() && stk.top()<=mn[j])
                    stk.pop();
                if(!stk.empty() && stk.top()<nums[j])
                    return true;
                stk.push(nums[j]);
            }
        }
        return false;
    }
};