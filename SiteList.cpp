// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Assignment 3
// Description: a seperate class to encapsulate an array of sites
// Filename: SiteList.cpp
// Last modified on: 2/24/2014
#include <string>
#include "Site.h"
#include "SiteList.h"
#include <iostream>
using namespace std;
/*
constructor
*/
SiteList::SiteList(){
 arrayLength = 0;
}


/*
adds a new site
*/
bool SiteList::addNew(){
  Site newSite;
  
  //ask the user for input
  
  bool status = addNew(newSite);
  return status;
  
}

/*
 * adds a new site with known Site
 */
bool SiteList::addNew(Site newSite){
  
  if(arrayLength<600){
    sites[arrayLength] = newSite;
    arrayLength++;
    return true;
  }
  else{
      return false;
  }
  
}
/*
 *returns the status of a point, whether it is a site or not
 */
string SiteList::getStatus(long x, long y){
  
  cout<<"NOT IMPLEMENTED YET"<<endl;
  return "";
  
}

/*
 * gets the size of the array
 */
int SiteList::size(){
    return arrayLength;
}

////////////////////////////////////////////////////////////////////
//      start PRIVATE METHODS
////////////////////////////////////////////////////////////////////

/*
 * finds the first index of a site in the list
 */
int SiteList::findSite(Site newSite){
  
  int index = -1; //set the index to the default value
  
  //go through array
  for(int i=0; i<arrayLength; i++){
    if(sites[i].getId() == newSite.getId()){
	//we found a match so index==i
	index = i;
    }
  }
  
  return index;
  
}

/*
 * finds the first site with the matching x and y
 */
int SiteList::findSite(long x, long y){
   int index = -1; //set the index to the default value
  
  //go through array
  for(int i=0; i<arrayLength; i++){
    if((sites[i].getX() == x) && (sites[i].getY() == y)){
	//we found a match so index==i
	index = i;
    }
  }
  
  return index; 
}

/*
 * controls the status prediction of a point
 */
string SiteList::predict(long x, long y){
  cout<<"NOT IMPLEMENTED YET"<<endl;
  return "";  
}

/*
 * returns the five closest sites
 */
int SiteList::getClosest(Site closest[], long x, long y){
  cout<<"NOT IMPLEMENTED YET"<<endl;
  return -1;  
}

/*
 * sorts the array based on distance 
 */
bool SiteList::sortArray(long x, long y){
  cout<<"NOT IMPLEMENTED YET"<<endl;
  return false;
  
}
