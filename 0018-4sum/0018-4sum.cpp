class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int l,k;
        for(int i=0;i<n-3;i++)
        {
            if(i!=0  && nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j!=(i+1) && nums[j]==nums[j-1])
                    continue;
                l=j+1;
                k=n-1;
                int temp=nums[i]+nums[j];
                while(l<k)
                {
                    long long int sum = nums[l]+nums[k];
                    if(sum+temp>target)
                    {
                        k--;
                    }
                    else if(sum+temp<target)
                    {
                        l++;
                    }
                    else
                    {
                        ans.push_back({nums[i],nums[j],nums[l],nums[k]});
                        l++;
                        k--;
                        while(l<k && nums[l]==nums[l-1])
                            l++;
                        while(l<k && nums[k]==nums[k+1])
                            k--;
                    }
                }
            }
        }
        return ans;
    }
};