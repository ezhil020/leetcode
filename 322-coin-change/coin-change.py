class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        dp = {}
        dp[0] = 0
        def value(amount):
            res = float('inf')
            if amount == 0 :
                return dp[0]
            if amount in dp:
                return dp[amount]
            for coin in coins:
                if amount >= coin:
                    res = min(res,value(amount - coin)+1)
                dp[amount] = res
            return dp[amount]
        result  = value(amount)
        return result if result != float('inf') else -1
                


        