#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class PatientRecord
{
    int id;  // Unique identifier of the patient
    char *name;// Name of the patient. (Needs to be dynamically allocated.)
    double w;// Weight of the patient.
    int age;// Age of the patient.
    int *pdiacode;// Diagnosys codes assigned to the patient. (Needs to be dynamically allocated.)
            // Ths list is ended with a 0 code.

public:
    PatientRecord(int n)
    {
        id=n;
    }
    PatientRecord(int n, char *p)
    {
              id=n;
              name = new char[strlen(p)+1];
              strcpy(name, p);

    }//write the constructor to set id,patient name;
    ~PatientRecord()
    {
              delete [] name;
    }
    PatientRecord(const PatientRecord &record)
    {
        name = new char[strlen(record.name)+1];
	   strcpy(name, record.name);
	   w=record.w;
	   age=record.age;
	   id=record.id;
    } // set the copy constructor
    void SetName(char *nam)
    {
name = new char[strlen(nam)+1];
              strcpy(name, nam);
    }
    void SetWeight(double o)
    {
        w=o;
    }
    void SetAge(int a)
    {
age=a;
    }
    void SetDiagCode(int *code)
    {
pdiacode=new int[sizeof(code)];
for(int i=0;i<sizeof(code);i++)
{
          if(code[i]==0)
                    break;
          else pdiacode=&code[i];
}
    } // code list ends with 0;

    int GetId()
    {
        return id;
    }
    const char* GetName()
    {
return name;
    }
    double GetWeight()
    {
return w;
    }
    int GetAge()
    {
        return age;
    }
    const int* GetDiagCode()
    {
return pdiacode;
}

    void show()
    {
cout<<id<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Weight: "<<w<<endl;
cout<<endl;
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
    rec2.show();
    rec3.show();
    rec4.show();
    return 0;
}
