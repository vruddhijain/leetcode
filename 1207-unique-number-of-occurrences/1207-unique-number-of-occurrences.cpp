class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> x;
        
        for(int i=0; i<arr.size(); i++){
            x[arr[i]]++ ;
        }
        
        for(const auto &z : x){
            int a = z.second;
            for(const auto &y : x){
                if(z.first !=y.first && y.second == a){
                    return false;
                }
            }
        }
        
        
       return true; 
    }
};

// #include <vector>
// #include <unordered_map>

// class Solution {
// public:
//     bool uniqueOccurrences(std::vector<int>& arr) {
//         std::unordered_map<int, int> x;
        
//         // Count occurrences of each element in arr
//         for(int i = 0; i < arr.size(); i++) {
//             x[arr[i]]++;
//         }
        
//         // Check for unique occurrences
//         for(const auto& pair : x) {
//             int a = pair.second; // Frequency of the element
//             for(const auto& otherPair : x) {
//                 if(pair.first != otherPair.first && otherPair.second == a) {
//                     return false;
//                 }
//             }
//         }
        
//         return true;
//     }
// };
