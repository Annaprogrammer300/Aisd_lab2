#include "../include/List.h"

#include<cmath>
#include <iostream>

int main() {
    CyclicList<int> list;

    list.push_tail(4);
    list.push_tail(5);
    list.push_tail(6);
    list.push_head(3);
    list.push_head(2);
    list.push_head(1);

    std::cout << "Original list: "<< list << std::endl;
    list.reverse();
    std::cout << "Reversed list: " << list << std::endl;
    
    list.pop_head();
    list.pop_tail();
    std::cout << "Reversed list: " << list << std::endl;
    list.reverse();
    std::cout << "Original list: " << list << std::endl;


    list.delete_node(5);
    std::cout << "Original list: " << list << std::endl;


    CyclicList<int> rand_list(5, 1, 8);
    std::cout << "Original list: " << rand_list << std::endl;
    rand_list.reverse();
    std::cout << "Reversed list: " << rand_list << std::endl;

    return 0;
}