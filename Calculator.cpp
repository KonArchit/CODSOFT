#include<iostream>
using namespace std;

double sum(double number1, double number2){
    return (number1 + number2);
}

double sub(double number1, double number2){
    return (number1 - number2);
}

double mul(double number1, double number2){
    return (number1 * number2);
}

double division(double number1, double number2){
    return (number1 / number2);
}


int main()
{
    double number1,number2;
    char input;

    cout<<"\n\t\t\t || CALCULATOR || \t\t\t"<<endl<<endl;

    cout<<"Enter the First Number:"<<endl;
    cin>>number1;
    cout<<"Enter the Second Number:"<<endl;
    cin>>number2;

    cout<<"Enter your choice of Operation: "<<endl<<endl;
    cout<<"\tPress '+' for Addition"<<endl;
    cout<<"\tPress '-' for Substraction"<<endl;
    cout<<"\tPress '*' for Multiplication"<<endl;
    cout<<"\tPress '/' for Division"<<endl<<endl;

    cin>>input;
    switch(input)
    {
        case '+':
        cout<<"The Addition of two Number is: "<< sum(number1,number2)<<endl;
        break;

        case '-':
        cout<<"The Subtraction of two Number is: "<< sub(number1,number2)<<endl;
        break;

        case '*':
        cout<<"The Multiplication of two Number is: "<< mul(number1,number2)<<endl;
        break;

        case '/':
        cout<<"The division of two Number is: "<< division(number1,number2)<<endl;
        break;

        default:
        cout<<"\tWrong Choice!"<<endl;
        break;
    }
    return 0;
}