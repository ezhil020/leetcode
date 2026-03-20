class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        result = []
        i = 1
        j = 0
        while i <= n and j < len(target):
            if target[j] > i:
                result.append("Push")
                result.append("Pop")

            elif target[j] == i:
                result.append("Push")
                j += 1
            i += 1
        return result
            

            

        