class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;
        for (int i = 0; i < fruits.size(); i++) {
            int x = fruits[i];
            for (int j = 0; j < baskets.size(); j++) {
                if (x <= baskets[j]) {
                    ans++;
                    baskets[j] = -1;
                    break;
                }
            }
        }
        return (fruits.size()-ans);
    }
};