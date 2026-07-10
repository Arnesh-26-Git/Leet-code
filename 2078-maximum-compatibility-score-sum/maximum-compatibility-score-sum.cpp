class Solution {
public:
    int ans = 0;

    void dfs(vector<vector<int>>& s, vector<vector<int>>& m, vector<int>& vis, int i, int score) {
        if (i == s.size()) {
            ans = max(ans, score);
            return;
        }

        for (int j = 0; j < m.size(); j++) {
            if (!vis[j]) {
                vis[j] = 1;
                int cur = 0;
                for (int k = 0; k < s[0].size(); k++)
                    if (s[i][k] == m[j][k]) cur++;
                dfs(s, m, vis, i + 1, score + cur);
                vis[j] = 0;
            }
        }
    }

    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        vector<int> vis(mentors.size(), 0);
        dfs(students, mentors, vis, 0, 0);
        return ans;
    }
};