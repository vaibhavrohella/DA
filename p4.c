/*Given an integer x, return true if x is a 
palindrome
, and false otherwise.*/
#include<stdio.h>
#include<string.h>

 int isPalindrome(int x){
    float reversed=0;
    int num=x;
    /*if(x==0){
        return 1;*/
    //}
    while(num>0 && num!=0){

        reversed = reversed*10 + num%10;
        num = num/10;
    }
    if(reversed==x){
        return 1 ;
    }
    
    return 0;
    

}
