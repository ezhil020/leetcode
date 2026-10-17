class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max_sum = nums[0]
        curr_sum = nums[0]
        for n in nums[1:]:
            if curr_sum + n < n:
                curr_sum = n
            else:
                curr_sum += n
            max_sum = max(curr_sum,max_sum)
        return max_sum

            

        