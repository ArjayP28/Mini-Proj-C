#include <iostream>
using namespace std;
int main()


{
	string Sname,Snum,Sec;
	float Ave,Fgrade, Mexam,Fexam;
	
	
	cout<< "Name of Student:";
	getline(cin, Sname);
	cout<< "Student Number:";
	cin>> Snum;
	cout<<"Section:";
	cin>>Sec;
	cout<< "Class Standing:";
	cin>>Ave;
	cout<<"Midterm Exam:";
	cin>>Mexam;
	cout<<"Final Exam:";
	cin>>Fexam;
	Fgrade = (0.5*Ave) + (0.2*Mexam) + (0.3*Fexam);
	
	if (Fgrade>=75)
	{
		cout<<"The Student is PASSED!      " <<Fgrade <<endl;
	}
	else{
		cout<<"The Student is FAILED!      " <<Fgrade <<endl;
	}
	
	
	
	
	system ("pause");
	return 0;
}
