class Solution {
public:

    
    int minSteps(string s, string t) {
     
//     map<char, int> result1 = countLetters(s);
//     map<char, int> result2 = countLetters(t);
//     int count = 0;   
// //     for (const auto& pair1 : result1) {
// //        for (const auto& pair2 : result2) {
// //         if(pair1.first == pair2.first){
// //             count += pair1.second - pair2.second;
// //         } 
// //            else{
// //                count += pair1.second; 
// //            }
       
// //     } 
// //     }
//          for (const auto& pair : result1) {
//             char letter = pair.first;
//             int countInS = pair.second;
//             int countInT = result2[letter]; // Access count directly from result2

//             count += std::abs(countInS - countInT); // Calculate the absolute difference
//         }
//     return count; 
        
        
    int cou[26] = {0};
        for(int i=0; i<s.size(); i++){
            cou[t[i]- 'a']++;
            cou[s[i]- 'a']--;
        }
        
        int ans =0;
        for(int i=0; i<26; i++){
            ans += max(0, cou[i]);
        }
        return ans;
    
    }
};


