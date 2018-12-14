#include<stdio.h>
void TU(int n)
{
    float a;
    a=n*0.0324;
    printf("%d TWD = %.2f USD\n",n,a);
}
void TE(int n)
{
    float a;
    a=n*0.0285;
    printf("%d TWD = %.2f EUR\n",n,a);
}
int main()
{
    int choice;
    int choice2;
    int n;
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
                scanf("%d",&n);
                TU(n);
                break;
            case 3:
                printf("Enter n:");
                scanf("%d",&n);
                TE(n);
                break;
            }
        case 2:
            if(choice2==4)
                break;
            switch(choice2)
            {
            case 1:
                printf("Enter n:");
                scanf("%d",&n);
                break;
            case 2:
                printf("Enter n:");
                scanf("%d",&n);
                break;
            }
        }
    }
}
