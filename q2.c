#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[100];
    int w,v,c,s,sy;
    w=v=c=s=sy=0;
    fgets(a,sizeof(a),stdin);
    for (int i = 0; a[i]!='\0'; i++){
        a[i]=tolower(a[i]);
        if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')){
            ++v;
        }
        else if((a[i]>='a')&&(a[i]<='z')){
            ++c;
        }
        else if(a[i]==' '){
            ++s;
        }
        else{
            ++sy;
        }

    }
    printf("Words = %d\n",s+1);
    printf("Vowels = %d\n",v);
    printf("Consonants = %d\n",c);
    printf("Space = %d\n",s);
    printf("Symbols = %d\n",sy-1);
    return 0;
}