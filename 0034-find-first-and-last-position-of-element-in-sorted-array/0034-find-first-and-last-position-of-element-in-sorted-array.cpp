class Solution {
    public:
    int binarysearch(vector<int>&nums,int target)
    {
        int l=0,h=nums.size()-1;
        while(l<=h)
        {
          int m=(l+h)/2;
          if(nums[m]<target)
          {
              l=m+1;
          }
          else
          {
             h=m-1;
          }
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int it1=binarysearch(nums,target);
        int it2=binarysearch(nums,target+1)-1;
         if(it1<nums.size() && nums[it1]==target)
         {
           return {it1,it2};
         }
        return {-1,-1};
    }
};