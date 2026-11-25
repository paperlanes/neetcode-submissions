class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26]={0};
        int n=s.size();
        int maxi=0;
        int ans=0;
        int j=0;
        int i=0;
        for(j=0;j<n;j++)
        {   
            count[s[j]-'A']++;
            maxi=max(maxi,count[s[j]-'A']);
            if((j-i+1)-maxi>k)
            {
             count[s[i]-'A']--;
             i++;
            }
            ans=max(ans,(j-i+1));
              
            }
            return ans;
        }
        
   
};
