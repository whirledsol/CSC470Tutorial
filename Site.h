// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 3
// Description: a header file for a Site object
// Filename: Site.h
// Last modified on: 2/24/2014
#include <string>

class Site {
	public:
        Site(int an_id, std::string a_name, std::string a_status, std::string a_remediationStatus, std::string a_contaminationType, long a_x, long a_y);  // Default constructor
        Site();
	int getId();
        long getX();
        long getY();
        std::string getStatus();
        std::string getName();
        std::string toString() const;
        double getDistance(long inputX, long inputY);
	//bool operator== (const Site& other) const;//DELETE TODO
    private:
        int id;
        std::string name;
        std::string status;
        std::string remediationStatus;
        std::string contaminationType;
        long x;
        long y;
		};