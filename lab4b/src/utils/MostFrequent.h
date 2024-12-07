#include <utility>
#include <vector>
#include <map>

// Return number of unique elements and the number of times the most frequent element appears
std::pair<std::size_t, std::size_t> MostFrequent(const std::vector<int>& v) {
    std::map<int, std::size_t> freq;
    for (int i : v) {
        freq[i]++;
    }
    std::size_t max = 0;
    for (const auto& [key, value] : freq) {
        if (value > max) {
            max = value;
        }
    }
    return {freq.size(), max};
}