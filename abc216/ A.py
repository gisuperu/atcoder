x, y = map(int, str(input()).split("."))

if y <= 2 :
    print(str(x) + "-")
elif y <= 6:
    print(x)
else:
    print(str(x) + "+")