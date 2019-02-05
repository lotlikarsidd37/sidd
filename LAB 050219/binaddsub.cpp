#include<iostream>
#include<math.h>
using namespace std;
int convertBinaryToDecimal(int);
int convertDecimalToBinary(int );
int main()
{
int n1,n2,nn1,nn2,sum,sub;
cout<<"Enter binary number"<<endl;
cin>>n1;
cout<<"Enter 2nd binary number"<<endl;
cin>>n2;
nn1=convertBinaryToDecimal(n1);
nn2=convertBinaryToDecimal(n2);
sum=nn1+nn2;
sub=nn1-nn2;
cout<<"The binary addition is:"<<convertDecimalToBinary(sum)<<endl;
cout<<"The binary subtraction is:"<<convertDecimalToBinary(sub)<<endl;





}



int convertBinaryToDecimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}



int convertDecimalToBinary(int n)
{
    int binaryNumber = 0;
    int remainder, i = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
