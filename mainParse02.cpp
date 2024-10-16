
// jT 10/16/24


#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(const string &input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string item;
    while (getline(ss, item, delimiter)) {
        result.push_back(item);
    }
    return result;
}
vector<vector<string>> splitIntoWordGroups(const string &input)
{
    // Split the input by commas to get groups
    vector<string> groups = split(input, ',');
    vector<vector<string>> wordGroups;
    // For each group, split it into words and store it in the vector of vectors
    for (const auto &group : groups) {
        wordGroups.push_back(split(group, ' '));
    }
    return wordGroups;
}
int main() {
    string sampleInput = "4 year old female hyena, born in spring, tan color,70 pounds, from Friguia Park, Tunisia";
    string mySpecies = "";
    vector<vector<string>> result =
    splitIntoWordGroups(sampleInput);
    // Output the groups and their words
    int j = 0;
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "Group " << (i + 1) << ": ";
        for (const auto &word : result[i]) {
            if (i==0) {
                // We are in the first group
                if(j==4) {
                    mySpecies = word;


                }

                cout << "\n in this first group and word " << j << "is: " << word;
                j++;
            }
            else {
                cout << word << " ";
            }
        }
        cout << endl;
    }


    // Output species.
    cout << "\n mySpecies is...." << mySpecies << endl;

    return 0;
}

