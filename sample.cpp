#include <iostream>
int sum(int a, int b);

int main()
{	
	std::cout<<"This is master"<< std::endl;
	int a = 5;
	int b = 3;
	std::cout << sum(a,b) <<std::endl;
	return 0;
}

int sum(int a,int b){
	return a+b;
}