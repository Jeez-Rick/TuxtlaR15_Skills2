#include "Components.h"

void calibrating(void){
  Brain.Screen.print("Device initialization...");
  Brain.Screen.setCursor(2, 1);
  wait(200, msec);
  inertialSensor.calibrate();
  Brain.Screen.print("Calibrating drivetrain inertial");
  while (inertialSensor.isCalibrating()) {
    wait(25, msec);
  }
  Brain.Screen.clearScreen();
  Brain.Screen.setCursor(1,1);
  wait(50, msec);
  Brain.Screen.clearScreen();

}


void settingStop (){
  Drivetrain.setStopping(hold);
  mogo.setStopping(hold);

}

void going(int whereTo, double howMuch, int speed){
  if(whereTo == 1) {
    Drivetrain.setDriveVelocity(speed, pct);
    Drivetrain.driveFor(forward, howMuch, inches);

  } else if(whereTo == 2) {
    Drivetrain.setDriveVelocity(speed, pct);
    Drivetrain.driveFor(reverse, howMuch, inches);

  }
}

void settingVelocity(){
  mogo.setVelocity(100, pct);
  Drivetrain.setDriveVelocity(100, pct);
  Drivetrain.setTurnVelocity(100, pct);
  
}

void settingTorque(){
  mogo.setMaxTorque(100, pct);
  leftDrive.setMaxTorque(100, pct);
  rightDrive.setMaxTorque(100, pct);
  
}

void turning (double howMuch, int speed){
  Drivetrain.turnToRotation(howMuch, degrees);
  Drivetrain.setTurnVelocity(speed, pct);

}

void mogito(int whereTo, double howMuch){
  if(whereTo == 1){
    mogo.spinFor(forward, howMuch, degrees);

  } else if (whereTo == 2) {
    mogo.spinFor(reverse, howMuch, degrees);

  }
}


void rightTurning (){
  rightDrive.spin(reverse, 10, percent);
  leftDrive.spin(forward, 10, percent);
  task::sleep(2500);

}

void turningThread (){
  thread MyThread = thread(rightTurning);

}
