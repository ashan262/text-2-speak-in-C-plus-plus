#include<iostream>
#include<string>
#include<windows.h>
#include<ctime>
#include<conio.h>
using namespace std;

// function to greet the users according to time 
void greetings(){
	// the current date and time according to your system timezone
	time_t now = time(0);
	tm *time = localtime(&now);
	
	if(time->tm_hour < 12){
		cout<<"Good Morning My dear friend "<<endl;
		string phrase = "Good Morning My dear friend ";
		string command = "espeak \"" + phrase + "\"";
		const char* charCommand = command.c_str();
		system(charCommand);
		
	}
	else
	if(time->tm_hour >= 12 && time->tm_hour <=16){
		cout<<"Good Afternoon My dear friend "<<endl;
		string phrase = "Good Afternoon My dear friend ";
		string command = "espeak \"" + phrase + "\"";
		const char* charCommand = command.c_str();
		system(charCommand);
		
	}
	else
	if(time->tm_hour > 16 && time->tm_hour < 24){
		cout<<"Good Evening My dear friend "<<endl;
		string phrase = "Good Afternoon My dear friend";
		string command = "espeak \"" + phrase + "\"";
		const char* charCommand = command.c_str();
		system(charCommand);
		
	}
}
void datetime(){
	time_t now = time(0);
	char* dt = ctime(&now);
	cout<<"The date and time is "<<endl<<dt<<endl;
}
void whatToLearn(){
			string phrase = "Well friend so here you will learn how to convert text to speak in c++ using e spesk which is an open source sofwere";
	string command = "espeak \""+phrase+"\"";
	const char* charCommand=command.c_str();
	system(charCommand);
}
main(){
greetings();
whatToLearn();
	 string phrase = "This is a small program develop for learning pourpose by Ashan Khan The Email adderss of Ashan Khan is khan.ashan.khan@gmail.com";
	string command = "espeak \""+phrase+"\"";
	const char* charCommand=command.c_str();
	system(charCommand);
cout<<"Develop By Ashan Khan"<<endl;
cout<<"Contact Us if any help need to you."<<endl;
cout<<"Email Adderess :  khan.ashan.khan@gmail.com"<<endl;
 getch();
}