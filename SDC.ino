#include <Servo.h>


#define LMF  5
#define LMB  4
#define LMS  3

#define RMF  6
#define RMB  7
#define RMS  9

const int trig = 11;
const int echo = 12;

const int servo_pin = 10;

int forw = 1;
float dist=0;
float new_dist=0;
float distance=0;
int ang =0;
int turn_angle;
float thres = 40;
int i=0;
float turn_delay = 4.4;

float left_dist = 0;
float right_dist = 0;

Servo spintron;


void setup() {

  Serial.begin(115200);

  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);

  pinMode(LMF, OUTPUT);
  pinMode(LMB, OUTPUT);
  pinMode(LMS, OUTPUT);
  pinMode(RMF, OUTPUT);
  pinMode(RMB, OUTPUT);
  pinMode(RMS, OUTPUT);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  

  digitalWrite(LMF, LOW);
  digitalWrite(LMB, LOW);
  analogWrite(LMS, 255);

  digitalWrite(RMF, LOW);
  digitalWrite(RMB, LOW);
  analogWrite(RMS, 255);

  spintron.attach(servo_pin);
  delay(100);
  distance = flight(90);
}



void loop() {
  left_dist = 0;
  right_dist = 0;
  distance = flight(90);
  // Serial.println(distance);

  while(distance < thres){
    brake(0);
    turn_angle = 0;
    
  // for(i=0;i<3;i++){
  //   ang = i*90;
  //    if (ang != 90){
  //   new_dist = flight(ang);
  //   Serial.println(new_dist);

  //   if(new_dist>distance && new_dist>thres+5){
  //     turn_angle = ang-90;
  //     distance = new_dist;
  //   }
  //    }
  // }
    left_dist = flight(180);
    right_dist = flight(0);

    if(left_dist>right_dist && left_dist>thres){
      turn_angle= 90;
    }
    else if(left_dist<right_dist && right_dist>thres){
      turn_angle = -90;
    }

  

  if(turn_angle==0){
        Serial.println("Back");
        backward(255);
        delay(300);
        brake(0);
        if(left_dist>right_dist && left_dist>distance){
      turn_angle= 157;
      }
      else if(left_dist<right_dist && right_dist>distance){
      turn_angle = -157;
      }
  }

  if(turn_angle < 0){
    turn_right(255, abs(turn_angle));
    Serial.println("Right");
  }

  else if(turn_angle > 0){
    turn_left(255, abs(turn_angle));
    Serial.println("Left");
  }

  distance = flight(90);
  Serial.println(distance);

  }

  forward(255);
  
}



float flight(int angle){
  
  spintron.write(angle);
  delay(400);

  digitalWrite(trig, LOW);
  delay(0.001);

  digitalWrite(trig, HIGH);
  delay(0.001);
  
  digitalWrite(trig, LOW);
  float dist = pulseIn(echo, HIGH);
  return (dist*0.034/2);
}



void forward(int speed){
  analogWrite(LMS, speed);
  analogWrite(RMS, speed);

  
  digitalWrite(RMB, LOW); 
  digitalWrite(LMB, LOW); 
  
  digitalWrite(LMF, HIGH);
  digitalWrite(RMF, HIGH);
  

}



void backward(int speed){
  analogWrite(LMS, speed);
  analogWrite(RMS, speed);

  digitalWrite(LMF, LOW);
  digitalWrite(RMF, LOW);

  digitalWrite(LMB, HIGH);
  digitalWrite(RMB, HIGH);    

}




void brake(int period){
  analogWrite(LMS, 0);
  analogWrite(RMS, 0);

  digitalWrite(LMF, LOW);
  digitalWrite(LMB, LOW);

  digitalWrite(RMF, LOW);
  digitalWrite(RMB, LOW);  
  
  delay(period);  

}




void turn_left(int speed,int period){
  brake(0);
  analogWrite(LMS, speed);
  analogWrite(RMS, speed);

  digitalWrite(LMF, LOW);
  digitalWrite(RMB, LOW);

  digitalWrite(LMB, HIGH);
  digitalWrite(RMF, HIGH);  
  
  delay(period*turn_delay);  

  digitalWrite(LMB, LOW); 
  digitalWrite(RMF, LOW);

}




void turn_right(int speed, int period){
  brake(0);
  analogWrite(LMS, speed);
  analogWrite(RMS, speed);

  
  digitalWrite(LMB, LOW);
  digitalWrite(RMF, LOW);

  digitalWrite(LMF, HIGH);
  digitalWrite(RMB, HIGH);  
  
  delay(period*turn_delay);

  digitalWrite(RMB, LOW); 
  digitalWrite(LMF, LOW);

}

