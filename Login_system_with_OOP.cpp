//This login system can store data up to 100 employee
#include <iostream>
using namespace std;

class Employee
{
  private:
    int id=1, pswd[100]; 
  public:
    char nameL[100];
    void signup(void);
    void login(void); 
    void display(void);
    void choice(void);
};
void Employee :: signup(){
    cout<<"Enter the first letter of your name : ";
    cin>>nameL[id];
    cout<<"Enter the password : ";
    cin>>pswd[id];
    cout<<"\nNew record added!"<<endl;
    cout<<"Your id is "<<id<<"\nPlease note down the id as it will required in the time of login\n"<<endl;
     id++;
     login();
}
void Employee :: choice(){
  int o;
  cout<<"Select an  option below:\n1.Display all employee\n2.New employee\n3.Exit\n";
  cout <<"Enter your choice (1, 2 or 3): ";
  cin>>o;
  if(o==1){
  display();
  }
  else if(o==2){
  signup();
  }
  else if(o==3){
    cout<<"Exiting...."<<endl;
    exit(0);
  }
  else{
  cout<<"Wrong option! Please try again\n";
  choice();
  }
}
void Employee :: login(){
    char l; //to store the first letter
    int p,i; //to store the password
    cout<<"\nWelcome back!\n"<<endl; //Greeting message

    cout<<"Login to your account";
    cout<<"\nEnter your id number                  : ";
    cin>>i;
    cout<<"\nEnter the first letter of your name : ";
    cin>>l; 
    cout<<"\nEnter the password                  : ";
    cin>>p;
    if( i>=1 && i < id && nameL[i]==l && pswd[i]==p){
       cout<<"Login succesfull!\n";
       choice();
    }
    else{
      cout<<"Invalid credentials\n";
    }
}

void Employee :: display(){
    for(int i=1; i<id; i++){
      cout<<"\nFor id "<<i<<" the first letter is "<<nameL[i]<<" and password is "<<pswd[i];
    }
    choice();
}

int main()
{
    Employee employee;
    while(true){
    employee.signup();
    }
    return 0;
}