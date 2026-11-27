class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s2.size();
        vector<int>count(26,0);
        int i=0;
        int j=s1.size()-1;

         for(int i=0;i<s1.size();i++)
         {
            count[s1[i]-'a']++;
         }
         while(j<n)
         {  vector<int>count2(26,0);
            for(int k=i;k<=j;k++)
            {
               count2[s2[k]-'a']++;
            }
            if(count==count2) return true;
            i++;
            j++;
         }
        return false;
    }
};
