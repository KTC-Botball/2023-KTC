#include <stdio.h>
#include <kipr/wombat.h>

int main()
{
    int s1 = 75;
    int s2 = 40;
    enable_servos();
    set_servo_position(0,1460);
    msleep(1000);
    set_servo_position(3,800);
    msleep(1000);
    set_servo_position(0,800);
    msleep(1000);
    set_servo_position(3,1300);
    msleep(1000);
    set_servo_position(0,852);
    msleep(1000);
    motor(0,-s1);
    motor(3,-s1);
    msleep(1145);
    ao();
    motor(0,-s1);
    motor(3,s1);
    msleep(1145);
    ao();
    set_servo_position(3,800);
    msleep(1000);
    motor(0,s1);
    motor(3,-s1);
    msleep(1145);

    ao();
    disable_servos();
}
