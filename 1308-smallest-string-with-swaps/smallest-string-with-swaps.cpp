class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n = s.size();
        vector<vector<int>> graph(n);
        for (auto& p : pairs) {
            graph[p[0]].push_back(p[1]);
            graph[p[1]].push_back(p[0]);
        }
        
        vector<bool> visited(n, false);
        function<void(int, vector<int>&)> dfs = [&](int node, vector<int>& component) {
            visited[node] = true;
            component.push_back(node);
            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    dfs(neighbor, component);
                }
            }
        };

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                vector<int> component;
                dfs(i, component);
                
                string chars = "";
                for (int idx : component)
                    chars += s[idx];
                
                sort(component.begin(), component.end());
                sort(chars.begin(), chars.end());
                for (int j = 0; j < component.size(); ++j) {
                    s[component[j]] = chars[j];
                }
            }
        }

        return s;
    }
};
