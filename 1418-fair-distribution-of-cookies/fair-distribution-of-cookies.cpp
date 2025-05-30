class Solution {
public:
    int res = INT_MAX; 
    
    void backtrack(vector<int>& cookies, int k, vector<int>& dist, int index) {
        if (index == cookies.size()) {
            
            int maxVal = *max_element(dist.begin(), dist.end());
            res = min(res, maxVal);
            return;
        }
        
        
        for (int i = 0; i < k; ++i) {
            dist[i] += cookies[index];
            
            
            if (dist[i] < res) {
                backtrack(cookies, k, dist, index + 1);
            }
            
            dist[i] -= cookies[index]; 
            
            
            if (dist[i] == 0) break;
        }
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> dist(k, 0); 
        backtrack(cookies, k, dist, 0);
        return res;
    }
};
