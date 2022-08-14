#include <iostream>
#include <vector>
#include <algorithm>

struct Item final {
    int weight;
    int value;
};

bool comp (Item a, Item b){
    return static_cast <double> (a.value) / a.weight > static_cast <double> (b.value) / b.weight;
}

double get_max_knapsack_value(int capacity, std::vector <Item> items) {
    double value = 0.0;
    sort(items.begin(), items.end(), comp);
    for (auto it : items){
        if (it.weight <= capacity){
            value += it.value;
            capacity -= it.weight;
        } else{
            value += capacity * static_cast <double> (it.value) / it.weight;
            break;
        }
    }
    return value;
}

int main() {
    int number_of_items;
    int knapsack_capacity;
    std::cin >> number_of_items >> knapsack_capacity;
    std::vector <Item> items(number_of_items);
    for (int i = 0; i < number_of_items; i++) {
        std::cin >> items[i].value >> items[i].weight;
    }
    double max_knapsack_value = get_max_knapsack_value(knapsack_capacity, std::move(items));
    std::cout.precision(10);
    std::cout << max_knapsack_value << std::endl;
    return 0;
}
