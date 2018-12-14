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
    int choice3;
    int money;
    printf("***********************\n");
    printf("*     1.幣值轉換器    *\n");
    printf("*     2.紀錄表        *\n");
    printf("*     3.離開          *\n");
    printf("***********************\n");
    while(1)
    {
        printf("請輸入選項 :");
        scanf("%d",&choice);
        if(choice==3)
            break;
        switch(choice)
        {
        case 1:
            printf("1.台幣    2.美金    3.歐元\n\n\n");
            printf("請輸入欲轉換幣種 :___->____ : ");
            scanf( "%d %d",&choice2,&choice3);
            switch(choice2)
            {
            case 1:
                switch(choice3)
                {
                case 1:
                    printf("請輸入欲轉換額度: ");
                    scanf("%d",&money);
                    printf("台幣轉台幣金額是: %d\n",money);
                    printf("***********************\n");
                    break;
                case 2:
                    printf("請輸入欲轉換額度: ");
                    scanf("%d",&money);
                    printf("台幣轉美金金額是: %.2f\n",TU(money));
                    printf("***********************\n");
                    break;
                case 3:
                    printf("請輸入欲轉換額度: ");
                    scanf("%d",&money);
                    printf("台幣轉歐元金額是: %.2f\n",TE(money));
                    printf("***********************\n");
                    break;
                }
                break;
            case 2:
                switch(choice3)
                {
                case 1:
                    printf("請輸入欲轉換額度: ");
                    scanf("%d",&money);
                    printf("美金轉台幣金額是: %.2f\n",UT(money));
                    printf("***********************\n");
                    break;
                case 2:
                    printf("請輸入欲轉換額度: ");
                    scanf("%d",&money);
                    printf("美金轉美金金額是: %d\n",money);
                    printf("***********************\n");
                    break;
                case 3:
                    printf("請輸入欲轉換額度: ");
                    scanf("%d",&money);
                    printf("美金轉歐元金額是: %.2f\n",UE(money));
                    printf("***********************\n");
                    break;
                }
                break;
            case 3:
                switch(choice3)
                {
                case 1:
                    printf("請輸入欲轉換額度: ");
                    scanf("%d",&money);
                    printf("歐元轉台幣金額是: %.2f\n",ET(money));
                    printf("***********************\n");
                    break;
                case 2:
                    printf("請輸入欲轉換額度: ");
                    scanf("%d",&money);
                    printf("歐元轉美金金額是: %.2f\n",EU(money));
                    printf("***********************\n");
                    break;
                case 3:
                    printf("請輸入欲轉換額度: ");
                    scanf("%d",&money);
                    printf("歐元轉歐元金額是: %d\n",money);
                    printf("***********************\n");
                    break;
                }
                break;
            }
                case 2:
                    break;
        }
    }
}
