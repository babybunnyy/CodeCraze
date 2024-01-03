#include <stdio.h>
// Use an array of structures
struct point{
        int x;
        int y;
};
void readtrig(struct point *);
void printrig(struct point *);
int main(void){
        struct point trig[3];
        readtrig(&trig[0]);
        printrig(trig);
        return 0;
}
void readtrig(struct point * p ){
        for(int i=0;i<3;i++){
                printf("Enter x and y : ");
                scanf("%d %d",&p[i].x,&p[i].y);
        }
}
void printrig(struct point *p){
        for(int i=0;i<3;i++){
                printf("(%d,%d)\n",p[i].x,p[i].y);
        }
}
