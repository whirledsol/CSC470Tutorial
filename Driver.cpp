// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Introduction to C++
// Description: Takes an input and tests if it is a perfect number
// Filename: isPerfect.cpp
// Last modified on: 2/14/2014


#include <iostream>
#include <fstream>
#include <cmath>
#include <cctype>
#include <string>
#include "Site.h"
#include "SiteList.h"
using namespace std;

SiteList parseFile(string filename);

int main(){
	cout<<"WHAT"<endl;
	string filename;
	SiteList mySites;
	
	cout<<"What file would like to input?"<<endl;
	cin>>filename;
	mySites = parseFile(filename);
	
	
	return 0;
}

SiteList parseFile(string filename){

	ifstream fin;
	SiteList mySites;
	
	fin.open(filename.c_str());
	if (fin.fail()){
		cout<<"The file couldn't open. Try again..."<<endl;
		main();
	}
	else{
		//we opened the file
		string test;
		getline(fin,test,',');
		
		cout<<"SURVEY SAYS X"<<test<<"X"<<endl;
	}
	
	return mySites;
}