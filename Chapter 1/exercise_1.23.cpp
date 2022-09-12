#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item curSale, newSale;
	if(std::cin >> curSale){
		int cnt = 1;
		while(std::cin >> newSale){
			if(newSale.isbn() == curSale.isbn()){
				++cnt;
			} else{
				std::cout << curSale.isbn() << " occurs " << cnt << " times" << std::endl;
				curSale = newSale;
				cnt = 1;
			}
		}
		std::cout << curSale.isbn() << " occurs " << cnt << " times" << std::endl;
	}
	return 0;
}