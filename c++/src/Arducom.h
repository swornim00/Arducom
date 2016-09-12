/*

Wrriten By Swornim Shrestha
Monday September 12, 2016
2:54 PM Nepal
Email:srestaswrnm@gmail.com


*/
#ifndef H_ARDUCOM_H

#define H_ARDUCOM_H
#include<string>

class Arducom{
private:
  std::string port;


public:
  //Contsructor
  Arducom(std::string port);
  //To get what port you are using
  std::string getPort();
  //To Print which port you are using
  void printPort();
  //To reset the port to new one.. Expects two parameter
  void resetPort(std::string port,int verbose);
  //To send buffer
  //String Buffer
  bool sendBuffer(std::string buffer);
  //Integer Buffer
  bool sendBuffer(int buffer);

  //Get Buffer string!
  std::string getBuffer();

};

#endif
