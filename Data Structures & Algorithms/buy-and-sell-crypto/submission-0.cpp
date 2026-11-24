class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest=prices[0];
        int best=0;
        for(int i=0;i<prices.size();i++)
        {
            int today=prices[i];
            if(today<cheapest)
            {
                cheapest=today;
            }

            int profit=today-cheapest;

            best=max(profit,best);
        }
        return best;

        
    }
};
