#include <kipr/wombat.h>
#include "functions.h"

int main()
{
    enable_servos();
    set_servo_position(2, 50); // Open Claw
    msleep(500);

    set_servo_position(3, 850);// Lower Arm
    msleep(500);


    SC(); // Close Claw
    set_servo_position(2, 400); // Close Claw
    msleep(500);


    B12(); // Pull Back

    set_servo_position(2, 50); // Open Claw
    msleep(500);

    // Get into position
    set_servo_position(3, 1600); //ghuoae	
    
    motor(0, 50);
    motor(1, 25);
    msleep(2000);
    
    motor(0, 25);
    motor(1, 50);
    msleep(2000);
    
    B12();
    
    ao();
    
    R90(); 
    
    F12();
    
    L90();
    
    F12();  //  robot 
    
    F1();   // is 
    
    F1();   // still
    
    F1();   // moving.
    
    L90(); // robot is approaching final.
    
    // those darn glacers keep gettin in the floor boards.
    
    F6();
    
    set_servo_position(3, 750);
    msleep(500);

    SC(); // Close Claw
	
    enable_servos();
	set_servo_position(2, 618); // BRO JACOB KEEPS SAYING DAN, my names DAN and i am DAN i would weally wike to see a DAN. 
    msleep(500);
    
    set_servo_position(3, 1200);
    msleep(1000);
    
    printf(" yer a nerd ");
    
    
    return 0;
}  
