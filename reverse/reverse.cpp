#include <iostream>

void Str_reverse(char* str)
{
    for (int i = std::strlen(str)-1; i >= 0; --i) {
        std::cout << str[i];
    }
    std::cout<<std::endl;
}

int main(){
    char str[] = "hello";
    Str_reverse(str);
    return 0;
}