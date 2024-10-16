
// jT 10/16/24


#include <iostream>
#include <sstream>
#include <vector>
std::vector<std::string> split(const std::string &input, char delimiter) {
    std::vector<std::string> result;
    std::stringstream ss(input);
    std::string item;
    while (std::getline(ss, item, delimiter)) {
        result.push_back(item);
    }
    return result;
}
std::vector<std::vector<std::string>> splitIntoWordGroups(const std::string &input)
{
    // Split the input by commas to get groups
    std::vector<std::string> groups = split(input, ',');
    std::vector<std::vector<std::string>> wordGroups;
    // For each group, split it into words and store it in the vector of vectors
    for (const auto &group : groups) {
        wordGroups.push_back(split(group, ' '));
    }
    return wordGroups;
}
int main() {
    std::string sampleInput = "4 year old female hyena, born in spring, tan color,70 pounds, from Friguia Park, Tunisia";
    std::vector<std::vector<std::string>> result =
    splitIntoWordGroups(sampleInput);
    // Output the groups and their words
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "Group " << (i + 1) << ": ";
        for (const auto &word : result[i]) {
            if (i==0) {
                // We are in the first group
                std::cout << "\n in this first group and word is: " << word;
            }
            std::cout << word << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

