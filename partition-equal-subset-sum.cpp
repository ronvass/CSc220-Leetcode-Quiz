class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total = 0;
        for (int n : nums)
            total += n;
        
        // Odd total means it cannot evenly split
        if (total % 2 != 0)
            return false;
        
        int target = total / 2;

        vector<bool> MakesSum(target + 1, false);
        MakesSum[0] = true; // Sum can always be 0 if nothing is picked

        for (int num : nums) {
            // Traverse backwards to not use the same element twice
            for (int j = target; j >= num; j--) {
                MakesSum[j] = MakesSum[j] || MakesSum[j - num];
            }
        }

        return MakesSum[target];
    }
};