/*Serial.availableForWrite()/

// int incomingByte=0;

// void setup() {
//  Serial.begin(9600);
//  Serial.print("I received:");// opens serial port, sets data rate to 9600 bps
//    }
//  void loop() {
//    if (Serial.available() > 0)  // check if data is available
//     {
    
//      incomingByte = Serial.availableForWrite();      // read the incoming byte:
     
                                            
//   }
//  }
/*for serial.available/

// int incomingByte = 0;

// void setup() {
//   Serial.begin(9600);
// }
// void loop() {
//   if (Serial.available() > 0) // check if data is available
//    {
//     incomingByte = Serial.read(); // read the incoming byte
//     Serial.print("Hello ");
//     Serial.println((char)incomingByte);
//   }
// }

/*serial.find()/
// void setup() {
//   Serial.begin(9600);	// set serial port at desired value
// }

// void loop() {
//   while (Serial.available()) {
//     boolean b=Serial.find('1');        //reads data from serial buffer until target is found
    if (b) {
       Serial.println("Found!");
       delay(2000);       
     }
     else {
       Serial.println("not there");
        delay(2000);
// }
/*serial.readstring/
// void setup() {
//   Serial.begin(9600);
// }

// void loop() {
//   // check if data is available
//   if (Serial.available() > 0) {
//     String incomingString = Serial.readString(); // read the incoming string:
//     Serial.print("how are you "); // prints the received data
//     Serial.println(incomingString);
//   }
// }

//gettimeout()/
// void setup() {
//   Serial.begin(9600); 
//   Serial.println(Serial.getTimeout()); // print the default value
//   Serial.setTimeout(1500);             // set new value to 1500 milliseconds
//   Serial.println(Serial.getTimeout()); // print the new value
// }
// void loop(){

// }


/*Serial.flush/


// int incomingByte = 0; // for incoming serial data

// void setup() {
//   Serial.begin(9600); 
// }
//  void loop() {
//   if (Serial.available() > 0) // check if data is available
//    {
//    incomingByte = Serial.read(); // read the incoming byte
//        Serial.print("Hello ");
//    Serial.println((char)incomingByte);
//    Serial.flush();
//   }
//  }
/*Serial.readString*/
// void setup() {
//   Serial.begin(9600);
// }

// void loop() {
//   Serial.println("Enter data:");
//   while (Serial.available() == 0) {}     //wait for data available
//   String teststr = Serial.readString();  //read until timeout
//   teststr.trim();                        // remove any \r \n whitespace at the end of the String
//   if (teststr == "red") {
//     Serial.println("A primary color");
//   } else {
//     Serial.println("Something else");
//   }
// }

void setup() 
{
    Serial.begin(9600); // Set the baud rate to 9600
     
}
void loop() {
    char readData[10]="hi how are ";//The character array is used as buffer to read into.
    int x = Serial.readBytes(readData,10);//It require two things, variable name to read into, number of bytes to read.
    Serial.println(x);//display number of character received in readData variable.
    Serial.println(readData);//send back the 10 bytes of data.
    delay(500);
}

