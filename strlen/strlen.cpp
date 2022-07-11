#include <iostream>


int getsize(char* str)
{
    int count = 0;
    while (*str != '\0')
    {
        ++count;
        ++str;
    }
    return count;
    
}

int main(){
    char str[] = "aaa";
    int size = getsize(str);
    std::cout<<size<<std::endl;
    return 0;
}