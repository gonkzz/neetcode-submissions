class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int cnt = 0, res = 0;
        for (int n: nums) {
            if (n == 0) {
                res = Math.max(cnt, res);
                cnt = 0;
            } else cnt++;
        }
        return Math.max(res, cnt);
    }
}