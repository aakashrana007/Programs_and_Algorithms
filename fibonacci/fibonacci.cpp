/*The Fibonacci sequence is a set of integers (the Fibonacci numbers) that starts with a zero,
 followed by a one, then by another one, and then by a series of steadily increasing numbers.
 The sequence follows the rule that each number is equal to the sum of the preceding two numbers.*/
 
//The Fibonacci sequence is given by 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and so on.

#include<iostream>
#include<conio.h>
int fibonacci(int);

using namespace std;
int main(){
    int n, i;
    int series[];
    cout<<"Enter a nth value of number to be shown upto:"<<endl;
    cin>>n;
    
    int fibo=fibonacci(n)
    for(i=0;i<n;i++){
    	series[i]
	}
	cout<<"The Fibonacci Sequence upto the given number n is: "<<series;
    
    getch();
    return 0;
}

int fibonacci(int n){
    if (n==1)
        return 0;
    else if(n==2)
        return 0,1;
    
}
