#include<stdio.h>
int prime(int n);
int arms(int n);
int perfect(int n);
int main()
{
    int n,p,a,b;
    printf("Enter no. : ");
    scanf(" %d", &n);
    p=prime(n);
    a=arms(n);
    b=perfect(n);
    if(p==1){
        printf("%d is a prime no.\n",n);
    }
    else{
        printf("%d is not a prime no.\n",n);
    }
    if(a==1){
        printf("%d is a armstrong no.\n",n);
    }
    else{
        printf("%d is not a armstrong no.\n",n);
    }
    if(b==1){
        printf("%d is a perfect no.\n",n);
    }
    else{
        printf("%d is not a perfect no.\n",n);
    }
    return 0;
}
int prime(int n){
    int a=0;
    for(int i=2;i<n;++i){
        if(n%i==0){
            a+=1;
        }
    }
    if(a==0){
        return 1;
    }
    else{
        return 0;
    }
}
int arms(int n){
    int a,g,sum=0,pow=0,r,k;
    //scanf("%d",&n);
    a=n;
    while(a!=0){
        r=a%10;
        pow+=1;
        a=a/10;
    }
    printf("%d",pow);
    g=n;
    printf("%d",g);
    while(g!=0){
        r=g%10;
        k=1;
        for(int i=0;i<pow;++i){
            
            k=k*r;
        }
        sum=sum+k;
        printf("%d\n",k);
        printf("%d\n",sum);
        g/=10;
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}
int perfect(int n){
    int s,sum=0;
    s=n;
    for(int i=1;i<s;++i){
        if(s%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
}