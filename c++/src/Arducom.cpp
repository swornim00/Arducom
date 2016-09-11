#include"Arducom.h"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

Arducom::Arducom(string port){
  this->port = port;

}

string Arducom::getPort(){
  return this->port;
}

void Arducom::printPort(){
  cout << this->port <<endl;
}
void Arducom::resetPort(string port,int verbose= false){

  this->port = port;

  if(verbose == 1){
    cout << "Setting Port to "<< this->port <<endl;
    cout << "Done.." <<endl;
  }
}

void Arducom::send(string message){
  ofstream sFile;
  sFile.open(this->port);
  sFile << message;
  sFile.close();
}
