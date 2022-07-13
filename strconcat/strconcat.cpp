#include <iostream>

char* strcat(char* s1, char* s2){
    char* s3 = s1;
    
    while(*s3!='\0'){
        s3++; 
    }
    while (*s2!='\0')
    {
        *s3++ = *s2++;
    }
    *s3 = '\0';
    return s1;
}

int main() {
    char str1[] = "Hello ";
    char str2[] = "world!";
    std::cout<<strcat(str1, str2)<<std::endl;
    return 0;
}