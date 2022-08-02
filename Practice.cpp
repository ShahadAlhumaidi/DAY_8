//Example 1 (struct) :
/*
#include <iostream>
using namespace std ;

class uni {
};

struct {
    int id;
    string name ;
} student_data, student_data2;

int main() {

    student_data.id =201925022;
    student_data.name ="Shahad" ;

    student_data2.id =202025099;
    student_data2.name = "Rahaf";

    cout <<"ID :" <<student_data.id << " , name :" <<student_data.name <<endl;
    cout <<"ID :" <<student_data2.id << " , name :" <<student_data2.name <<endl;

    return 0;
}
*/

// Example 2 (more than two) :

#include <iostream>
using namespace std ;

class uni {
};

struct student {
    int id;
    string name;
};

int main() {
    student student1 ;
    student1.id =201925022;
    student1.name ="Shahad" ;

    student student2 ;
    student2.id =202025099;
    student2.name = "Rahaf";

    student student3 ;
    student3.id =202125044;
    student3.name = "Mona";

    cout <<"ID : " <<student1.id << " , name : " <<student1.name <<endl;
    cout <<"ID : " <<student2.id << " , name : " <<student2.name <<endl;
    cout <<"ID : " <<student3.id << " , name : " <<student3.name <<endl;

    return 0;
}