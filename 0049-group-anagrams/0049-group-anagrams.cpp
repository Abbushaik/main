class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>>u;
        vector<vector<string>>ans;
        for(int i=0;i<strs.size();++i)
        {
            string s=strs[i];
            sort(strs[i].begin(),strs[i].end());
            u[strs[i]].push_back(s);
        }
        for(auto it:u)
            ans.push_back(it.second);
        return ans;
    }
};