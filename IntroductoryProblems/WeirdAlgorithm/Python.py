n=int(input())  # taking input
print(n,end=" ") # end=" " is sparator ,by default end="\n"
while(n!=1):
    if(n&1 == 1):
        n=n*3 + 1
    else:
        n=n//2
    print(n,end=" ")