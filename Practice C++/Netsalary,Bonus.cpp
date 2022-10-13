#include <iostream>
using namespace std;
int main()

{
 float salary,bonus,deduction, netsalary;
 string name;
 
 cout<<"Enter Employee Name:";
 getline(cin, name);
 cout<<"Enter Gross Salary:";
 cin>>salary;
 cout<<"Enter Deduction:";
 cin>>deduction;
 netsalary = salary - deduction;
 
 


 if(netsalary>=10000){
 
 
 
   bonus = salary*0.75;
 
 cout<<"Name of Employee:"<<name <<endl;
 cout<<"The Total Net Salary of Employee:"<<netsalary <<endl;
 cout<<"The Bonus of Employee:"<<bonus <<endl;
}

  else if (netsalary<10000){
  
  
  bonus = salary*0.5;

 
cout<<"Name of Employee:"<<name <<endl;
 cout<<"The Total Net Salary of Employee:"<<netsalary <<endl;
 cout<<"The Bonus of Employee:"<<bonus <<endl;
}


 system("pause");
 return 0; 
 }
