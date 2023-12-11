#include <stdio.h>
#include <stdbool.h>

// The program is designed to monitor the manufacturing process of a drug that heals wounds quickly
// The program continuously reads temperatures from a monitoring device, provided every 15 seconds.
// The device sends a value of -999 to indicate the completion of the chemical reaction.

int main(void){
        int mini,maxi;
        scanf("%d %d",&mini,&maxi);
        int temp;
        bool noalert = true;
        while(noalert){
                scanf("%d",&temp);
                if(temp >= mini && temp <= maxi) {
                        printf("Nothing to report\n");
                } else if ((temp < mini || temp > maxi) && temp != -999){
                        printf("Alert!\n");
                        noalert = false;
                } else if (temp == -999){
                        noalert = false;
                }
        }
        return 0;
}
