#include <iostream>
#include<string>
#include <sstream>
using namespace std;

class Student
{
    int age;
    int standard;
    string first_name;
    string last_name;
    public:
        void set_age(int age)
        {
            this->age=age;
        }  
        void set_standard(int standard)
        {
            this->standard=standard;
        }
        void set_first_name(string first_name)
        {
            this->first_name=first_name;
        }
        void set_last_name(string last_name)
        {
            this->last_name=last_name;
        }
        int get_age()
        {
            return age;
        }
        string get_first_name()
        {
            return first_name;
        }
        string get_last_name()
        {
            return last_name;
        }
        int get_standard()
        {
            return standard;
        }
        string to_string()
        {
            string p,q;
            stringstream x,y;
            x<<age;
            x>>p;
            y<<standard;
            y>>q;
            string s= p+","+first_name+","+last_name+","+q;
            return s;
        }
};

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
    cout << st.to_string();
    
    return 0;
}
