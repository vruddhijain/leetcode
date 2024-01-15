// class Solution {
// public:
//     vector<vector<int>> findWinners(vector<vector<int>>& matches) {
//     int row = matches.size();
//     int col = 2;
//     vector <int> win;
//     vector <int> lost;
//     for(int i=0; i<row; i++){
        
            
//             win.push_back(matches[i][0]);
//             lost.push_back(matches[i][1]);
            
        
//     }
//     vector<vector<int>> res;
//     for(int i=0; i< row; i++){
//         for(int j=0; j<row; j++){
//             if(win[i]!=lost[j]){
//                 res[0].push_back(win[i]);
//             }
//             res[1].push_back(win[i]);
//         }
//     }
    
//      return res;   
//     }
// };

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>lost_map;
        for(int i=0;i<matches.size();i++)
        {
            int lose=matches[i][1];
        lost_map[lose]++;
        }
        vector<int>notLost;
        vector<int>onceLost;
        for(int i=0;i<matches.size();i++)
        {
           int winner=matches[i][0];
           int looser=matches[i][1];
           if(lost_map.find(winner)==lost_map.end()) 
           {
               notLost.push_back(winner);
               lost_map[winner]=2;

           }
           if(lost_map[looser]==1)
           onceLost.push_back(looser);

        }
        sort(notLost.begin(),notLost.end());    
        sort(onceLost.begin(),onceLost.end());

        return {notLost,onceLost};



        
    }
};