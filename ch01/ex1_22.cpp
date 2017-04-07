#include <iostream>
#include "Sales_item.h"
int main(){
  Sales_item total,trans;
  std::cout << "please input some sales record with same ISBN:" << std::endl;
  if (std::cin >> total){
      while(std::cin >> trans)
          if(compareIsbn(total, trans))
              total += trans;
          else{
              std::cout << "ISBN not same " << std::endl;
              return -1;
          }
          std::cout << "total info: ISBN, Sales volume, sales values, average price:"
              << total << std::endl;
  }else{
          std::cout << "No data" << std::endl;
          return -1;
  }
  return 0;
}
