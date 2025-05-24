class Solution(object):
    def findWordsContaining(self, words, x):
        result = []
        for i,w in enumerate(words) :
            if x in w :
                result.append(i)
        return result


        