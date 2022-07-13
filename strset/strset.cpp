#include <iostream>

void strset(char* s, char ch){
    while (*s!='\0')
    {
        *s++ = ch;  
    }
}

int main() {
    char str[] = "hello";
    strset(str, 'a');
    std::cout<<str<<std::endl;
    return 0;
}