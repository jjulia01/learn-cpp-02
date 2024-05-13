#include<iostream>
#include<vector>
#include<string>
#include<ctime>
using namespace std;
class Student {
	private:
		    string surName;
		        string name;
			    string group;
			        int id;
	public:
				    Student(const string& surName, const string& name, const string& group, int id) :
					            surName(surName), name(name), group(group), id(id) {}
				        string SurName()const { return surName; }
					    string Name()const { return name; }
					        string Group()const { return group; }
						    int ID()const { return id; }
};
class StudentList {
	    vector<Student>vec;
	public:
	        void Add(const Student& s) { vec.push_back(s); }
		    void PrintList()const {
			            cout << "students list:" << endl;
				            for (const auto& student : vec) {
						                cout << student.SurName() << " " << student.Name() << " " << student.Group() << " " << student.ID() << endl;
								        }
					        }
		        void PrintSurname(const string& surName)const {
				        for (const auto& student : vec) {
						            if (student.SurName() == surName)
								                    cout << student.SurName() << " " << student.Name() << endl;
							            }
					    }
			    void PrintName(const string& name)const {
				            for (const auto& student : vec) {
						                if (student.Name() == name)
									                cout << student.Name() << " " << student.SurName() << endl;
								        }
					        }
};
int main() {
	    srand(time(0));
	        StudentList sl;
		    for (int i = 0; i < 200; i++) {
			            sl.Add(Student("name:" + std::to_string(i), "surname:" + std::to_string(i), "group:" + std::to_string(i), rand()));
				        };
		        sl.PrintList();
			    sl.PrintSurname("surname");
			        sl.PrintName("name");
}

