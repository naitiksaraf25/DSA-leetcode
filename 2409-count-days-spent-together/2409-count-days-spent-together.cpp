class Solution {
public:
    int solve(string s){
        int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int mon = stoi(s.substr(0, 2));
        int day = stoi(s.substr(3, 2));
        for(int i=0;i<mon-1;i++){
            day+=days[i];
        }
        return day;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int start = max(solve(arriveAlice), solve(arriveBob));
        int end = min(solve(leaveAlice), solve(leaveBob));

        return max(0, end-start+1);
    }
};