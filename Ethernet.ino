#include <SPI.h> //Libraries used for utlising the Arduino hardware for network access
#include <Ethernet.h>

//This code was originally based on https://playground.arduino.cc/Code/Email/ and edited to add function for other triggers
//Such as button, or even adding motion triggers etc.
//For the section here, we must manually add the information

//First we must add the MAC address that is unique to the Ethernet Shield. This is found on the shield.
byte mac[] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06 };
IPAddress ip( 192, 168, 1, 100); //You need to edit this to an open IP address for your device to use.
IPAddress gateway( 192, 168, 1, 0 ) //This is the gateway IP address, which is your router's DHCP address.
IPAddress subnet( 255, 255, 255, 0 ) //Usually for most consumer homes, this will be 255 255 255 0 and does not need to be changed.

char server[] = "putyouremailaddressserver@domain.com"; //This is usually the address for the SMTP
int port = 995; //Change port that the server specifies. Usually TLS or SSL


EthernetClient client; //This calls the Ethernet's class Ethernetclient and calls it client

void setup() //The setup section here tells Arduino what settings will be set and which pins to be used for input and output here.
{
  Serial.begin(115200); //standard rate set for speed transmission of data.
  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);
  Ethernet.begin(mac, ip, gateway, gateway, subnet);
  
}

void loop()
{
  if (pin press)
    {
        if(sendEmail())
    }
}

bye sendEmail() //This will set up the format what what should be in the email.
//It follows this format https://www.samlogic.net/articles/smtp-commands-reference.htm
{
  client.println("EHLO *arduinoipaddresshere*"); // Extended hello protocol used for SMTP.
  client.println("auth login");
  client.println("what your base64 encoding user is")
  client.println("what your base64 encoding password is")

  client.println("MAiL From: put your email address here");
  client.println("RCPT To: put the recipients email.")
  client.println("DATA")

  client.println("To: You <you@yourdomain.com>");
  client.println("From: Me <me@mydomain.com>");
  client.println("Subject: What is the subject?");
  client.println("Hi From Arduino!");
  client.println("."); //Required to end message.
}

byte eRcv()
{

}