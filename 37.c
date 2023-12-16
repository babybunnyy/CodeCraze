#include <stdio.h>
#include <stdlib.h>
// allocating memory for polygon
struct point {
	int x;
	int y;
};
void readpoly(struct point *,int);
void printpoly(struct point *,int);
int main(void){
	struct point *polygon;
	int vertices;
	printf("how many vertices does your poly needs?: ");
	scanf("%d",&vertices);
	polygon = (struct point *)malloc(vertices*(sizeof(struct point)));
	readpoly(polygon,vertices);
	printpoly(polygon,vertices);
}
void readpoly(struct point * polygon,int n){
	printf("enter the coordinates for %d vertices: ",n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&polygon[i].x,&polygon[i].y);
	}
}
void printpoly(struct point *polygon,int n){
	for(int i=0;i<n;i++){
		printf("%d %d\n",polygon[i].x,polygon[i].y);
	}
}
