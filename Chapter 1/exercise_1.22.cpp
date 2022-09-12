#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item sale, sale2;
	while(std::cin >> sale){
		sale2 += sale;
	}
	std::cout << sale2 << std::endl;
}