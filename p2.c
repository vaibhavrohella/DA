/*Given a string s, find the length of the longest 
substring
 without repeating characters.
*/

#include<stdio.h>

#include<string.h>

int lengthOfLongestSubstring(char * s){
    int len = strlen(s);
    int maxLength = 0;
    int start = 0;
    int visited[256]; // Assuming ASCII character set

    // Initialize visited array with -1
    memset(visited, -1, sizeof(visited));

    for (int i = 0; i < len; i++) {
        // If the current character is previously seen and its index is after the start of the current substring
        if (visited[s[i]] != -1 && visited[s[i]] >= start) {
            start = visited[s[i]] + 1;
        }

        visited[s[i]] = i;

        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;

}