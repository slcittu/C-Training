
//function to calculate backup period in hours based on discharge rate
struct batterySystem *backupTime(struct batterySystem *battery)
{
    const float threshold=6.0;
    float remaining=battery->voltage-threshold;
    float backup=remaining/battery->dischargeRate;
    int hours=(int)backup;
    int minutes=(int)((backup-hours)*60);

    if(remaining>0)
    {
        printf("The esitmated backup period is:%d hours %d minutes\n",hours,minutes);
    }
    else
    {
        printf("Battery voltage is too low.Please Charge the battery.\n");
    }
    return battery;
}