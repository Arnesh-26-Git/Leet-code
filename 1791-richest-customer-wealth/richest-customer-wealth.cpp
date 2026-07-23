class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        for(const auto cus:accounts){
            int currentWealth=0;
            for(int bank:cus){
                currentWealth+=bank;
            }
            maxWealth=max(maxWealth,currentWealth);
        }
        return maxWealth;
    }
};