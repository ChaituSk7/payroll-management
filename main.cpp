#include<iostream>
#include "Employer.h"
#include<iostream>
using namespace std;
int main()
{
	int choice {0};
	Employer emp;
	do
	{
		cout<<"************************ PAY ROLL ******************** \n"<<endl;
		cout<<"select your choice \n1.Add User \n2.Modify User \n3.Remove Employee \n4.Search Employee \n"
					"5.print all employees \n6.Generate Pay Slips \n7.Exit  \n"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1 :
			{
				emp.AddUser();
			}
			break;
			case 2:
			{
				emp.Modify_User();
			}
			break;
			case 3:
			{
				emp.Remove_Employee();
			}
			break;
			case 4:
			{
				emp.search_Employee();
			}
			break;
			case 5:
			{
				emp.Print_all_Employee();
			}
			break;
			case 6:
			{
				emp.Generate_pay_slip();
			}
		}
	}while(choice != 7);
}
