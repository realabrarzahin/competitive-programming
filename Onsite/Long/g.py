def an(x: int, n: int):
    if x == n:
        return "sin(" + str(x) + ")"

    if x % 2:
        sign = "-"
    else:
        sign = "+"

    return "sin(" + str(x) + sign + an(x + 1, n) + ")"


def sn(x: int, n: int):
    if n == 1:
        return "sin(1)+" + str(x)
    return "(" + sn(x + 1, n - 1) + ")" + an(1, n) + "+" + str(x)


n: int = int(input())
y = sn(1, n)

print(y)
