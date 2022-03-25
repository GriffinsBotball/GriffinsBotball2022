#include <kipr/wombat.h>
#include "Library.h"
int main()
{
    int tophat_port = 1 ;
    int threshold = 3800 ;
    int milliseconds = 9000 ;
        
    enable_servos();
    set_servo_position(0,950);
    msleep(1000);
    
    //wait_for_light();
    shut_down_in(115);
    create_connect();
    
    set_servo_position(0,35); //set servos
    msleep(1000);
    
    create_drive_direct(-100,-100); //forward 1
    msleep(2000);
    
    Half_Right_Turn_Roomba(); //turn half right 
    
    create_drive_direct(-100,-100);
    msleep(1000);
    
    Half_Left_Turn_Roomba(); //turn half left
    
    create_drive_direct(100,100);
    msleep(1500);
    
    Right_Turn_Roomba(); //right turn
    
    create_drive_direct(-100,-100); //forward 2
    msleep(1000);
    
    Button_Square_Up(); //square up
    
    create_drive_direct(0,0);
    msleep(1000);
    
    set_servo_position(0,2000);
    msleep(1000);
    
    create_drive_direct(-100,-100);
    msleep(10000); 
    
   
           
    
    ao();
    
    
    
    
    
    
    create_disconnect();
    return 0;
}

