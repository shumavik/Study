def arifm(a,b,operation):
    if operation == "+":
            print(a+b)
    elif operation == "-":
            print(a-b)
    elif operation == "*":
            print(a*b)
    elif operation == "/":
            print(a/b)


x = int(input("Enter first number:"))
y = int(input("Enter second number:"))
arifm(x, y, input("Enter operation:+,-,*,/\n"))
