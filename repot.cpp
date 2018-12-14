#include<stdio.h>
float TU(float n)
{
    float a;
    a=n*0.0324;
    return a;
}
float TE(float n)
{
    float a;
    a=n*0.0285;
    return a;
}
float UT(float n)
{
    float a;
    a=n*30.805;
    return a;
}
float UE(float n)
{
    float a;
    a=n*0.88;
    return a;
}
float ET(float n)
{
    float a;
    a=n*34.83;
    return a;
}
float EU(float n)
{
    float a;
    a=n*1.14;
    return a;
}
int main()
{
    int choice;
    int choice2;
    float n;
    while(1)
    {
        printf("1.TWD\n");
        printf("2.USD\n");
        printf("3.EUR\n");
        printf("4.EXIT\n");
        printf("=>");
        scanf("%d %d",&choice,&choice2);
        if(choice==4)
            break;
        switch(choice)
        {
        case 1:
            if(choice2==4)
                break;
            switch(choice2)
            {
            case 1:
                break;
            case 2:
                printf("Enter n:");
                scanf("%f",&n);
                printf("%.2f TWD = %.2f USD\n",n,TU(n));
                break;
            case 3:
                printf("Enter n:");
                scanf("%f",&n);
                printf("%.2f TWD = %.2f EUR\n",n,TE(n));
                break;
            }
            break;
        case 2:
            if(choice2==4)
                break;
            switch(choice2)
            {
            case 1:
                printf("Enter n:");
                scanf("%f",&n);
                printf("%.2f USD = %.2f TWD\n",n,UT(n));
                break;
            case 2:
                break;
            case 3:
                printf("Enter n:");
                scanf("%f",&n);
                printf("%.2f USD = %.2f EUR\n",n,UE(n));
                break;
            }
            break;
        case 3:
            if(choice2==4)
                break;
            switch(choice2)
            {
            case 1:
                printf("Enter n:");
                scanf("%f",&n);
                printf("%.2f EUR = %.2f TWD\n",n,ET(n));
                break;
            case 2:
                printf("Enter n:");
                scanf("%f",&n);
                printf("%.2f EUR = %.2f USD\n",n,EU(n));
                break;
            case 3:
                break;
            }
            break;
        }
    }
}
