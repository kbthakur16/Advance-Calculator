#include<iostream>
#include<cmath>

// #include<bits/stdc++.h>

using namespace std;

//arthmetic calculation function
void arithmetic(){
    int num;
    float a,b;
    cout<<"Select Operation :"<<endl;
    cout<<" [1] Addition"<<endl;
    cout<<" [2] Substraction"<<endl;
    cout<<" [3] Product"<<endl;
    cout<<" [4] Division"<<endl;
    cout<<"Choose the operation: ";
    cin>>num;

    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    cout<<" Result: ";

    //calculation performed based on user operation selection
    switch (num)
    {
    case 1:
        cout<<(a+b);
        break;
    case 2:
        cout<<(a-b);
        break;
    case 3:
        cout<<(a*b);
        break;
    case 4:
        cout<<(a/b);
        break;
    
    default:
        cout<<"Invalid Operatin: ";
        break;
    }
}

//trignometric calculation function
void trignometric(){
    int num;
    float val=0.0;

    cout<<"Select Operation :"<<endl;
    cout<<" [1] Sine"<<endl;
    cout<<" [2] Cosine"<<endl;
    cout<<"Choose the operation: ";
    cin>>num;

    cout<<"Enter the value: ";
    cin>>val;

    if(num==1){
        cout<<sin(val);
    }
    else if(num==2){
        cout<<cos(val);
    }
    else{
        cout<<"Invalid Operaton: ";
    }
    cout<<endl;    
}

//function to find the exponential power of number 
void exponential(){
    float base=0.0;
    float power=0.0;
    cout<<"Enter the base value: ";
    cin>>base;
    cout<<"Enter the power: ";
    cin>>power;

    cout<<"The exponent value: ";
    cout<<pow(base,power);
}

void logarithmic(){
    float value=0.0;
    cout<<"Enter value for calculate the log(e) : ";
    cin>>value;
    
    cout<<"The log value: ";
    cout<<log(value);
}

//MAIN USER FUNCTION
int main()
{
    int value;
    cout<<" :   CALCULATOR    : "<<endl<<endl;
    cout<<"Select the operation : "<<endl;
    //asking for user input operation
    cout<<" [1] Arithmetic"<<endl;
    cout<<" [2] Trignometric"<<endl;
    cout<<" [3] Exponential"<<endl;
    cout<<" [4] Logarithmic"<<endl;
    cout<<endl<<endl;
    
    cout<<"Enter the operation: ";
    cin>>value;

    switch (value){
    case 1:
        arithmetic();
        break;
    case 2:
        trignometric();
        break;
    case 3:
        exponential();
        break;
    case 4:
        logarithmic();
        break;
    //when user gives invalid input opetation index
    default:
        cout<<" :  Invalid Operation  :"<<endl;
        break;
    }

    return 0;

}