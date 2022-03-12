#include "vex.h"

brain  Brain;

controller Controller1 = controller(primary);

/*motor leftMotor1 = motor (PORT10, ratio18_1, true);
motor leftMotor2 = motor (PORT9, ratio18_1, false);
motor leftMotor3 = motor (PORT8, ratio18_1, true);
motor leftMotor4 = motor (PORT7, ratio18_1, false);
motor leftMotor5 = motor (PORT6, ratio18_1, true);
motor_group leftDrive = motor_group (leftMotor1, leftMotor2, leftMotor3, leftMotor4, leftMotor5);

motor rightMotor1 = motor (PORT20, ratio18_1, false);
motor rightMotor2 = motor (PORT19, ratio18_1, true);
motor rightMotor3 = motor (PORT18, ratio18_1, false);
motor rightMotor4 = motor (PORT17, ratio18_1, true);
motor rightMotor5 = motor (PORT16, ratio18_1, false);
motor_group rightDrive = motor_group (rightMotor1, rightMotor2, rightMotor3, rightMotor4, rightMotor5); */

motor leftMotor1 = motor (PORT10, ratio18_1, false);
motor leftMotor2 = motor (PORT9, ratio18_1, true);
motor leftMotor3 = motor (PORT8, ratio18_1, false);
motor leftMotor4 = motor (PORT7, ratio18_1, true);
motor leftMotor5 = motor (PORT6, ratio18_1, false);
motor_group leftDrive = motor_group (leftMotor1, leftMotor2, leftMotor3, leftMotor4, leftMotor5);

motor rightMotor1 = motor (PORT20, ratio18_1, true);
motor rightMotor2 = motor (PORT19, ratio18_1, false);
motor rightMotor3 = motor (PORT18, ratio18_1, true);
motor rightMotor4 = motor (PORT17, ratio18_1, false);
motor rightMotor5 = motor (PORT16, ratio18_1, true);
motor_group rightDrive = motor_group (rightMotor1, rightMotor2, rightMotor3, rightMotor4, rightMotor5);

inertial inertialSensor = inertial (PORT5);

motor leftArmMotor = motor (PORT1, ratio36_1, false);
motor rightArmMotor = motor (PORT11, ratio36_1, true);
motor_group mogo = motor_group (leftArmMotor, rightArmMotor);

smartdrive Drivetrain = smartdrive(leftDrive, rightDrive, inertialSensor, 299.24, 330.2, 292.1, mm, 2.5);
                                                      //Wheel travel, trackwidth, wheelbase, measuring unit, gear ratio


digital_out frontValve = digital_out (Brain.ThreeWirePort.B);
digital_out backValve = digital_out (Brain.ThreeWirePort.A);
