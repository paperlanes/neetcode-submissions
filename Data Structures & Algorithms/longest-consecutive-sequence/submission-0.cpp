class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>stt;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            stt.insert(nums[i]);
        }
        int len=0;

        for(auto x:stt)
        {
            
            if( stt.find(x-1)==stt.end())
           {int len1=1;
            while(stt.find(x+len1)!=stt.end())
            len1++;

            len=max(len1,len);
           }
        }
        return len;
        
    }
};
