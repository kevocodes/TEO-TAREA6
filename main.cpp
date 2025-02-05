#include <iostream>
#include <string>

using namespace std;

struct Student
{
  int id;
  string name;
  float grade1;
  float percentage1;
  float grade2;
  float percentage2;
  float grade3;
  float percentage3;
  float grade4;
  float percentage4;
  float grade5;
  float percentage5;
  float grade6;
  float percentage6;
  float grade7;
  float percentage7;
  float finalGrade;
};

float calculateAverage(Student student)
{
  return (student.grade1 * student.percentage1) +
         (student.grade2 * student.percentage2) +
         (student.grade3 * student.percentage3) +
         (student.grade4 * student.percentage4) +
         (student.grade5 * student.percentage5) +
         (student.grade6 * student.percentage6) +
         (student.grade7 * student.percentage7);
}

void checkStatus(Student &student)
{
  float grade = calculateAverage(student);
  student.finalGrade = grade;
  if (grade < 6)
  {
    cout << student.id << ") " <<  student.name << " " << "ha reprobado con " << grade << endl;
  }
  else
  {
    cout << student.id << ") " << student.name << " " << "ha aprobado con " << grade << endl;
  }
}

int main()
{
  Student student1;
  Student student2;
  student1.name = "Kevin";
  student1.id = 1;
  student1.grade1 = 5.7;
  student1.percentage1 = 0.05;
  student1.grade2 = 8;
  student1.percentage2 = 0.2;
  student1.grade3 = 7;
  student1.percentage3 = 0.1;
  student1.grade4 = 9;
  student1.percentage4 = 0.1;
  student1.grade5 = 6.3;
  student1.percentage5 = 0.2;
  student1.grade6 = 4.3;
  student1.percentage6 = 0.1;
  student1.grade7 = 10;
  student1.percentage7 = 0.25;

  student2.name = "Diego";
  student2.id = 2;
  student2.grade1 = 7.7;
  student2.percentage1 = 0.05;
  student2.grade2 = 2;
  student2.percentage2 = 0.2;
  student2.grade3 = 10;
  student2.percentage3 = 0.1;
  student2.grade4 = 7.6;
  student2.percentage4 = 0.1;
  student2.grade5 = 3.3;
  student2.percentage5 = 0.2;
  student2.grade6 = 9.3;
  student2.percentage6 = 0.1;
  student2.grade7 = 7.1;
  student2.percentage7 = 0.25;

  checkStatus(student1);
  checkStatus(student2);
  
  cout << "Promedio sección: " << (student1.finalGrade + student2.finalGrade) / 2 << endl;

  return 0;
}
