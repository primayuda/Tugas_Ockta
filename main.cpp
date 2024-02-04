#include <iostream>
#include "Drone.h"

using namespace std;

void getInformation(Drone *drone){
    cout << drone->getXPos() << " ";
    cout << drone->getYPos() << endl;
    cout << drone->getBatteryLevel() << endl;
    // cout << drone->getLandingStatus() << endl;

}
int main(){

    Drone *drone = new Drone;
    drone->takeOff();
    getInformation(drone);
    drone->moveDown();
    getInformation(drone);
    drone->moveUp();
    getInformation(drone);
    drone->moveRight();
    drone->moveRight();
    drone->moveRight();
    drone->moveRight();
    getInformation(drone);
    drone->moveRight();
    getInformation(drone);

    delete drone;
    
return 0;
}