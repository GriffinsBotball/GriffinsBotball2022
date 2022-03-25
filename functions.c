#include <kipr/wombat.h>
#include "functions.h"

int main()
{
    
    
    //wait_for_light(5); // Wait For Light
    
    shut_down_in(115);
    
    msleep(8000);
    
    enable_servos();
    set_servo_position(2, 50); // Open Claw
    msleep(500);
  
    set_servo_position(3, 950);// Lower Arm
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
    
    F1();
    
    B12();
    
    ao();
    
    R90(); 
    
    F12();
    
    L90();
    
    F12();  //  robot 
    
    F1();
    F1();
    
    SQR(); //squareing uop
    
    
    // moving.
    
    
    
    
    
  
    
    
   B6(); //backing up after squaring
   
   L90();
    
     // robot is approaching final.
    
   motor(0,-25);
   motor(1,25);  
   msleep(50);
    
    F6();
	F1();
    F1();
    
    ao();
    
    msleep(1000);
    
    motor(1,0);
    motor(0,25);
    msleep(50);
    
    motor(1,-10);
    motor(0,-10);
    msleep(50);
    
    
    ao();
        
    enable_servos();
	set_servo_position(2, 450); //Grab 
    msleep(500);
    
    
    set_servo_position(3, 800); 
    msleep(970);  
    
    enable_servos();
	set_servo_position(2, 600);  
    msleep(2000);
    
  
    
    
    ao();
    
    msleep(500);
    
    set_servo_position(2, 650);
    
    msleep(500);
    
    set_servo_position(2, 550);
   
    msleep(500);
    
    set_servo_position(2, 400);    

    msleep(500);
    
	set_servo_position(2, 450);
   
    msleep(500);
    
    set_servo_position(2, 300);
    
    msleep(500);
    
    set_servo_position(3, 950);// Highten Arm
    msleep(500);
    
    set_servo_position(2, 625);
    msleep(500);
    
    set_servo_position(3, 750);// Lower Arm
    msleep(500);
    
    set_servo_position(2, 650);
    msleep(500);

    set_servo_position(2, 700);
    msleep(500);
    
    motor(1,100);
    motor(0,-100);// shake it off 
    msleep(750);
    
    motor(1,-100);
    motor(0,100); // shake it off 
    msleep(500);
    
    motor(1,100);
    motor(0,-100);// ah ah
    msleep(750);
    
    motor(1,-100);
    motor(0,100);
    msleep(500);
    
    motor(1,100);
    motor(0,-100);
    msleep(750);
    
    motor(1,-100);
    motor(0,100);
    msleep(500);
    
    motor(1,100);
    motor(0,-100);
    msleep(750);
    
    motor(1,-100);
    motor(0,100);
    msleep(400);

    motor(1,100);
    motor(0,-100);
    msleep(300);
    
    motor(1,-100);
    motor(0,100);
    msleep(200);
    
    enable_servos();
    set_servo_position(3,1500);
    
    L90();
   
    motor(1,30);
    motor(0,25);
    msleep(1000);

    msleep(500);
    
    SQR();
    
    B6();
    
    L90();
    
    SQR();
    
    B6();
    
    
  
	 
    
    
    return 0;
}  


































































