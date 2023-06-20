class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int it1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int it2=lower_bound(nums.begin(),nums.end(),target+1)-nums.begin();
        if(it1<nums.size() && nums[it1]==target)
        {
            return {it1,it2-1};
        }
        return {-1,-1};
    }
};