from sys import stdin

tokens = stdin.readline().split()

stack = []
for i in range(len(tokens)):
    token = tokens[i]
    if token in ["+", "-", "*", "/"]:
        op2 = stack.pop()
        op1 = stack.pop()
        result = "(" + op1 + token + op2 + ")"
        stack.append(result)
    else:
        stack.append(token)
print(stack[0])
