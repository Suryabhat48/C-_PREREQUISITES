#include<iostream>
using namespace std;
class Teacher{
    private:double salary;
    public:
    
    Teacher(){
        cout<<"Hello this is the constructor of the Teacher's class"<<endl;
    }
  string name;
  string subject;
  string dept;
  string gender;
  
  void changeDept(string newDept){
      dept=newDept;
  }
//   setter:This is used to set or assign the values to the private attributes in the public data functions using other functions and those functions are called getters and setters
    void setSalary(double s){
        salary=s;
    }
// // getter
    double getSalary(string name){
        return salary;
    }
    
};
class Account{
    private://Helps in data hiding ie encapsulation 
          double balance;
            string password;
    public:
    string AccountID;
    string username;
    
};
int main() {
    Teacher t;
    t.name="Surya";
    t.subject="Java ";
    t.dept="AIML";
    t.gender="Male";
    cout<<t.name<<endl;
    cout<<t.dept<<endl;
    t.changeDept("Computer Science");
    cout<<t.dept<<endl;
    t.setSalary(250000);
    cout<<t.getSalary("Surya")<<endl;
return 0;

}
