#include<iostream>
using namespace std;
class student;
class teacher
{
private:
    int age;
public:
    void set(int a)
    {
        age=a;
    }
    void display()
    {
        cout<<age;
    }
    friend int difference(student,teacher);
};
class student
{
private:
    int age;
public:
    void set(int a)
    {
        age=a;
    }
    void display()
    {
        cout<<age;
    }
    friend int difference(student,teacher);
};
int main()
{
    student tohid;
    teacher shabir;
    int sAge, tAge;
    cout << "enter age of student and teacher : " ;
    cin >> sAge >> tAge;
    tohid.set(sAge);
    shabir.set(tAge);
    int diff = difference(tohid,shabir);
    cout<< "The difference in ages is: " << diff<<endl;
}

int difference(student t, teacher s)
{
    return (s.age-t.age);
}