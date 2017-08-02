#include <iostream>
#include <math.h>
#include <vector>
#include <utility>
#include <cstring>
#include <string>  
#include <sstream>
using namespace std;

int factorial(int n){
	int temp = 1;
	if(n > 0){
		for(int i = 1; i <= n; i++)
			temp *= i;	
	}
	return temp;
}

int c(int n,int m){
	return	factorial(n)/(factorial(n-m)*factorial(m));	
}


int find_P(string str){
	int count = 0, start = 0;
	while(str.find("P",start) != -1){
		if(str.find("P",start) != -1){
			count++;
			start = str.find("P",start+1);
		}	
	}
	return count;
}
