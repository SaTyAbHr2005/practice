class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        def dfs():
            token = tokens.pop()
            if token not in "+-*/":
                return int(token)
            
            left = dfs()
            right = dfs()

            if token == "+":
                return left + right
            elif token == "-":
                return left - right
            elif token == "*":
                return left * right
            elif token == "/":
                if right == 0:
                    raise ZeroDivisionError("Division by zero not allowed.")
                return int(left / right)
        
        return dfs()