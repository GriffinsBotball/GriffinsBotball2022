#include "Library.h"
#include <kipr/wombat.h>

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
    while(digital(8) == 0 || digital(9) == 0)
    {
        create_drive_direct(100,100);
    }
}