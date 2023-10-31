#include<iostream>
using namespace std;

class student{
  protected:
    int roll;
    char name[20];
    int tot_marks;
    float CGPA;
  public:
    student(){
        tot_marks = 0, CGPA = 0;
    }
    void get_basic_data(){
        cout << "Enter the roll number: ";
        cin >> roll;
        cout << "Enter the name: ";
        cin.getline(name, 20); cin.ignore();
    }
    void update_tot_marks(int x){
        tot_marks += x;
    }
    void update_cgpa(float x){
        CGPA += x;
    }
    void display_basic_details(){
        cout << "Roll number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Total marks: " << tot_marks <<endl;
        cout << "CGPA: " << CGPA << endl;
    }
};

class arts : public student{
  protected:
    int sem;
  public:
    arts(){
        sem = 1;
    }
    void get_arts_data(){
        get_basic_data();
        cout << "Enter current semester: ";
        cin >> sem;
    }
};

class med : public student{
  protected:
    int sem;
  public:
    med(){
        sem = 1;
    }
    void get_med_data(){
        get_basic_data();
        cout << "Enter current semester: ";
        cin >> sem;
    }
};

class engg : public student{
  protected:
    int sem;
    bool internship_status;
    char internship_company[20];
  public:
    engg(){
        sem = 1;
        internship_status = false;
    }
    void get_engg_data(){
        cout << "Enter current semester: ";
        cin >> sem;
        cout << "Is the student under internship(true OR false): ";
        cin >> internship_status;
        if(internship_status){
            cout << "Enter the company: ";
            cin.getline(internship_company, 20);
        }
    }
};
class mech : public engg{
    int oops, ds, ld, co, maths;
  public:
    mech(){
        oops = 0, ds = 0, ld = 0, co = 0, maths = 0;
    }
    void get_data(){
        get_basic_data();
        get_engg_data();
        cout << "Enter the marks of OOPS, DS, LD, CO, Maths: ";
        cin >> oops >> ds >> ld >> co >> maths;
        update_tot_marks(oops+ds+ld+co+maths);
    }
    void calculate_cgpa(){
        float gpa;
        gpa = ((oops + ds + ld) * 3) + ((co + maths) * 4);
        gpa = gpa / 17;
        update_cgpa(gpa);
    }
};
class etc : public engg{
    int oops, ds, ld, co, maths;
  public:
    etc(){
        oops = 0, ds = 0, ld = 0, co = 0, maths = 0;
    }
    void get_data(){
        get_basic_data();
        get_engg_data();
        cout << "Enter the marks of OOPS, DS, LD, CO, Maths: ";
        cin >> oops >> ds >> ld >> co >> maths;
        update_tot_marks(oops+ds+ld+co+maths);
    }
    void calculate_cgpa(){
        float gpa;
        gpa = ((oops + ds + ld) * 3) + ((co + maths) * 4);
        gpa = gpa / 17;
        update_cgpa(gpa);
    }
};
class comp : public engg{
    int oops, ds, ld, co, maths;
  public:
    comp(){
        oops = 0, ds = 0, ld = 0, co = 0, maths = 0;
    }
    void get_data(){
        get_basic_data();
        get_engg_data();
        cout << "Enter the marks of OOPS, DS, LD, CO, Maths: ";
        cin >> oops >> ds >> ld >> co >> maths;
        update_tot_marks(oops+ds+ld+co+maths);
    }
    void calculate_cgpa(){
        float gpa;
        gpa = ((oops + ds + ld) * 3) + ((co + maths) * 4);
        gpa = gpa / 17;
        update_cgpa(gpa);
    }
};

int main(){
    comp C;
    etc E;
    mech M;
    arts A;
    med D;
    C.get_data();
    return 0;
}