#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student{


string idNumber;
string name;
int age;
string gender;
float score;
char grade;
};



int main()
{


int  total_score = 0;
double  total_age = 0;
int  maleCount = 0;
int  femaleCount = 0;

int i;


  Student s[2];
 
for (int i = 0; i <= 1; i++)
{


 cout << "Enter your Id number";
 cin >> s[i].idNumber;


 cout << "Enter your name";
 cin >> s[i].name;


 cout << "Enter age";
 cin >> s[i].age;

while (true) 

{
 cout << "Enter student's gender: ";
 cin >> s[i].gender;
 
if (s[i].gender == "Male" )
 break;

if (s[i]. gender == "Female" )
 break;

}
 while (true)

{

 cout << "Enter score";
 cin >> s[i].score;


 if(s[i]. score > 80  && s[i]. score  <=100  )
 s[i].grade = 'A' ;
 cout << "Excellent" ;

break;

 if (s[i].score >=70  && s[i]. score  < 79)
  s[i].grade = 'B' ;
 cout << " Good job";

 if (s[i].score  >= 60 && s[i]. score  < 69)
  s[i].grade = 'C' ;
 cout << "Good";


 if  (s[i].score >= 50 && s[i]. score  < 59)
   s[i].grade = 'D' ;
 cout << " You can do better " ;


 if  (s[i].score >= 40 && s[i]. score  < 49)
  s[i].grade = 'E' ;
cout << "Credit";


if (s[i].score  >= 39 && s[i].score < 0)

  s[i].grade = 'F' ;
cout << "Fail";
}
total_age += s[i].age;

total_score += s[i].score;


if (s[i].gender == "Male")
  maleCount +=1;


else if (s[i].gender == "Female")
 femaleCount  += 1;


cout << endl << endl;



}
fstream myfile;

myfile.open( "message.txt", ios::out);
for (int i=0; i <= 1; i++)

{
 myfile << i+1 << ". ";
myfile <<s[i].idNumber << " ";
myfile << s[i].name << " ";
 myfile << s[i].age << " ";
myfile << s[i].gender << " ";
myfile << s[i].score<< " ";
myfile << s[i].grade << endl;

cout << "The record inputed " << i+1 << "is done ." << endl;

}

myfile << endl << "Average age :  " << total_age / 5 << endl;
myfile << " Average score : " << total_score / 5 << endl;
myfile << "Male count :" << maleCount << endl;
myfile << "Female count :" << femaleCount << endl;

return 0;

}

# edwin123
# edwin123
# edwin123
# edwin123
# edwin1234
# edwin1234
# edwin1234
# edwin1234
# edwin1234
