// class Solution {
// public:
//     bool areAnagrams(const std::string& str1, const std::string& str2) {
//     // Check if the lengths of the two strings are the same
//     if (str1.length() != str2.length()) {
//         return false;
//     }

//     // Sort the characters in both strings
//     std::string sortedStr1 = str1;
//     std::string sortedStr2 = str2;
//     std::sort(sortedStr1.begin(), sortedStr1.end());
//     std::sort(sortedStr2.begin(), sortedStr2.end());

//     // Compare the sorted strings
//     return sortedStr1 == sortedStr2;
// }
    
    
//     std::unordered_set<char> extractUniqueLetters(const std::string& word) {
//     std::unordered_set<char> uniqueLetters;

//     for (char ch : word) {
//         // Add each unique letter to the set
//         if (std::isalpha(ch)) { // Only consider alphabetic characters
//             uniqueLetters.insert(std::tolower(ch)); // Convert to lowercase to consider case-insensitivity
//         }
//     }

//     return uniqueLetters;
// }

    
//     bool closeStrings(string word1, string word2) {
//         if(word1.size()!= word2.size()){
//             return false;
//         }
        
//         if(areAnagrams(word1, word2)){
//             return true;
//         }
//         if(extractUniqueLetters(word1) ==  extractUniqueLetters(word2)){
//             return true;
//         }
//        return false; 
//     }
// };


class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        std::vector<int> freq1(26, 0);
        std::vector<int> freq2(26, 0);

        for (char ch : word1) {
            freq1[ch - 'a']++;
        }

        for (char ch : word2) {
            freq2[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if ((freq1[i] == 0 && freq2[i] != 0) || (freq1[i] != 0 && freq2[i] == 0)) {
                return false;
            }
        }

        std::sort(freq1.begin(), freq1.end());
        std::sort(freq2.begin(), freq2.end());

        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }

        return true;
    }
};