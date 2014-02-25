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
Site::Site(int an_id, string a_name, string a_status, string a_remediationStatus, string a_contaminationType, long a_x, long a_y){
   //constructor
   id = an_id;
   name = a_name;
   status = a_status;
   remediationStatus = a_remediationStatus;
   contaminationType = a_contaminationType;
   x = a_x;
   y = a_y;

}
