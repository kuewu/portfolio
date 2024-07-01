#include <iostream>

using namespace std;

int main()
{
string gender;
string name;
int age;
string student_ID;

cout<< "enter your name: "<<endl;
cin>>name;
cout<< "your name is: "<< name<<endl;

cout<< "enter your age: "<<endl;
cin>>age;
cout<< " your age is: "<< age<<endl;

cout<< "enter your student ID: "<<endl;
cin>>student_ID;
cout<< " your student ID is: "<< student_ID<<endl;

cout<< "whats your gender? "<<endl;
        cin>>gender;
if (gender == "female"){

    cout << "you are a female"<<endl;
}
else{
    cout<< "you are a male" <<endl;
}






    return 0;
}
