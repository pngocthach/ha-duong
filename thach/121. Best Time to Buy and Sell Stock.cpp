#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices) {
    int maxProfit = INT_MIN, currentProfit = INT_MIN;
    int lowestBuyPrice = prices[0];
    for (auto price : prices) {
        lowestBuyPrice = min(lowestBuyPrice, price);
        currentProfit = price - lowestBuyPrice;
        maxProfit = max(currentProfit, maxProfit);
    }
    return maxProfit;
}

int main() {
    vector<int> a = {7, 6, 4, 3, 1};
    cout << maxProfit(a);
}