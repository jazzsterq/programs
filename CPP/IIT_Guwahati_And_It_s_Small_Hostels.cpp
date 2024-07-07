#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct Pizza {
    string name;
    int price_s, price_m, price_l;
};

struct OrderItem {
    string name, size;
    int quantity;
};

// Helper function to get pizza prices based on size
int getPrice(const Pizza& p, const string& size) {
    if (size == "Small") return p.price_s;
    if (size == "Medium") return p.price_m;
    if (size == "Large") return p.price_l;
    return 0;
}

// Discount 1: Buy 3, get the cheapest one free
int applyDiscountOne(const unordered_map<string, Pizza>& priceMap, unordered_map<string, vector<int>>& orderMap) {
    vector<int> allPrices;
    for (const auto& order : orderMap) {
        const auto& pizza = priceMap.at(order.first);
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < order.second[i]; ++j) {
                allPrices.push_back(getPrice(pizza, i == 0 ? "Small" : (i == 1 ? "Medium" : "Large")));
            }
        }
    }

    sort(allPrices.begin(), allPrices.end());
    int freePizzas = allPrices.size() / 3;
    int discountTotal = accumulate(allPrices.begin(), allPrices.begin() + freePizzas, 0);

    return discountTotal;
}

// Discount 2: Buy 5 for $100
int applyDiscountTwo(const unordered_map<string, Pizza>& priceMap, unordered_map<string, vector<int>>& orderMap) {
    int discountTotal = 0;
    for (const auto& order : orderMap) {
        int totalQuantity = accumulate(order.second.begin(), order.second.end(), 0);
        discountTotal += (totalQuantity / 5) * 100; // $100 for every group of 5
        discountTotal += (totalQuantity % 5) * getPrice(priceMap.at(order.first), "Small"); // Remaining pizzas charged at small price
    }

    return discountTotal;
}

// Discount 3: For every Large pizza, get a Small one free
int applyDiscountThree(const unordered_map<string, Pizza>& priceMap, unordered_map<string, vector<int>>& orderMap) {
    int discountTotal = 0;
    for (const auto& order : orderMap) {
        int freeSmallPizzas = min(order.second[2], order.second[0]); // Large and Small pizzas count
        discountTotal += freeSmallPizzas * getPrice(priceMap.at(order.first), "Small");
    }

    return discountTotal;
}

// Discount 4: Buy 3 Large, pay for them as Medium
int applyDiscountFour(const unordered_map<string, Pizza>& priceMap, unordered_map<string, vector<int>>& orderMap) {
    int discountTotal = 0;
    for (const auto& order : orderMap) {
        int groupsOfThree = order.second[2] / 3; // Groups of three large pizzas
        discountTotal += groupsOfThree * (getPrice(priceMap.at(order.first), "Large") - getPrice(priceMap.at(order.first), "Medium")) * 3;
    }

    return discountTotal;
}

// Example implementation of the solution function
int solution(vector<Pizza>& menu, vector<OrderItem>& order) {
    unordered_map<string, Pizza> priceMap;
    for (const Pizza& p : menu) {
        priceMap[p.name] = p;
    }

    unordered_map<string, vector<int>> orderMap;
    for (const OrderItem& item : order) {
        if (item.size == "Small") orderMap[item.name][0] += item.quantity;
        else if (item.size == "Medium") orderMap[item.name][1] += item.quantity;
        else if (item.size == "Large") orderMap[item.name][2] += item.quantity;
    }

    // Calculate total cost using each discount
    int totalCost = INT_MAX;
    totalCost = min(totalCost, applyDiscountOne(priceMap, orderMap));
    totalCost = min(totalCost, applyDiscountTwo(priceMap, orderMap));
    totalCost = min(totalCost, applyDiscountThree(priceMap, orderMap));
    totalCost = min(totalCost, applyDiscountFour(priceMap, orderMap));

    return totalCost;
}

int main() {
    vector<Pizza> menu = {{"Margherita", 7, 8, 10}, {"Hawaiian", 8, 9, 12}, {"Capricciosa", 5, 7, 10}};
    vector<OrderItem> order = {{"Margherita", "Small", 3}, {"Hawaiian", "Large", 1}, {"Capricciosa", "Medium", 5}};

    cout << "Minimum cost: " << solution(menu, order) << endl;

    return 0;
}
