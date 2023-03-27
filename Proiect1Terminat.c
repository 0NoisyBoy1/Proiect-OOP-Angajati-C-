#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee {
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    void setName(string name){
        Name=name;
    }

    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company=company;
    }

    string getCompany(){
        return Company;
    }

    void setAge(int age){
        Age=age;
    }

    int getAge(){
        if ( age >= 18 )
            return Age;
    }

    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee( string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion(){
        if(Age>30)
            std::cout << Name << " got promoted "<< std::endl;
        else
            std::cout << Name << " is not promoted "<< std::endl;
    }

    virtual void work(){
        std::cout<<Name<<" that employee is checking email, tack backlog and is performing those tasks"<<std::endl;
    }

};

class Developer:public Employee {
public:
    string FavProgLanguage;
    Developer(string name, string company, int age, string favProgLanguage)
        :Employee(name, company, age);
    {
        FavProgLanguage = favProgLanguage;
    }

    void FixBug(){
        srd::cout<<getName()<<"fixed bug uding"<< FavprogLanguage<<std::end; 
    }
    void work(){
        std::cout<<Name<<" is writing"<< FavProgLanguage <<"code" << std::endl;
    }
};

class Teacher:public Employee {
public:
    string Subject;
    void PrepareLesson(){
        std::cout<<Name<<"  is preparing " <<Subject<<std::endl;
    }
    teacher(string name, string company, int age, string subject)
        :Employee (name , compnay, age);
    {
        Subject = subject
    }
    void work(){
        std::cout<<Name<<" is teaching "<< Subject<< std::endl;
    }
};

int main(){

    Developer d = Developer ("Saldina","San Fr",25, "C++");

    Employee* e = &d;

    e->Work();

}