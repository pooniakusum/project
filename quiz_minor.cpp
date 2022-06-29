#include<iostream>

#include<conio.h>

#include<cstdlib>

#include<windows.h>

using namespace std;

struct student{

	char nam[20],rollno[20];

	int marks,random;

};

student st;

void cppp(){

	int i=0,arr[6];

	st.marks=0;

	char choice;

	while(i<5){

	back:	

	st.random=rand()%6;

	for(int j=0;j<=6;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {

    case 0:

	cout<<i+1<<") What is a correct syntax to output \"Hello World\" in C++?"<<endl;

	cout<<"A. System.out.println(\"Hello world\");"<<endl;

	cout<<"B. Console.WriteLine(\"Hello world\");"<<endl;

	cout<<"C. print(\"Hello world\");"<<endl;

	cout<<"D. cout<<\"Hello world\";"<<endl;

	choice=getch();

	if(choice=='D'||choice=='d'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<") Which of the following is called address operator?"<<endl;

	cout<<"a) *"<<endl;

	cout<<"b) &"<<endl;

	cout<<"c) _"<<endl;

	cout<<"d) %"<<endl;

	choice=getch();

	if(choice=='B'||choice=='b'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is b"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<") Which of the following is used for comments in C++?"<<endl;

	cout<<"a) // comment"<<endl;

	cout<<"b) /* comment */"<<endl;

	cout<<"c) both // comment or /* comment */"<<endl;

	cout<<"d) // comment */"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is c"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<") Who created C++?"<<endl;

	cout<<"a) Bjarne Stroustrup"<<endl;

	cout<<"b) Dennis Ritchie"<<endl;

	cout<<"c) Ken Thompson"<<endl;

	cout<<"d) Brian Kernighan"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<")  A language which has the capability to generate new data types are called"<<endl;

	cout<<"a) Extensible"<<endl;

	cout<<"b) Overloaded"<<endl;

	cout<<"c) Encapsulated"<<endl;

	cout<<"d) Reprehensible"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") Which of the following is called insertion/put to operator?"<<endl;

	cout<<"a) <"<<endl;

	cout<<"b) >"<<endl;

	cout<<"c) <<"<<endl;

	cout<<"d) >>"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl<<endl;

		cout<<"The corrent answer is c"<<endl;

	}

	break;

	case 6:

	cout<<i+1<<") Which of the following is called extraction/get from operator?"<<endl;

	cout<<"a) <"<<endl;

	cout<<"b) >"<<endl;

	cout<<"c) <<"<<endl;

	cout<<"d) >>"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

    }

    i++;

    

}

	

}

void java(){
		int i=0,arr[6];

	st.marks=0;

	char choice;

	while(i<5){

	back:	

	st.random=rand()%6;

	for(int j=0;j<=6;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {

    case 0:

	cout<<i+1<<") Which of the following option leads to the portability and security of Java?"<<endl;

	cout<<"A. Bytecode is executed by JVM"<<endl;

	cout<<"B. The applet makes the Java code secure and portable"<<endl;

	cout<<"C. Use of exception handling"<<endl;

	cout<<"D. Dynamic binding between objects"<<endl;

	choice=getch();

	if(choice=='a'||choice=='A'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<") Which of the following is not a Java features?"<<endl;

	cout<<"a) Dynamic"<<endl;

	cout<<"b) Architecture Neutral"<<endl;

	cout<<"c) Use of pointers"<<endl;

	cout<<"d) Object-oriented"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is c"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<") The \u0021 article referred to as a"<<endl;

	cout<<"a) Unicode escape sequence"<<endl;

	cout<<"b) Octal escape"<<endl;

	cout<<"c) Hexadecimal"<<endl;

	cout<<"d) Line feed"<<endl;

	choice=getch();

	if(choice=='a'||choice=='A'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<")  _____ is used to find and fix bugs in the Java programs."<<endl;

	cout<<"a) JVM"<<endl;

	cout<<"b) JRE"<<endl;

	cout<<"c) JDK"<<endl;

	cout<<"d) JDB"<<endl;

	choice=getch();

	if(choice=='D'||choice=='d'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<")  Which of the following is an immediate subclass of the Panel class?"<<endl;

	cout<<"a) Applet class"<<endl;

	cout<<"b) Window class"<<endl;

	cout<<"c) Frame class"<<endl;

	cout<<"d) Dialog class"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") What does the expression float a = 35 / 0 return?"<<endl;

	cout<<"a) 0"<<endl;

	cout<<"b) Not a Number"<<endl;

	cout<<"c) Infinity"<<endl;

	cout<<"d) Run time exception"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl<<endl;

		cout<<"The corrent answer is c"<<endl;

	}

	break;

	case 6:

	cout<<i+1<<") Evaluate the following Java expression, if x=3, y=5, and z=10: ++z + y - y + z + x++"<<endl;

	cout<<"a) 24"<<endl;

	cout<<"b) 23"<<endl;

	cout<<"c) 20"<<endl;

	cout<<"d) 25"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

    }

    i++;

    

}

	 

}

void html(){

		int i=0,arr[6];

	st.marks=0;

	char choice;

	while(i<5){

	back:	

	st.random=rand()%6;

	for(int j=0;j<=6;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {

    case 0:

	cout<<i+1<<") What is HTML?"<<endl;

	cout<<"A. HTML describes the structure of a webpage"<<endl;

	cout<<"B. HTML is the standard markup language mainly used to create web pages"<<endl;

	cout<<"C. HTML consists of a set of elements that helps the browser how to view the content"<<endl;

	cout<<"D. All of the mentioned"<<endl;

	choice=getch();

	if(choice=='D'||choice=='d'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<") Who is the father of HTML?"<<endl;

	cout<<"a)  Rasmus Lerdorf"<<endl;

	cout<<"b) Tim Berners-Lee"<<endl;

	cout<<"c) Brendan Eich"<<endl;

	cout<<"d) Sergey Brin"<<endl;

	choice=getch();

	if(choice=='B'||choice=='b'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is b"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<")HTML stands for __________"<<endl;

	cout<<"a) HyperText Markup Language"<<endl;

	cout<<"b) HyperText Machine Language"<<endl;

	cout<<"c) HyperText Marking Language"<<endl;

	cout<<"d) HighText Marking Language"<<endl;

	choice=getch();

	if(choice=='a'||choice=='A'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<") What is the correct syntax of doctype in HTML5?"<<endl;

	cout<<"a) </doctype html>"<<endl;

	cout<<"b) <doctype html>"<<endl;

	cout<<"c) <doctype html!>"<<endl;

	cout<<"d) <!doctype html>"<<endl;

	choice=getch();

	if(choice=='D'||choice=='d'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<")  Which of the following is used to read an HTML page and render it?"<<endl;

	cout<<"a) Web server"<<endl;

	cout<<"b) Web network"<<endl;

	cout<<"c) Web browser"<<endl;

	cout<<"d) Web matrix"<<endl;

	choice=getch();

	if(choice=='C'||choice=='c'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is c"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") Which of the following tag is used for inserting the largest heading in HTML?"<<endl;

	cout<<"a) head"<<endl;

	cout<<"b) <h1>"<<endl;

	cout<<"c) <h6>"<<endl;

	cout<<"d) heading"<<endl;

	choice=getch();

	if(choice=='b'||choice=='B'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl<<endl;

		cout<<"The corrent answer is b"<<endl;

	}

	break;

	case 6:

	cout<<i+1<<") What is DOM in HTML?"<<endl;

	cout<<"a) Language dependent application programming"<<endl;

	cout<<"b) Hierarchy of objects in ASP.NET"<<endl;

	cout<<"c) Application programming interface"<<endl;

	cout<<"d) Convention for representing and interacting with objects in html documents"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

    }

    i++;

    

}

}

void result(){

	

	float percentage=0;

	cout<<"Student Name: "<<st.nam<<endl;

	cout<<"Roll no: "<<st.rollno<<endl;

	cout<<"Marks: "<<st.marks<<" out of 6"<<endl;

	percentage=100*st.marks/6;

	cout<<"Percentage: "<<percentage<<"%"<<endl;

	if(percentage>=50){

		cout<<"Status: Pass"<<endl;

	}

	else {

	cout<<"Status: Fail"<<endl;

    }

}



main(){

	char press,select;

	do

	{

	cout<<"\n\n\t\t****************"<<endl;

	cout<<"\t\t  QUIZ SYSTEM"<<endl;

	cout<<"\t\t****************"<<endl;

	cout<<"\t\tEnter name: ";

	gets(st.nam);

	cout<<"\t\tEnter rollno: ";

	gets(st.rollno);

	system("CLS");

	cout<<"\t\tMarks less than 50% will be fail"<<endl;

	cout<<"\n\nSelect option which subject's quiz you want to perform"<<endl;

	cout<<"1) C++"<<endl;

	cout<<"2) Java"<<endl;

	cout<<"3) Html"<<endl;

	select=getch();

	system("CLS");

	switch(select){

		case '1':

			cout<<"\t\tC++ Quiz"<<endl;

			cppp();

			system("CLS");

			cout<<"\t\tC++ Quiz Result"<<endl;

			result();

			break;

		case '2':

			cout<<"\t\tJava Quiz"<<endl;

		    java();

		    system("CLS");

		    cout<<"\t\tJava Quiz Result"<<endl;

		    result();

		    break;

		case '3':

			cout<<"\t\tHtml Quiz"<<endl;

			html();

			system("CLS");

			cout<<"\t\tHtml Quiz Result"<<endl;

			result();

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

	cout<<"Press y if you want to continue or any key to terminate"<<endl;

	press=getch();

	system("CLS");

   }while(press=='y'||press=='Y');

}


