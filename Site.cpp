// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 3
// Description: class functions for a Site object
// Filename: Site.cpp
// Last modified on: 2/24/2014
#include <string>
using namespace std;
Site::Site(int id, string name, string status, string remediationStatus, string contaminationType, long x, long y){
   //constructor
   this->id = id;
   this->name = name;
   this->status = status;
   this->remediationStatus = remediationStatus;
   this->contaminationType = contaminationType;
   this->x = x;
   this->y = y;
   
   return;
}
