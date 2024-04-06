#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Mapping of digits to characters
map<int, vector<char>> digitsMapping = {
    {0, {'+', ' '}},
    {1, {'@'}},
    {2, {'a', 'b', 'c'}},
    {3, {'d', 'e', 'f'}},
    {4, {'g', 'h', 'i'}},
    {5, {'j', 'k', 'l'}},
    {6, {'m', 'n', 'o'}},
    {7, {'p', 'q', 'r', 's'}},
    {8, {'t', 'u', 'v'}},
    {9, {'w', 'x', 'y', 'z'}}
};

// Function to generate letter combinations for a given number
vector<string> letterCombinations(string digits) {
    vector<string> result;
    if (digits.empty()) return result;

    result.push_back(""); // Seed for the combination

    for (char digit : digits) {
        int num = digit - '0';
        if (num < 0 || num > 9) continue;

        const vector<char>& chars = digitsMapping[num];
        vector<string> temp;
        for (char c : chars) {
            for (string& s : result) {
                temp.push_back(s + c);
            }
        }
        result = temp;
    }

    return result;
}

int main() {
    vector<string> inputs;
    int numPhones;

    cout << "Enter the number of phone numbers: ";
    cin >> numPhones;

    for (int i = 0; i < numPhones; ++i) {
        string phoneNumber;
        cout << "Enter phone number " << i + 1 << ": ";
        cin >> phoneNumber;
        inputs.push_back(phoneNumber);
    }

    for (int i = 0; i < inputs.size(); ++i) {
        vector<string> combinations = letterCombinations(inputs[i]);
        cout << i + 1 << ". All letter combinations for '" << inputs[i] << "': [";
        for (int j = 0; j < combinations.size(); ++j) {
            if (j > 0) cout << ", ";
            cout << "\"" << combinations[j] << "\"";
        }
        cout << "]" << endl;
        cout << "--------------------------------------------------" << endl;
    }

    return 0;
}
