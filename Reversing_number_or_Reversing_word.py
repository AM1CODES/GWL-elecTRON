def Reversing_number(n):
    Reverse_number = 0
    while n != 0:
        i = n % 10
        Reverse_number = Reverse_number * 10 + i
        n = n // 10
    return(Reverse_number)
def Reversing_string(x):
    i=len(x)
    a=0
    Reverse_string=""
    while a < i :
        Reverse_string=x[a] + Reverse_string
        a=a+1
    return(Reverse_string)
y=input("Do you want to enter a number or string :")
if y== "number" :
    n = int(input("Enter a number :"))
    A = Reversing_number(n)
    print("The reversed number is {}".format(A))
if y== "string" :
    x = input("Enter a string :")
    a = Reversing_string(x)
    print("The reverse string is {}".format(a))
