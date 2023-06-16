/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".*/

#include<stdio.h>
#include<string.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    char* ans = strs[0];
    
    int i,j;
    for(i=1;i<strsSize;i++)
    {   
        for(j=0;j<strlen(ans);j++)
        {
            if(ans[j]!=strs[i][j]){
                ans[j]='\0';
                break;
            }
        }
        
    }
    return ans;
}