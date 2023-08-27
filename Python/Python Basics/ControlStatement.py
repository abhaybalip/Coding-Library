# python - control statement

# el-if ladder
x = int(input("Enter a Number"))
if(x>0)     : {print(x," >> 0")}
elif (x<0)  : {print(x," << 0")}
else        : {print(x," == 0")}

# while loop - Executes till condition is satisfied
print("Table of ",x)
i = 0
while i<=10 : 
    print(i," * ",x," = ",x*i,end=' ')
    i = i+1

# for loop - (iterrator : iterable)

ans = 1
i = 1
print("Factorial of ",x)
for i in range(1,x+1) :
    ans = ans * i
    i = i + 1
print(" is ", ans)