class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(string x:strs)
        {   string t=x;
            sort(x.begin(),x.end());
           
            mpp[x].push_back(t);
        }
      vector<vector<string>>ans;
      for(auto &p:mpp)
      {
        ans.push_back(p.second);

      }
return ans;
        
    }
};
