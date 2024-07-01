#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    //int x,y,z;
    //x = 4;
    //y = 4;
    //z = 89;
    //cout << x+y+z  << endl;
    int name;
    cout<<"type a number: ";
    cin>>name;
    cout<<" your num is "  <<name;
    //another input style
    int x,y;
    int sum;
        cout<<"type a number: ";
cin>>x;
    cout<<"type a number again: ";

cin>>y;
sum = x+y;
    cout<<" your num is "  <<sum<<endl;
cout<< (x<5&&x>5);
//leys concatenate strings
string first_name;
string second_name;

cout<<"enter your first name: "<<endl;
cin>> first_name ;


cout<<"enter your second name: "<<endl;
cin>> second_name ;


string full_name = first_name + " " + second_name;
cout<<full_name<<endl;


string ful_name = first_name.append(second_name);
cout<<ful_name<<endl;

//lets check the string length
string nam = "eycgwafcisfffs";
cout<< nam.length()<<endl;
cout<< nam[ nam.length() - 1]<<endl;

//lets do maths
cout<< sqrt(64);
cout<< round(2.6);
cout<< log(2)<<endl;


//lets do the if conditions
if (20 == 18) {
    cout << "20 is greater than 18"<<endl;
}
else{
    cout<< "mmmmm"<<endl;
}



// ANOTHER

int time;

if (time < 18){
    cout<<"enter a number: "<<endl;
        cin>>time;
    cout << "good day."<<endl;
}
else{
    cout<< "good evening"<<endl;
}


//ANOTHER
int remind;
int money;
if ((remind && money)== 20){
    cout<< "enter a number: "<<endl;
    cin>>remind;

cout<<"good"<<endl;
}
else if (remind || money ) {
         cout<< "enter a number: "<<endl;
    cin>>money;
    cout << "bad" <<endl;
}
else {
    cout<< "oohh";
}

//ANOTHER WAY OF WRITING IF ELSE STATEMENTS, USING THE TERNARY CONDITIONS
int really;
cout<< "enter a number: " <<endl;
cin>>really;
string results = (really != 40)? "good day" : "good evening.";
cout<<results<<endl;



    return 0;
}
