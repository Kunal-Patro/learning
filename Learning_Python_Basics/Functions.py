def my_fun(n):
    if(n>0):
        result = 1 + my_fun(n-1)
        print(result)
    else:
        result = 0
    return result
a = int(input("Enter any number:"))
my_fun(a)