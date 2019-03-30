a = int(input("Enter no of rows:"))
myList = []
for i in range(a+1):
    myList.append("*"*i)
    print("",i)
print("\n".join(myList))