#include <kipr/wombat.h>
#include "Library.h"
int main()
{
    enable_servos();
    set_servo_position(0,1612);
    msleep(1000);
    
    //wait_for_light();
    shut_down_in(115);
    create_connect();
    
    set_servo_position(0,35); //set servos
    msleep(1000);
    
    create_drive_direct(-100,-100); //forward 1
    msleep(2000);
    
    Right_Turn_Roomba(); //turn right
    
    create_drive_direct(-100,-100); //forward 2
    msleep(1000);
    
    Button_Square_Up(); //square up
    
    create_drive_direct(-100,-100);
    msleep(10000); //advance and pick up poms
    
    
    ao();
    
    
    
    
    
    
    create_disconnect();
    return 0;
}
