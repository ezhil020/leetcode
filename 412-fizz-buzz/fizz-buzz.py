class Solution(object):
    def fizzBuzz(self, n):
        answer = [] 
        for i in range(1,n+1):
            temp = ''
            if i % 3 == 0:
                temp = 'Fizz'
                if i % 5 == 0:
                    temp += "Buzz"
            elif i % 5 == 0:
                temp = 'Buzz'
            else:
                temp = str(i)
            answer.append(temp)
        return answer
        

        