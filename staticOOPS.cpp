#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count = 0; // shared by all objects
public:
    void setData(void)
    {
        cout << "Enter id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id is: " << id << " and this is employee number " << count << endl;
    }
};
// static functions have acess to on;y static variables and other static function

int Employee ::count; // Default value is 0
int main()
{
    Employee Harry, rohan, lavish;
    // Harry.setData();
    // Harry.getData();

    // rohan.setData();
    // rohan.getData();

    // lavish.setData();
    // lavish.getData();

    

    return 0;
}
