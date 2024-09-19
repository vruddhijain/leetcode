class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sa) {
        int n = st.size();
        stack<int> s;
        queue<int> q;
        int count = 0;
        int c0 = 0, c1 = 0;
        int c2 = 0, c3 = 0;
        
        for (int i = n - 1; i >= 0; i--) {
            s.push(sa[i]);
            if (sa[i] == 1) c3++;
            else c2++;
        }
        
        for (int i = 0; i < n; i++) {
            q.push(st[i]);
            if (st[i] == 1) c1++;
            else c0++;
        }
        
        int attempts = 0; // track number of rotations without success
        while (!s.empty() && attempts < q.size()) {
            if (s.top() == q.front()) {
                s.pop();
                q.pop();
                attempts = 0; // reset attempts after a match
            } else {
                int student = q.front();
                q.pop();
                q.push(student);
                attempts++; // increment for unsuccessful attempt
            }
        }
        
     
        return q.size();
    }
};
