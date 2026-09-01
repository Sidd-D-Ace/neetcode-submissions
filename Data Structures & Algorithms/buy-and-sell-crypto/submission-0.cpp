class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int buyPrice = arr[0];
        int profit = 0;

        for(int i=1; i<arr.size(); i++){
            if(arr[i]<buyPrice){
                buyPrice = arr[i];
            }else{
                profit = max(profit,arr[i]-buyPrice);
            }
        }
        return profit;
    }
};
