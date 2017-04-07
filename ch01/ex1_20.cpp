#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item book;
    std::cout << "please input sales record:" << std::endl;

    while(std::cin >> book){
        std::cout << "ISBN, book sold, average price, total price is:"
            << book << std::endl;
    }
    return 0;
}
