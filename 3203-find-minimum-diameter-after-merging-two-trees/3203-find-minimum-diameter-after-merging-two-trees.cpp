class Solution {
public:
    pair<int, int> findDeep(vector<vector<int>> &edges, int root) {
        int n = edges.size();
        queue<pair<int, int>> q;
        q.push({0, root});
        pair<int, int> res = {0, root};
        vector<bool> vis(n, false);
        while (!q.empty()) {
            auto [step, index] = q.front();
            q.pop();
            if (vis[index]) continue;
            vis[index] = true;
            res = {step, index};
            for (auto &x: edges[index]) {
                if (x == index) continue;
                q.push({step + 1, x});
            }
        }
        return res;
    }

    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int m = edges1.size() + 1;
        int n = edges2.size() + 1;
        vector<vector<int>> g1(m), g2(n);
        for (auto &x: edges1) {
            g1[x[0]].push_back(x[1]);
            g1[x[1]].push_back(x[0]);
        }
        for (auto &x: edges2) {
            g2[x[0]].push_back(x[1]);
            g2[x[1]].push_back(x[0]);
        }
        pair<int, int> left1 = findDeep(g1, 0);
        pair<int, int> right1 = findDeep(g1, left1.second);
        // cout << (left1.second) << " " << (right1.second) << " " << (right1.first) << endl;
        pair<int, int> left2 = findDeep(g2, 0);
        pair<int, int> right2 = findDeep(g2, left2.second);
        // cout << (left2.second) << " " << (right2.second) << " " << (right2.first) << endl;
        int ans = max(right1.first, right2.first);
        ans = max(ans, (right1.first + 1) / 2 + (right2.first + 1) / 2 + 1);
        return ans;
    }
};