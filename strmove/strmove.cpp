#include <iostream>

int strlen(char* str){
    int count = 0;
    while(*(str+count) != '\0'){
        ++count;
    }
    return count;
}

void strmove(char* s, int n){
    int size = strlen(s);
    for (int i = 0; i < n; i++)
    {
        std::swap(s[0],s[size-1]);
        for(int j = size-1; j>1;--j){
            std::swap(s[j],s[j-1]);
        }
    } 
}

int main() {
    char str[] = "hello";
    strmove(str, 2);
    std::cout<<str<<std::endl;
    return 0;
}

