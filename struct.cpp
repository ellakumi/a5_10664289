#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct student {
		int idNumber;
		string name;
		int age;
		string gender;
		double score;
		char grade;
	};
int main(int agrc, char ** argv){
	//User defined Variables
		double totAge;
		double totScore;
		int mCount;
		int fCount;
		

//Array	
student st[5];
ofstream fin;
fin.open("student_record.txt");
fin<<"Count\t ID Number\t Age\t Gender\t Score\t Grade\t"<<endl;

//Loop
for (int id = 0;id<5;id++){
cout<<"Student "<<id+1<<"\t"<<endl;
fin<<id+1<<"\t";
cout<<"Enter your Student Identification Number: \n";
cin>>st[id].idNumber;
fin<<st[id].idNumber<<"\t";

cout<<"Enter your Gender:Male or Female \n";
cin>>st[id].gender;
fin<<st[id].gender<<"\t";

cout<<"Enter your name: \n";
cin>>st[id].name;
fin<<st[id].name<<"\t";

cout<<"Enter your score: \n";
cin>>st[id].score;
fin<<st[id].score<<"\t";

if(st[id].score>=80 && st[id].score<=100){
	st[5].grade = 'A';
}
else if ( st[id].score>=70 && st[id].score <=79){
	st[id].grade = 'B';
	}
	else if (st[id].score >=60 && st[id].score <=69){
	st[id].grade = 'C';
	}
	else if (st[id].score >=50 && st[id].score <=59){
		st[id].grade= 'D';
	}
	else if (st[id].score >=40 && st[id].score <=49){
		st[id].grade = 'E';
	}
	else if (st[id].score >=0 && st[id].score <=39){
		st[id].grade = 'F';
	}
	else {cout<<"Enter a valid score. \n";}
fin<<st[id].grade;
cout <<endl;
totAge+=st[id].age;
totScore+=st[id].score;

if(st[id].gender=="male"){
	mCount+=1;
}
else{
	fCount++;
}
}
	fin<<"AVERAGE AGE : "<<totAge/5<<endl;
	fin<<"AVERAGE SCORE : "<<totScore/5<<endl;
	fin<<"MALE COUNT : "<<mCount<<endl;	
	fin<<"FEMALE COUNT : "<<fCount<<endl;
	return 0;
}
