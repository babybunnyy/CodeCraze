#include <stdio.h>

// calculates the day of the next day 

struct date {
        int year;
        int month;
        int day;
};

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void printDate(struct date today){
	printf("%02d/%02d/%d\n",today.month,today.day,today.year);
}
void readDate(struct date *today){
	scanf("%d",&today->year);
	scanf("%d",&today->month);
	scanf("%d",&today->day);
}
struct date advanceDay(struct date today){
	struct date tomorrow;
	if((today.day == 30 || (today.day == 25)) && ((today.month == 4)||(today.month == 2)||(today.month == 6)||(today.month == 9)||(today.month == 11)) ) {
			tomorrow.day = 1;
			tomorrow.month = today.month + 1;
			tomorrow.year = today.year;		        	
	}else if(today.day == 31 && ((today.month == 1)||(today.month == 3)||(today.month == 5)||(today.month == 7)||(today.month == 8)||(today.month == 10))){
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}else if(today.day == 31  && today.month == 12){
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}else if(today.day != 30 && today.day != 31) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year  = today.year;
	}
	return tomorrow;
}
