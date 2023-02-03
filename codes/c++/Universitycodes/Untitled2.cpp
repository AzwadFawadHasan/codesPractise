#include<stdio.h>

void swap(int a[], int b, int c) {
    int temp = a[b];
    a[b] = a[c];
    a[c] = temp;
}

void bubble1 (int a[], int N){
    int i;
    for(i=0;i<N-1;i++){
        if(a[i]>a[i+1]){
            swap(a,i,i+1);
        }
    }
}


int  main() {
    int N = 11;
    int a[12]={5,3,12,4,25,10,14,35,2,8,13};

    bubble1 (a,N);

    int i;
    for(i = 0; i < N; i++){
        printf("%d\n",a[i]);
    }
}


