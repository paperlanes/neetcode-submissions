class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;

        int arr[26]={0};
       for(int i=0;i<n;i++)
       {
        int val=s[i]-'a';
        arr[val]=arr[val]+1;

        int mal=t[i]-'a';
        arr[mal]=arr[mal]-1;

       }

       for(auto &x:arr)
       {
        if(x!=0)
        return false;
       }
       return true;
        
    }
};
