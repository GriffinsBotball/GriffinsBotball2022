#include "functions.h"
#include <kipr/wombat.h>

void R90()
{






    cmpc(0);
    while(gmpc(0)<2200*1) //Left 90
    {
        motor(0,50);
        motor(3,-1);
    }
    ao();
}

void L90()
{



    cmpc(1);
    while(gmpc(1)<2200*1) //Right 90
    {
        motor(1,50);
        motor(0,-1);
    }
    ao();
}

void F12()
{


    cmpc(0);
    cmpc(1);
    while(gmpc(1)<2420*1 || gmpc(0)<2420*1) //Multiply by 1 for 12 inches. Makes straight line.
    {
        motor(0,50);
        motor(1,50);
    }
    ao();

}

void B12()
{


    cmpc(0);
    cmpc(1);
    while(gmpc(1)>-2420*1 || gmpc(0)>-2420*1) //Multiply by 1 for 12 inches. Makes straight line.
    {
        motor(0,-50);
        motor(1,-50);
    }
    ao();



}

void SC()
{
    enable_servos();
    set_servo_position(2, 30);
    msleep(50);
    set_servo_position(2, 40);
    msleep(50);
    set_servo_position(2, 50);
    msleep(50);
    set_servo_position(2, 100);
    msleep(50);
    set_servo_position(2, 200);
    msleep(50);
    set_servo_position(2, 300);
    msleep(50);

}

void F6()
{


    cmpc(0);
    cmpc(1);
    while(gmpc(1)<2420/2 || gmpc(0)<2420/2) // Six-Inch Makes straight line.
    {
        motor(0,50);
        motor(1,50);
    }
    ao();
}


void B6()
{


    cmpc(0);
    cmpc(1);
    while(gmpc(1)>-2420/2 || gmpc(0)>-2420/2) //Multiply by 1 for 12 inches. Makes straight line.
    {
        motor(0,-50);
        motor(1,-50);
    }
    ao();



}


void SO()
{
    enable_servos();
    set_servo_position(2, 300);
    msleep(50);
    set_servo_position(2, 200);
    msleep(50);
    set_servo_position(2, 100);
    msleep(50);
    set_servo_position(2, 50);
    msleep(50);
    set_servo_position(2, 40);
    msleep(50);
    set_servo_position(2, 30);
    msleep(50);

}

void F1()
{


    cmpc(0);
    cmpc(1);
    while(gmpc(1)<2420/12 || gmpc(0)<2420/12) //Multiply by 1 for 12 inches. Makes straight line.
    {
        motor(0,50);
        motor(1,50);
    }
    ao();

}


void B1()
{


    cmpc(0);
    cmpc(1);
    while(gmpc(1)>-2420/12 || gmpc(0)>-2420/12) //Multiply by 1 for 12 inches. Makes straight line.
    {
        motor(0,-50);
        motor(1,-50);
    }
    ao();



}



































































