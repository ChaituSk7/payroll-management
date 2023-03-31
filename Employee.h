#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
#include<iostream>
using namespace std;
class Employee
{
	private:
		string Name,Gender,Building_no,street,area,city,pin,Base_loc,Dept,Emp_type,Band,Pf_num,Bank_Accno;
		long double ctc;
		int Id;

	public:
		Employee(){}

		Employee(string Name,string Gender,string Building_no,string street,string area,string city,string pin,string Base_loc,
				string Dept,string Emp_type,string Band,string Pf_num,string Bank_Accno,long double ctc,int Id)
		{
			this->Name = Name;
			this->Gender = Gender;
			this->Building_no = Building_no;
			this->street = street;
			this->area = area;
			this->city = city;
			this->pin = pin;
			this->Base_loc = Base_loc;
			this->Dept = Dept;
			this->Emp_type = Emp_type;
			this->Band = Band;
			this->Pf_num = Pf_num;
			this->Bank_Accno = Bank_Accno;
			this->ctc = ctc;
			this->Id = Id;
		}
		const string& getArea() const {
			return area;
		}

		void setArea(const string &area) {
			this->area = area;
		}

		const string& getBand() const {
			return Band;
		}

		void setBand(const string &band) {
			Band = band;
		}

		const string& getBankAccno() const {
			return Bank_Accno;
		}

		void setBankAccno(const string &bankAccno) {
			Bank_Accno = bankAccno;
		}

		const string& getBaseLoc() const {
			return Base_loc;
		}

		void setBaseLoc(const string &baseLoc) {
			Base_loc = baseLoc;
		}

		const string& getBuildingNo() const {
			return Building_no;
		}

		void setBuildingNo(const string &buildingNo) {
			Building_no = buildingNo;
		}

		const string& getCity() const {
			return city;
		}

		void setCity(const string &city) {
			this->city = city;
		}

		const long double& getCtc() const {
			return ctc;
		}

		void setCtc(const long double &ctc) {
			this->ctc = ctc;
		}

		const string& getDept() const {
			return Dept;
		}

		void setDept(const string &dept) {
			Dept = dept;
		}

		const string& getEmpType() const {
			return Emp_type;
		}

		void setEmpType(const string &empType) {
			Emp_type = empType;
		}

		const string& getGender() const {
			return Gender;
		}

		void setGender(const string &gender) {
			Gender = gender;
		}

		int getId() const {
			return Id;
		}

		void setId(int id) {
			Id = id;
		}

		const string& getName() const {
			return Name;
		}

		void setName(const string &name) {
			Name = name;
		}

		const string& getPfNum() const {
			return Pf_num;
		}

		void setPfNum(const string &pfNum) {
			Pf_num = pfNum;
		}

		const string& getPin() const {
			return pin;
		}

		void setPin(const string &pin) {
			this->pin = pin;
		}

		const string& getStreet() const {
			return street;
		}

		void setStreet(const string &street) {
			this->street = street;
		}

		void Display()
		{
			cout<<getName()<<"\n"
				<<getGender()<<"\n"
				<<getBuildingNo()<<"\n"
				<<getStreet()<<"\n"
				<<getArea()<<"\n"
				<<getCity()<<"\n"
				<<getPin()<<"\n"
				<<getBaseLoc()<<"\n"
				<<getId()<<"\n"
				<<getDept()<<"\n"
				<<getEmpType()<<"\n"
				<<getBand()<<"\n"
				<<getPfNum()<<"\n"
				<<getBankAccno()<<"\n"
				<<getCtc()<<endl;

			cout<<"*************************\n"<<endl;
		}
};

#endif
