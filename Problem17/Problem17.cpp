/*
counting and sum digit::
write a program that read  a positive integer numand prints the number of digit in num and their sum ::
ex :: 
345 -> total numeber of digit is 3 and sum of the digit is 17
here the main problem how to iterated the digit ::
    


*/
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "enter positive integer " << endl;
	cin >> num;
	int currDigit;
	int countDigit = 0;
	int sumDigit = 0;
	
	while (num>0) {
		currDigit = (int)num % 10;  //currDigit=345%10 = 5   
		countDigit++;          //countDigit=1
		sumDigit += (int)currDigit; // sumdigit=5
		num = num / 10;        //num= 345/10 = 34
	}
	cout << " total number of digit is " << countDigit << " and sum the digit is " << sumDigit << endl;


	return 0;
}