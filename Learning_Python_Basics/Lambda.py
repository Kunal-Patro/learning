 # Anonymous function takes as many arguments and had one expression
def Lamb():
    return lambda a,b,c : (-b + ((b ** 2) - 4 * (a * c)) ** (1/2)) / (2 * a)
Quad = Lamb()
a = int(input("Enter a:"))
b = int(input("Enter b:"))
c = int(input("Enter c:"))
print(Quad(a,b,c))