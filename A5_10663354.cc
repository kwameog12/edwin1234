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


  Student s[5];
 
for (int i = 0; i <=4 ; i++)
{


 cout << "Enter your Id number :";
 cin >> s[i].idNumber;


 cout << "Enter your name :";
 cin >> s[i].name;


 cout << "Enter age :";
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



{

 cout << "Enter score : ";
 cin >> s[i].score;





 if(s[i]. score > 80  && s[i]. score  <=100  )
 
 {
 
 s[i].grade = 'A' ;
 cout << "Excellent" ;
}


  else if (s[i].score >=70  && s[i]. score  < 79)
  {
  
  s[i].grade = 'B' ;
 cout << " Good job";
}
 else if (s[i].score  >= 60 && s[i]. score  < 69)
 {
 
  s[i].grade = 'C' ;
 cout << "Good";
}

 else if  (s[i].score >= 50 && s[i]. score  < 59)
 {
 
   s[i].grade = 'D' ;
 cout << " You can do better " ;
}

 else if  (s[i].score >= 40 && s[i]. score  < 49)
 {
 
  s[i].grade = 'E' ;
cout << "Credit";

}

else
  
{

  s[i].grade = 'F' ;
cout << "Fail";
}

}
total_age += s[i].age;

total_score += s[i].score;


if (s[i].gender == "Male")
  maleCount +=1;


else if (s[i].gender == "Female")
 femaleCount  += 1;


cout << endl << endl;



}



cout << "ID NUMBER | NAME |AGE| GENDER | SCORE | GRADE \n" ; 

for (int i=0; i <=4 ; i++)
{

cout << i+1 << ". ";        cout <<s[i].idNumber << " ";         cout << s[i].name << " ";        cout << s[i].age << " ";         cout << s[i].gender << " ";         cout << s[i].score<< " ";      cout << s[i].grade << endl;
}

cout << endl << "Average age :  " << total_age / 5 << endl;
cout << " Average score : " << total_score / 5 << endl;
cout << "Male count :" << maleCount << endl;
cout << "Female count :" << femaleCount << endl;






fstream aStudent;

aStudent.open( "thestudent.txt", ios::out);
for (int i=0; i <= 4; i++)

{
 aStudent << i+1 << ". ";
aStudent <<s[i].idNumber << " ";
aStudent<< s[i].name << " ";
 aStudent << s[i].age << " ";
aStudent << s[i].gender << " ";
aStudent << s[i].score<< " ";
aStudent<< s[i].grade << endl;



}

aStudent << endl << "Average age :  " << total_age / 5 << endl;
aStudent << " Average score : " << total_score / 5 << endl;
aStudent << "Male count :" << maleCount << endl;
aStudent<< "Female count :" << femaleCount << endl;

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
# edwin1234
# edwin1234
# edwin1234
# edwin123
# edwin123
