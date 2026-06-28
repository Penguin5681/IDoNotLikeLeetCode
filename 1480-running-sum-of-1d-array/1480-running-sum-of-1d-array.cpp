class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> run;
        int sum = 0;
        for (auto it : nums) {
           sum += it;
           run.push_back(sum); 
        }

        return run;
    }
};