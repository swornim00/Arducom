<?php
/*
Wrriten By Swornim Shrestha
Monday September 12, 2016
9:54 PM Nepal
Email:srestaswrnm@gmail.com

*/
// Serial Communication class

class Arducom{
  private $port;
  //Construct to assign serial port
  public function __construct($port){
    $this->port = $port;
  }

  //returns port name
  public function getPort(){
    return $this->port;
  }

  //Prints the port name
  public function printPort(){
    return $this->port;
  }


  //reset the port name
  public function resetPort($port){
    $this->port = $port;
  }

  //Send Buffer to Serial Port
  public function sendBuffer($buffer){
    $sFile = fopen($this->port,"rb");
    fwrite($sFile,$buffer);
    fclose($sFile);
  }

  //Get Buffer from serial port
  public function getBuffer(){
    $sFile = fopen($this->port,"rb");
    while(!feof($sFile)){
      return fgets($sFile);
    }
  }

}



?>
