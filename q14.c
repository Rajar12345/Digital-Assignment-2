#include<stdio.h>
int main()
{
    char type;
    float price_of_the_car,extra_fitting_price_of_the_car,discount,total,gst,net;
    printf("Enterk for H - Hatchback, S - Sedan , V -SUV , M - MUV type: ");
    //fgets(type,sizeof(type),stdin);
    scanf("%c",&type);
    scanf("%f",&price_of_the_car);
    scanf("%f",&extra_fitting_price_of_the_car);
    total=price_of_the_car+extra_fitting_price_of_the_car;
    if(type=='H'){
        discount=total*0.03;
    }
    else if(type=='S'){
        discount=total*0.05;
    }
    else if(type=='V'){
        discount=total*0.1;
    }
    else if(type=='M'){
        discount=total*0.15;
    }
    else{
        printf("Invalid Type\n");
    }
    gst=(total-discount)*0.12;
    net=total-discount+gst;
    printf("Net amount %c : %f",type,net);
    return 0;
}