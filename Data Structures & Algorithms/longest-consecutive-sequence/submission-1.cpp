class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
       
        int maxi=0;
        for(auto &x:st)
        {
            if(st.find(x-1)==st.end())
            {
                int len=1;
                while(st.find(x+len)!=st.end())
                {
                    len++;
                }
                 maxi=max(maxi,len);
            }
            
        }
        return maxi;
    }
};
