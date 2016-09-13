/*

Wrriten By Swornim Shrestha
Monday September 12, 2016
2:54 PM Nepal
Email:srestaswrnm@gmail.com


*/
#include"Arducom.h" //Arducom Header File
#include<iostream> //iostream
#include<string> //String Header
#include<fstream> //File Header

using namespace std;
using namespace ac;
/*

  Constructor
  Declaring the class it expects a parameter.
  The parameter is port name.

*/

Arducom::Arducom(string port){
  this->port = port; //Selcting the port
}

/*

  getPort() is a function to get serial port name currently working on.
  getPort() returns a string.

*/

string Arducom::getPort(){
  return this->port;
}

/*

  printPort() is a function that print the serial port name. This fuction doesn't return any kind of data.

*/

void Arducom::printPort(){
  cout << this->port <<endl;
}

/*

  resetPort() is used to reset the portname. It expects two parameter first  expects and second expects verbose mode.
  1 is for on and 0 for off. If the verbose mode is on then it prints the processes.

*/

void Arducom::resetPort(string port,int verbose= false){

  this->port = port;
  //Checking if the verbose mode in on or off

  if(verbose == 1){ // if the verbose mode is on.
    cout << "[*] Arducom: Setting Port to "<< this->port <<endl;
    cout << "[*] Arducom: Done.." <<endl;
  }
}

/*

  sendBuffer() function is used to send the buffer. It expects a parameter i.e message to be sent.
  And it returns true if sent and false if there is anykind of error.

*/
bool Arducom::sendBuffer(string buffer){
  ofstream sFile; //Making the file object
  sFile.open(this->port); //Opening the file
  if(sFile.is_open()){ //Checking if the file is open

    sFile << buffer; //Writing to the file or Serial Port

  }else{
    cout << "Error:Cannot Open The Serial Port!\n"; //Dispaly Error
    return false; //return false
  }

  sFile.close(); //Closing the file or serial port
  return true;  // return true and send the buffer
}

// for integer value
bool Arducom::sendBuffer(int buffer){
  ofstream sFile; // making a file object
  sFile.open(this->port); //opening the file
  if(sFile.is_open()){ //checking if the file is open

    sFile << buffer; //Writing Buffer to the file
    sFile.close(); //Closing the file

  }else{
    return false; // Returning false
  }

  return true;  // return true and send the buffer
}

/*

getBuffer() reads the serial commnication buffer and then Prints the buffer to screen.

*/

string Arducom::getBuffer(){
  string sLine; // Declaring string
  ifstream sFile; //Making a file object
  sFile.open(this->port); //Opening the file or port

  if(sFile.is_open()){ //Checking if the file is open or not

    while(!sFile.eof()){ // Checking the end of file
      getline(sFile,sLine); //Getting line of the file
      return sLine; //Returning the line data
    }
  }else{
    return 0; //Returning false
  }
}
