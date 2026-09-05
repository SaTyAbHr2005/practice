class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        def dfs():
            token = tokens.pop()
            if token not in "+-*/":
                return int(token)
            
            right = dfs()
            left = dfs()

            if token == "+":
                return left + right
            elif token == "-":
                return left - right
            elif token == "*":
                return left * right
            elif token == "/":
                if right == 0:
                    print("Warning: Division by zero encountered. Returning 0.")
                    return 0
                return int(left / right)
        
        return dfs()