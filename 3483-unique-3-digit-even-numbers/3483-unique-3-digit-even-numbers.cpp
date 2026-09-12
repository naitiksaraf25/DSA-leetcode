class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for (int d : digits) {
            freq[d]++;
        }

        int count = 0;
        for (int d1 = 1; d1 <= 9; d1++) {
            for (int d2 = 0; d2 <= 9; d2++) {
                for (int d3 = 0; d3 <= 8; d3 += 2) {

                    freq[d1]--;
                    freq[d2]--;
                    freq[d3]--;

                    if (freq[d1] >= 0 && freq[d2] >= 0 && freq[d3] >= 0) {
                        count++;
                    }

                    freq[d1]++;
                    freq[d2]++;
                    freq[d3]++;
                }
            }
        }

        return count;
    }
};