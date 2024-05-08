#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Student{
	private:
		string surName;
		string name;
		string group;
		int id;
	public:
Student(const string& surName, const string& name, const string& group, int id) :
surName(surName), Name(name), group(group), id(id){}
string SurName()const{return surName;}
string Name()const{return name;}
string Group()const{return group;}
int ID()const{return id;}
}
class StudentList{
	vector<Student>vec;
	public:
	void Add(const Student& s){vec.push_back(s);}
	void PrintList()const{
		cout<<"students list:"<<endl;
		for(const auto& student : vec){
			cout<<student.SurName()<<" "<<student.Name()<<endl;}
	}
	void 
