class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        char1 = { }
        char2 = { }
        for i in range(len(s)):
            a = s[i]
            b = t[i]
            if a in char1 and char1[a]!=b:
                return False
            if b in char2 and char2[b]!=a:
                return False
            char1[a] = b 
            char2[b] = a
        return True