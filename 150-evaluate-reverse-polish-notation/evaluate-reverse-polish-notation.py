class Solution:
    def calculate(self,num1,num2,operand):
        if operand == '+':
            return num1 + num2
        elif operand == '-':
            return num1-num2
        elif operand == '*':
            return num1*num2
        else:
            return int(num1 / num2)
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        
        for token in tokens:
            if token in "+-*/":
                num1 = stack.pop()
                num2 = stack.pop()
                stack.append(self.calculate(num2,num1,token))
            else:
                stack.append(int(token))
        return stack.pop()                