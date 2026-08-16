class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans = -1;
        int dist = 0;
        int predis = INT_MAX;
        for (int i = 0; i < drones.size(); i++) {

            int x = drones[i][0];
            int y = drones[i][1];
            int range = drones[i][2];
            dist = abs(target[0] - x) + abs(target[1] - y);
            if (dist <= range) {
                if(dist<predis)
                {
                    ans = i;
                    predis = dist;
                }
            }
        }
        return ans;
    }
};