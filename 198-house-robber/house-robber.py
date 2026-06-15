class Solution:
    def rob(self, nums: List[int]) -> int:
        size = len(nums)
        temp = 0
        dp = {}
        def money(n):
            if n == size - 1:
                return nums[n]
            elif n >= size:
                return 0
            elif n in dp :
                return dp[n]
            else:
                max_value = 0
                for i in range(n+2,size):
                    max_value = max(max_value,money(i))
                dp[n] = nums[n] + max_value
            return dp[n]
        max_money = 0
        for i in range(size):
            max_money = max(max_money,money(i))
        return max_money



        

            