
#include <stdio.h>

int main() {
    int a[7],b[7],d[7],h[7];
    printf("chennai temp bw 28 to 33 C\n");
    for(int i=0;i<7;i++){
        printf("Enter the temp of %d day : ",i+1);
        scanf(" %d",&a[i]);
        d[i]=a[i]-8;
        h[i]=a[i]+5;
        b[i]=h[i]-d[i];
    }
    printf("gangtok temp of a week ::\n");
    for(int i=0;i<7;i++){
        printf("temp of %d day : ",i+1);
        printf("%d\n",b[i]);
    }
    

    return 0;
}