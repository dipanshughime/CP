class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int c = 0;
        int i=0;
        int a = money;
        while(c!=2){
            money-=prices[i++];
            c++;
        }
        if(money<0){
            return a;
        }
        return money;
    }
};