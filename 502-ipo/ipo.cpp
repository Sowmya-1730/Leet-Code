class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
    vector<pair<int, int>> projects;
    for (int i = 0; i < profits.size(); i++) {
        projects.push_back({capital[i], profits[i]});
    }
    sort(projects.begin(), projects.end());
    priority_queue<int> maxProfitHeap;
    int currentProject = 0;
    for (int i = 0; i < k; i++) {
        while (currentProject < projects.size() && projects[currentProject].first <= w) {
            maxProfitHeap.push(projects[currentProject].second);
            currentProject++;
        }
        if (maxProfitHeap.empty()) {
            break;
        }
        w += maxProfitHeap.top();
        maxProfitHeap.pop();
    }
    
    return w;
}
    };