#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "Employee.h"
#include<string>
#include<vector>
#include<map>
using namespace std;
class Employer : public Employee
{
	private:
		string Name_Com;
	public:

		map<int,Employee> emp_data;

		Employer()
		{
			cout<<"Enter Company Name"<<endl;
			getline(cin>>ws,Name_Com);
			cout<<Name_Com<<endl;
		}

		void AddUser();

		void Modify_User();

		void Remove_Employee();

		void search_Employee();

		void Print_all_Employee();

		void Generate_pay_slip();

};

Employee e;

pair<map<int, Employee>::iterator, bool> result;

void Employer :: AddUser()
{
	string name;
	cout<<"Enter your Name"<<endl;
	getline(cin>>ws,name);

	string gen;
	cout<<"Enter your Gender"<<endl;
	getline(cin>>ws,gen);

	string dno;
	cout<<"Enter Door Number"<<endl;
	getline(cin,dno);

	string st;
	cout<<"Enter Street"<<endl;
	getline(cin>>ws,st);

	string ar;
	cout<<"Enter Area"<<endl;
	getline(cin>>ws,ar);

	string ct;
	cout<<"Enter City"<<endl;
	getline(cin>>ws,ct);

	string pin;
	cout<<"Enter Pin code"<<endl;
	getline(cin>>ws,pin);

	string bloc;
	cout<<"choose Base Location"<<endl;
	getline(cin>>ws,bloc);

	string dept;
	cout<<"select Department"<<endl;
	getline(cin>>ws,dept);

	string etype;
	cout<<"select Employee type\n1.Permanent 2.Part-time 3.Contractor"<<endl;
	getline(cin>>ws,etype);

	string band;
	cout<<"Enter Band"<<endl;
	getline(cin>>ws,band);

	string pf_no;
	cout<<"Enter Pf Number"<<endl;
	getline(cin>>ws,pf_no);

	string Bank_Ano;
	cout<<"Enter your Bank Account Number"<<endl;
	getline(cin>>ws,Bank_Ano);

	long double ctc;
	cout<<"Enter your CTC In lakhs"<<endl;
	cin>>ctc;

	int id;
	cout<<"Enter your Employee Id"<<endl;
	cin>>id;

	e = Employee(name,gen,dno,st,ar,ct,pin,bloc,dept,etype,band,pf_no,Bank_Ano,ctc,id);

	//emp_data.insert({id,e});

	result = emp_data.insert(pair<int, Employee>({id, e}));

	if(result.second)
	{
		cout<<"\n**************** Employee Details Added ***************\n"<<endl;
	}
	else
	{
		cout << "Employee Id already exist.\n";
	}
}

void Employer :: Modify_User()
{
	int id;
	cout<<"Enter your Employee Id"<<endl;
	cin>>id;
	for(auto &i : emp_data)
	{
		if((i.first == id) && (emp_data.size() > 0))
		{
			int choice{0};
			do
			{
				cout<<" ********** choose what you want to modify **********"<<endl;

				cout<<"1.Name \n2.Door Number \n3.Street \n4.Area \n5.City \n6.Pin Code \n7.Location \n"
						"8.Department \n9.Employee Type \n10.Band \n11.Bank Account-Number \n12.CTC \n13.Exit\n"<<endl;

				cin>>choice;
				switch(choice)
				{
					case 1:
					{
						string nm;
						cout<<"Enter Correct Name"<<endl;
						getline(cin>>ws,nm);
						i.second.setName(nm);
						cout<<"Your name should be modified"<<endl;
					}
					break;
					case 2:
					{
						string dno;
						cout<<"Enter Correct Door Number"<<endl;
						getline(cin>>ws,dno);
						i.second.setBuildingNo(dno);
						cout<<"Door Number Modified"<<endl;
					}
					break;
					case 3:
					{
						string str;
						cout<<"Enter Correct street"<<endl;
						getline(cin>>ws,str);
						i.second.setStreet(str);
						cout<<"Street Name Modified"<<endl;
					}
					break;
					case 4:
					{
						string ar;
						cout<<"Enter Correct Area"<<endl;
						getline(cin>>ws,ar);
						i.second.setArea(ar);
						cout<<"Area Name Modified"<<endl;
					}
					break;
					case 5:
					{
						string cty;
						cout<<"Enter Correct City"<<endl;
						getline(cin>>ws,cty);
						i.second.setCity(cty);
						cout<<"City Name Modified"<<endl;
					}
					break;
					case 6:
					{
						string pn;
						cout<<"Enter Correct Pin Code"<<endl;
						getline(cin>>ws,pn);
						i.second.setPin(pn);
						cout<<"Pin code Modified"<<endl;
					}
					break;
					case 7:
					{
						string loc;
						cout<<"Enter Correct Base Location"<<endl;
						getline(cin>>ws,loc);
						i.second.setBaseLoc(loc);
						cout<<"Base Location Modified"<<endl;
					}
					break;
					case 8:
					{
						string dpt;
						cout<<"Enter Correct Department"<<endl;
						getline(cin>>ws,dpt);
						i.second.setDept(dpt);
						cout<<"Department Modified"<<endl;
					}
					break;
					case 9:
					{
						string et;
						cout<<"Enter Correct Employee Type"<<endl;
						getline(cin>>ws,et);
						i.second.setEmpType(et);
						cout<<"Employee Type Modified"<<endl;
					}
					break;
					case 10:
					{
						string bd;
						cout<<"Enter Correct Employee Band"<<endl;
						getline(cin>>ws,bd);
						i.second.setBand(bd);
						cout<<"Employee Modified"<<endl;
					}
					break;
					case 11:
					{
						string an;
						cout<<"\nEnter Correct Account Number"<<endl;
						getline(cin>>ws,an);
						i.second.setBankAccno(an);
						cout<<"Account Number Modified\n"<<endl;
					}
					break;
					case 12:
					{
						long double ctc;
						cout<<"Enter Correct CTC\n"<<endl;
						cin>>ctc;
						i.second.setCtc(ctc);
						cout<<"\nCTC Modified"<<endl;
					}
					break;
				}
			}while(choice != 13);

			cout<<"\n *************** The Modified details are  ***********"<<endl;

			i.second.Display();
		}
		else
		{
			cout<<"*********** Employee Does Not Exist **********"<<endl;
		}
	}
}

void Employer :: Remove_Employee()
{
	cout<<"Enter Employee Id to remove\n"<<endl;
	int id;
	cin>>id;
	emp_data.erase(id);
	cout<<id<<" Employee Data will be removed \n"<<endl;
}

void Employer ::search_Employee()
{
	cout<<"Enter your EmpID"<<endl;
	int e_id;
	cin>>e_id;
	for(auto &i : emp_data)
	{
		if(e_id == i.first)
		{
			i.second.Display();
		}
	}

}


void Employer :: Print_all_Employee()
{
	for(auto &i : emp_data)
	{
		i.second.Display();
	}
}

void Employer ::Generate_pay_slip()
{
	string mon_pay;
	cout<<"Enter Month and date"<<endl;
	getline(cin>>ws,mon_pay);
	int e_id ;
	double mess_bill;
	long double basic_sal,vpp,pf,other_all,income_tax;
	long double gross_pay,net_pay;
	cout<<"Enter Employee Id"<<endl;
	cin>>e_id;

	cout<<"Enter Mess Bill"<<endl;
	cin>>mess_bill;

	for(auto &i : emp_data)
	{
		if(i.first == e_id)
		{
			long double emp_ctc = i.second.getCtc();
			basic_sal = emp_ctc * 0.6;
			vpp = emp_ctc * 0.3;
			pf = emp_ctc * 0.05;
			other_all = emp_ctc * 0.05;

			if(emp_ctc >= 500000 && emp_ctc <= 1000000)
			{
				income_tax = emp_ctc * 0.05;
			}
			else if(emp_ctc >= 1001000 && emp_ctc <= 1500000)
			{
				income_tax = emp_ctc * 0.1;
			}
			else if(emp_ctc >= 15001000 && emp_ctc <= 2000000)
			{
				income_tax = emp_ctc * 0.15;
			}
			else if(emp_ctc > 2000000)
			{
				income_tax = emp_ctc * 0.2;
			}
			else
			{
				income_tax = 0;
			}

			gross_pay = basic_sal + vpp + pf + other_all;

			net_pay = gross_pay - income_tax - mess_bill;
		}
	}
	cout<<mon_pay<<":\n{\n"
		<<"basic_salary : "<<basic_sal<<",\n"
		<<"variable_pay : "<<vpp <<",\n"
		<<"provident_fund : "<<pf<<",\n"
		<<"other_allowance : "<<other_all<<",\n"
		<<"income_tax : "<<income_tax<<",\n"
		<<"mess_bill : "<<mess_bill<<",\n"
		<<"net_pay : "<<net_pay<<",\n"
		<<"gross_pay : "<<gross_pay<<"\n},\n"
		<<endl;
}

#endif
