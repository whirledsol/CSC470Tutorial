// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 3
// Description: a header file for a Site object
// Filename: Site.h
// Last modified on: 2/24/2014

class Site {
	public:
		void toString() const;
		double getDistance(long x, long y);
		int id;
		string name;
		string status;
		string remediationStatus;
		string contaminationType;
		long x;
		long y;
		  
		Site(int id, string name, string status, string remediationStatus, string contaminationType, long x, long y);  // Default constructor
};