#include <iostream>
using namespace std;

/*
Student->Test and Sports -> Result
*/

class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};

class Test : virtual public student{
    protected:
        float maths,physics;
        public:
            void set_marks(float m1, float p1){
                maths =m1;
                physics = p1;
            }

            void print_marks(){
                cout<<"Maths is "<<maths<<endl;
                cout<<"Physics is "<<physics<<endl;
            }
};
class Sports: virtual public student{
    protected:
        float score;
        public:
            void set_score(float src){
                score =src;
            }

            void print_score(){
                cout<<"Score is "<<score<<endl;
                
            }
};

class Result :  public Test, public Sports{
    protected:
        float total;
        public:

            void display(){
                cout<<"total is "<<maths+physics+score<<endl;
                print_number();
                print_marks();
                print_score();
            }
};


int main(){
    Result harry;
    harry.set_number(20);
    harry.set_marks(79,80);
    harry.set_score(80);
    harry.display();
    return 0;
}