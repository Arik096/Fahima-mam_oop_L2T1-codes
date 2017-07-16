#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class PatientRecord
{
             // Unique identifier of the patient
        // Name of the patient. (Needs to be dynamically allocated.)
     // Weight of the patient.
          // Age of the patient.
   // Diagnosys codes assigned to the patient. (Needs to be dynamically allocated.)
                // Ths list is ended with a 0 code.

public:
    PatientRecord(int n){

    }
    PatientRecord(int n, char *name){

    }//write the constructor to set id,patient name;
    ~PatientRecord(){

    }
    PatientRecord(const PatientRecord& record){


    } // set the copy constructor

    void SetName(char *name){

    }
    void SetWeight(double w){

    }
    void SetAge(int a){

    }
    void SetDiagCode(int *code){

    } // code list ends with 0;

    int GetId(){

    }
    const char* GetName(){

    }
    double GetWeight(){

    }
    int GetAge(){

    }
    const int* GetDiagCode(){

    }
    void show(){

    }

};
int main()
{
    int diagCode1[] = {1, 2, 3, 4, 0};
    int diagCode2[] = {3, 2, 0};

    PatientRecord rec1(1);
    PatientRecord rec2(2);

    rec1.SetName("Saifur");
    rec1.SetAge(30);
    rec1.SetWeight(70);
    rec1.SetDiagCode(diagCode1);

    rec2.SetName("Nayeem");
    rec2.SetAge(20);
    rec2.SetWeight(50);
    rec2.SetDiagCode(diagCode2);

    PatientRecord rec3(rec1);
    PatientRecord rec4 = rec2;
    rec1.show();
    rec3.show();
    rec4.show();
    rec2.show();
    return 0;
}
