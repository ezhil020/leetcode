class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        count = 0
        maxc = 0
        for n in nums:
            if n == 1 :
                count+=1
            else :
                count = 0
            maxc = max(count,maxc)

        return maxc
                
        