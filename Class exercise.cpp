//HackerRank
//https://www.hackerrank.com/challenges/c-tutorial-class

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    public:
        int age;
        int standard;
        string first_name;
        string last_name;
    
        void set_age(int ag );
        int  get_age( void );
        void set_standard( int stan );
        int get_standard( void );
        void set_first_name(string fn );
        string get_first_name( void );
        void set_last_name(string ln );
        string get_last_name( void );
    
        void to_string();
};
    
   void Student::set_age( int ag ) {
           age = ag;
        }
 
    int Student::get_age( void ) {
       return age;
        }
/////////////////////
 void Student::set_standard( int stan ) {
           standard = stan;
        }
 
    int Student::get_standard( void ) {
       return standard;
        }   
//////////////////////
    void Student::set_first_name(string fn ) {
           first_name = fn;
        }
 
    string Student::get_first_name( void ) {
       return first_name;
        }
/////////////////////
    void Student::set_last_name(string ln ) {
           last_name = ln;
        }
 
    string Student::get_last_name( void ) {
       return last_name;
        }
//////////////////////

void Student::to_string(){
    cout << age << "," << first_name << "," << last_name << "," << standard;
    //return a;
}
    


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    //cout << st.to_string();
    st.to_string();
    
    return 0;
}