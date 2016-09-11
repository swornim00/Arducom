#include<iostream>
#include"Arducom.h"
using namespace std;
int main(){

Arducom Arduino("COM4");
Arduino.printPort();
Arduino.resetPort("/dev/ttyACM0",0);
Arduino.printPort();
}
