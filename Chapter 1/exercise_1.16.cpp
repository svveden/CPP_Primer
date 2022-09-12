#include <iostream>

int main(){
	int val = 0, sum;
	while(std::cin >> val){
		sum += val;
	}
	std::cout << "Sum of your input is: " << sum << std::endl;
}