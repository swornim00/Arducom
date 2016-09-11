#ifndef H_ARDUCOM_H

#define H_ARDUCOM_H
#include<string>

class Arducom{
private:
  std::string port;

public:
  Arducom(std::string port);
  std::string getPort();
  void printPort();
  void resetPort(std::string port,int verbose);
  void send(std::string message);

};

#endif
