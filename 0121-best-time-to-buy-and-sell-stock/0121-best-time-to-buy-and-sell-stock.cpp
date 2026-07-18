class Solution {
public:
    int maxProfit(vector<int>& price) {

    int n = price.size();    
    int maxpft = 0; int bestbuy = price[0];

    for(int i = 1; i < n;i++ ){
        if(price[i]>bestbuy){
            maxpft= max(maxpft,price[i]-bestbuy);
        }
        bestbuy = min(bestbuy , price[i]);
    }

    return maxpft;
        
    }
};