#include<stdio.h>
#include<stdlib.h>

void print(int* a,int l);
int main(){
    int n,te=0;
    int* a;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    // int a[]={5,1,4,2,8,9,3,10};
    a = (int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        a[i]=rand();
    }
    // int l = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                te=a[j];
                a[j]=a[j+1];
                a[j+1]=te;
            }
        }
    }
    print(a,n);

    return 0;
}
void print(int* a,int l){
    for(int i=0;i<l;++i){
        printf("%d ",a[i]);
    }
    printf("\n");
}