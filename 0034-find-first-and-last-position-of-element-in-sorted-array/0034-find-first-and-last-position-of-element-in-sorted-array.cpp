class Solution {
public:
     int binarysearch(int l,int h,vector<int>&nums,int target)
     {
           while(l<=h)
           {
             int m = (l+h)/2;
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
        int it1,it2;
        it1=binarysearch(0,nums.size()-1,nums,target);
        it2=binarysearch(0,nums.size()-1,nums,target+1)-1;
        if(it1<nums.size() && nums[it1]==target)
        {
            return {it1,it2};
        }
        return {-1,-1};
    }
};