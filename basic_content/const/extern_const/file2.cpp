#include<iostream>
/**
 * by 光城
 * compile: g++ -o file file2.cpp file1.cpp
 * execute: ./file
 */
extern const int* ext;
int main(){
    std::cout<<(*ext+10)<<std::endl;
}
