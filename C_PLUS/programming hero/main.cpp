#include <iostream>

using namespace std;

int main()
{
bool isGuest = true;
cout<< isGuest;
//comparison operators
int num1, num2;
num1 = 8;
num2 = 15;
bool results;


cout<<"8 == 15 is "<< (num1 == num2)<< endl;
cout<<"8 != 15 is "<< (num1 != num2)<< endl;
cout<<"8 > 15 is "<<(num1 > num2)<< endl;
cout<<"8 < 15 is "<<(num1 < num2)<< endl;
cout<<"8 >= 15 is "<<(num1 >= num2)<< endl;
cout<<"8 <= 15 is "<<(num1 <= num2)<< endl;

// using the logic gates
int a = 3 ,b = 8;
int resultsOne , resultsTwo;
resultsOne = (a<b) && (b>a);
resultsTwo = (a<b) || (a>b);

cout<< "output of AND operator "<< resultsOne<< endl;
cout << "output of OR operator " << resultsTwo<<endl;


// lets do type casting
// lets begin with the implicit type casting
int mumber;
cout << "enter a number "<<endl;
cin>> mumber;
cout << "value is " <<mumber<< endl;



// control structures
int product = 2;
while (product <= 1000){
product = product * 2;
}
(cout << product << endl);


// conditionals
if (true){
    cout<< "inside if block"<<endl;
}


int otp = 22048845;
int userotp;
cout<< "enter the code been sent through your Email: "<<endl;
cin>>userotp;
if (otp == userotp){
    cout<< "verification completed"<<endl;
} else{
        cout<< "verification failed"<<endl;

}
cout<< "End of process"<<endl;




int age;
cout<< "enter your age: "<<endl;
cin>>age;
if (age < 18){
    cout<< "hey kiddo"<<endl;
}
else if (age < 65 && age >=18){
    cout << " hey adult "<<endl;
}
else {
    cout<< "hey senior citizens"<<endl;
}



// let write a for loop
int i;
for(i=0; i<6; i++)
    {
    cout << i*8<< endl;
}






// lets do a for loop
int  num;
for (int num = 1; num < 21; num ++){
    if(num %2 ==0){
        cout<< " hello world" <<endl;
    }
}
    return 0;
}
