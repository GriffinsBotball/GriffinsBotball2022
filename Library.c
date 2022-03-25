#include "Library.h"
#include <kipr/wombat.h>
#include <sys/time.h>

void Right_Turn_Roomba()
{
	set_create_total_angle(0);
    while( get_create_total_angle() >= -90 )
	{
		create_drive_direct(100,-100);
	}
}
void Left_Turn_Roomba()
{
	set_create_total_angle(0);    
    while( get_create_total_angle() <= 90 )
	{
		create_drive_direct(-100,100);
	}
}
void Bump_Square_Up()
{
    while(get_create_lbump() == 0 || get_create_rbump() == 0)
    {
        create_drive_direct(100,100);
    }
}

void Insult()
{
    printf("You Bad\\n");
}
void Compliment()
{
    printf("You Good\\n");
}
void Button_Square_Up()
{
    while(digital(1) == 0 || digital(0) == 0)
    {
        create_drive_direct(30,30);
    }
}


void Half_Right_Turn_Roomba()
{
	set_create_total_angle(0);
    while( get_create_total_angle() >= -45 )
	{
		create_drive_direct(100,-100);
	}
}
void Half_Left_Turn_Roomba()
{
	set_create_total_angle(0);    
    while( get_create_total_angle() <= 45 )
	{
		create_drive_direct(-100,100);
	}
}
void line_follow(int tophat_port, int threshold, int milliseconds) {
    struct timeval start, stop;
    gettimeofday(&start, NULL);
    gettimeofday(&stop, NULL);
    int diff_ms = (stop.tv_sec - start.tv_sec)*1000 + (stop.tv_usec - start.tv_usec)/1000;
    
    while(diff_ms<=milliseconds){
        while(analog(tophat_port) < threshold && diff_ms<=milliseconds){
            create_drive_direct(100,0);
            gettimeofday(&stop, NULL);
        	diff_ms = (stop.tv_sec - start.tv_sec)*1000 + (stop.tv_usec - start.tv_usec)/1000;
        }
        while(analog(tophat_port) > threshold  && diff_ms<=milliseconds){
            create_drive_direct(0,100);
            gettimeofday(&stop, NULL);
        	diff_ms = (stop.tv_sec - start.tv_sec)*1000 + (stop.tv_usec - start.tv_usec)/1000;
        }
    }
}
