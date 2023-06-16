#include<stdio.h>
 
void count_digit(int n);
void count_odd(int n);
void sum_digit(int n);
void rev_num(int n);
void word_eq(int n);

int main()
{
    int n,choice;
    scanf("%d",&n);
    while(1)
    {
        scanf("%d",&choice);
        
        if(choice==1)
        {
            count_digit(n);
        }
        
        else if(choice==2)
        {
            count_odd(n);
        }
        
        else if(choice==3)
        {
            sum_digit(n);
        }
        
        else if(choice==4)
        {
            rev_num(n);
        }
        
        else if(choice==5)
        {
            word_eq(n);
        }
        
        else if(choice==0)
        {
            printf("Thank you");
            break;
        }
    }
}

void count_digit(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d\n",count);
}

void count_odd(int n)
{
    int num;
    int count=0;
    while(n != 0)
    {
        num = n % 10;
        if(num % 2 != 0){
            count++;
        }
       n /= 10;
    }
    printf("%d\n",count);
}

void sum_digit(int n)
{
    int sum=0,num;
    while(n>0)
    {
        num=n;
        n=n%10;
        sum+=n;
        n=num/10;
    }
    printf("%d\n",sum);
}

void rev_num(int n)
{
    int num;
    while(n>0)
    {
        num=n;
        n=n%10;
        printf("%d",n);
        n=num/10;
    }
}

void word_eq(int n)
{
    int num=0;
    while(n!=0)
    {
        num=(num*10)+(n%10);
        n=n/10;
    }
    
    while(num!=0)
    {
        
        switch(num%10)
        {
            case 0:
            printf("Zero ");

            break;

        case 1:
            printf("One ");

            break;

        case 2:
            printf("Two ");

            break;

        case 3:
            printf("Three ");

            break;

        case 4:
            printf("Four ");

            break;

        case 5:
            printf("Five ");

            break;

        case 6:
            printf("Six ");

            break;

        case 7:
            printf("Seven ");

            break;

        case 8:
            printf("Eight ");

            break;

        case 9:
            printf("Nine ");

            break;
        }
        num=num/10;

}
