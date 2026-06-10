class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp;
        int n = prices.size();
        int temp;
        int lowest = prices[0];
        int highest = prices[n-1];
        int j= n-1;
        int i1=0;
        int j1=n-1;

        for (int i=0; i< n; i++)
        {
            if(prices[i]<lowest && i<j1)
            {
                lowest = prices[i];
                i1 = i;
            }

            if(prices[n-1-i]>highest && i1<(n-1-i))
            {
                highest = prices[n-1-i];
                j1 = n-1-i;
            }

        }

        if (highest<lowest)
        return 0;

        return (highest-lowest);
    }
};
