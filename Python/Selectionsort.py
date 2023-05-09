def selectionsort(arr,l):
    for i in range(0,l):
        m=i
        for j in range(i+1,l):
            if arr[j]<arr[m]:
                m=j
        if(m!=i):
            arr[m],arr[i]=arr[i],arr[m]
    
if __name__ == "__main__":
    arr=[1,3,2,4,5,6,9,6,8,10]
    l=len(arr)
    selectionsort(arr,l)
    print(arr)
