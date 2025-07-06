#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 1, 3, 2, 1, 4};
    std::unordered_map<int, int> count;

    for (int num : arr) {
        count[num]++;
    }

    // Output the frequency of each element
    for (const auto& pair : count) {
        std::cout << "Element " << pair.first << " appears " << pair.second << " times.\n";
    }

    return 0;
} 
  