#include <iostream>
#include <Stepper.h>
const int stepPerRev = 200;
Stepper myStepper = Stepper(stepPerRev, 4, 3);

void setup() {
    myStepper.setSpeed(150);
}

void loop() {
    myStepper.step(stepPerRev);
    
}

int main() {
    
}
