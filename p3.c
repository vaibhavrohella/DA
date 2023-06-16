/*The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:*/

#include<stdio.h>
#include<string.h>

char * convert(char * s, int numRows){
    int len = strlen(s);
    
    
    // If numRows is 1 or the string is shorter than numRows, return the original string
    if (numRows == 1 || len <= numRows) {
        return s;
    }
    
    char* result = (char*)malloc((len + 1) * sizeof(char));
    int interval = (numRows - 1) * 2;
    int idx = 0;
    
    // First row
    for (int i = 0; i < len; i += interval) {
        result[idx++] = s[i];
    }
    
    // Middle rows
    for (int i = 1; i < numRows - 1; i++) {
        int step = i * 2;
        for (int j = i; j < len; j += step) {
            result[idx++] = s[j];
            step = interval - step;
        }
    }
    
    // Last row
    for (int i = numRows - 1; i < len; i += interval) {
        result[idx++] = s[i];
    }
    
    result[idx] = '\0';
    return result;
    
}