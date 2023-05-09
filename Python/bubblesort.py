import random as r

def bubblesort(arr,l):
    for i in range(0,l-1):
        for j in range(0,l-i-1):
            if arr[j]>arr[j+1]:
                c=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=c
                

arr=[]
n=int(input("Enter Number of Elements: "))
for i in range(n):
    arr.append(r.randrange(1e10))
l=len(arr)
bubblesort(arr,l)
# print(arr)

