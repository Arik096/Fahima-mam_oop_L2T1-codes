#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class PatientRecord
{
    int id;  // Unique identifier of the patient
    char*name;// Name of the patient. (Needs to be dynamically allocated.)
    double w;// Weight of the patient.
    int age;// Age of the patient.
    int *pdiacode;// Diagnosys codes assigned to the patient. (Needs to be dynamically allocated.)
            // Ths list is ended with a 0 code.

public:
    PatientRecord(int n)
    {
        id=n;
    }
    PatientRecord(int n, char *name)
    {


    }//write the constructor to set id,patient name;
    ~PatientRecord()
    {

    }
    PatientRecord(const PatientRecord& record)
    {
        name=new char[strlen(name)+1];

    } // set the copy constructor

    void SetName(char *name)
    {

    }
    void SetWeight(double w)
    {
        W1=w;

    }
    void SetAge(int a)
    {

    }
    void SetDiagCode(int *code)
    {

    } // code list ends with 0;

    int GetId()
    {
        return Id;
    }
    const char* GetName()
    {

    }
    double GetWeight()
    {

    }
    int GetAge()
    {
        return Age;
    }
    const int* GetDiagCode()
    {

    }
    void show()
    {

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
