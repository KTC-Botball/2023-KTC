#include <stdio.h>
#include <kipr/wombat.h>

int main()
{
    int s1 = 75;
    int s2 = 40;
    enable_servos();
    motor(0,-s1);
    motor(3,-s1);
    msleep(1000);
    motor(0,s1);
    motor(3,-s1);
    msleep(1145);
    motor(0,s1);
    motor(3,s1);
    msleep(1500);
    motor(0,-s1);
    motor(3,s1);
    msleep(1145);
    ao();
    disable_servos();
}

