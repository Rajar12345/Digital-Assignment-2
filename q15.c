#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void func(char b[]);
int main()
{
    char a[100],b[100];
    int c=0;
    fgets(a,sizeof(a),stdin);
    for(int i=0;a[i]>' ';i++){
        if(a[i]==a[0]){
            a[i]=toupper(a[i]);
        }
        else{
            a[i]=tolower(a[i]);
        }
        ++c;
    }
    c+=1;
    for(int j=c;a[j]!='\0';j++){
        a[j]=toupper(a[j]);
    }
    for(int i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }
    func(b);
    return 0;
}
void func(char b[]){
    char c[100];
    int k;
    c[100]=b[100];
    printf(" %s \n",b);
    printf("%d",strlen(b));
    k=strlen(b);
    if(k<20){
        printf("\n%d",k);
    }
    else{
        printf("\n%d",100);
    }
}