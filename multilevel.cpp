#include <iostream>
using namespace std;
//A->B->c

class Student{
    protected:
        int roll_number;
        public:
            void set_roll_mumber(int);
            void get_roll_number(void);        
};

void Student::set_roll_mumber(int r){
    roll_number = r;
}
void Student :: get_roll_number(){
    cout<<"The roll is : "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        float maths ;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks();
};

void Exam::set_marks(float m1, float p1){
    maths = m1;
    physics = p1;

}
void Exam::get_marks(){
    cout<<"The marks obtained in maths is "<<maths<<endl;
    cout<<"The marks obtained in physics is "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:     
        void display(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths +physics)/2<<endl;

        }

};

int main(){
    Result harry;
    harry.set_roll_mumber(420);
    harry.set_marks(94,90);
    harry.display();
    return 0;
}