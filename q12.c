#include<stdio.h>
int main()
{
    int upper,lower,digits,space,symbols,s[5];
    char a[100];
    upper=lower=digits=space=symbols=0;
    fgets(a,sizeof(a),stdin);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>='A'&&a[i]<='Z'){
            ++upper;
        }
        else if(a[i]>='a'&&a[i]<='z'){
            ++lower;
        }
        else if(a[i]>='0'&&a[i]<='9'){
            ++digits;
        }
        else if(a[i]==' '){
            ++space;
        }
        else{
            ++symbols;
        }
    }
    s[0]=upper;
    s[1]=lower;
    s[2]=digits;
    s[3]=space;
    s[4]=symbols;
    for(int i=0; i<5;++i){
        printf("%d ", s[i]);
    }
    return 0;
}