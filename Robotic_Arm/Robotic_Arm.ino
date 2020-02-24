#include <Servo.h>
//Enter integer values corrosponding to each finger to move them

//Every servo object defines a finger
Servo f1;
Servo f2;
Servo f3;
Servo f4;
Servo f5;

char finger;
//Check status of each finger
int fs1=0;
int fs2=0;
int fs3=0;
int fs4=0;
int fs5=0;


void setup() {
  //Initialise Serial Comm
  Serial.begin(57600);
  //All servos attached to their respective fingers
  f1.attach(3);
  f2.attach(5);
  f3.attach(6);
  f4.attach(9);
  f5.attach(10);
  //Initialise all servos to 0
  f1.write(0);
  f2.write(0);
  f3.write(0);
  f4.write(0);
  f5.write(0);

  Serial.println("Robotic ARM Ready");
}

void loop() {
  if(Serial.available()>0)
  {
    finger=Serial.read();
    if(finger=='1')
    {
      if(fs1==0)
      {
        f1.write(180);
        fs1=1;
        Serial.println("Finger 1 Closed");
      }
      else
      {
        f1.write(0);
        fs1=0;
        Serial.println("Finger 1 Opened");
      }
    }
    if(finger=='2')
    {
      if(fs2==0)
      {
        f2.write(180);
        fs2=1;
        Serial.println("Finger 2 Closed");
      }
      else
      {
        f2.write(0);
        fs2=0;
        Serial.println("Finger 2 Opened");
      }
    }
    if(finger=='3')
    {
      if(fs3==0)
      {
        f3.write(180);
        fs3=1;
        Serial.println("Finger 3 Closed");
      }
      else
      {
        f3.write(0);
        fs3=0;
        Serial.println("Finger 3 Opened");
      }
    }
    if(finger=='4')
    {
      if(fs4==0)
      {
        f4.write(180);
        fs4=1;
        Serial.println("Finger 4 Closed");
      }
      else
      {
        f4.write(0);
        fs4=0;
        Serial.println("Finger 4 Opened");
      }
    }
    if(finger=='5')
    {
      if(fs5==0)
      {
        f5.write(180);
        fs5=1;
        Serial.println("Finger 5 Closed");
      }
      else
      {
        f5.write(0);
        fs5=0;
        Serial.println("Finger 5 Opened");
      }
    }
  }
}
