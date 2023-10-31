#include <iostream>

using namespace std;


double calculateTotalProfit(double profits[6]) {
    double totalProfit = 0.0;

    
    for (int i = 0; i < 6; i++) {
        totalProfit += profits[i];
    }

    return totalProfit;
}

int main() {
    
    double profits[6];

    
    cout << "Enter the profits for each month:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Month " << i + 1 << ": ";
        cin >> profits[i];
    }

    
    double totalProfit = calculateTotalProfit(profits);

    
    cout << "Total profit for 6 months: " << totalProfit << endl;

    return 0;
}
