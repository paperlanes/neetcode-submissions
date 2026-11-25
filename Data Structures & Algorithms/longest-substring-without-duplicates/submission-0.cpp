class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int n=s.size();
        int ans=0;
        int r=0;
        int l=0;


       while(r<n)
        {   int len=0;
            
            if(st.find(s[r])==st.end())
            {
                st.insert(s[r]);
                r++;
            }
            else
           {st.erase(s[l]); l++;}
           len=r-l;
           ans=max(len,ans); 

        }
        
        return ans;
        
    }
};
