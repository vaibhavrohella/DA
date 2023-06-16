/*Write a program to take input of a subject mark. find the garde that the student belongs to using switch case.
if the student has got marks above 90, then his grade is O.
If he has got marks from 81 to 90, then his grade is A
If he has got marks 71 to 80, then his grade is B
If he has got marks from 61 to 70, then his grade is C
Below 61 is all D.
Print the grade for that student's mark.
Print "Error. Not in scope." if its not coming in range*/

#include<stdio.h>
int main()
{
    int a;
    
    while (1)
    {
        scanf("%d",&a);

        if(a<101)
        {
            switch(a/10)
            {
                case 10:
                case 9:
                printf("O\n");
                break;

                case 8:
                printf("A\n");
                break;

                case 7:
                printf("B\n");
                break;

                case 6:
                printf("C\n");
                break;

                default:
                printf("D\n");
                break;
            }
        }
        else
        {
            printf("");
        }
    }
    return 0;
}