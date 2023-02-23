#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if (n < 2) {
        return 0;
    }
    vector<int> leftProfit(n), rightProfit(n);
    int minPrice = prices[0];
    for (int i = 1; i < n; i++) {
        minPrice = min(minPrice, prices[i]);
        leftProfit[i] = max(leftProfit[i - 1], prices[i] - minPrice);
    }
    int maxPrice = prices[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        maxPrice = max(maxPrice, prices[i]);
        rightProfit[i] = max(rightProfit[i + 1], maxPrice - prices[i]);
    }
    int maxTotalProfit = 0;
    for (int i = 0; i < n; i++) {
        maxTotalProfit = max(maxTotalProfit, leftProfit[i] + rightProfit[i]);
    }
    return maxTotalProfit;
}

int main(){
    vector<int> prices_month1 = {3,3,5,0,0,3,1,4};
    /* Answer : 6 */
    cout << maxProfit(prices_month1) << endl;

    vector<int> prices_month2 = {1,2,3,4,5};
    /* Answer : 4 */
    cout << maxProfit(prices_month2) << endl;

    vector<int> prices_month3 = {7,6,4,3,1};
    /* Answer : 0 */
    cout << maxProfit(prices_month3) << endl;

    return 0;
}