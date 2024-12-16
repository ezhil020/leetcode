class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],maximum= 0;
        
        for(int i =1 ;i < prices.size();i++)
        {
             if(prices[i]<min)
             {
                min = prices[i];
             }
             else
             {
                maximum = max(maximum,prices[i]-min);
             }

    }
    return maximum;
    }
};