class Solution(object):
    def findErrorNums(self,nums):
        n = len(nums)
        
        expected_sum = n * (n + 1) // 2
        actual_sum = sum(nums)
        
        unique_sum = sum(set(nums))
        
        duplicate = actual_sum - unique_sum
        missing = expected_sum - unique_sum
        
        return [duplicate, missing]



                
        