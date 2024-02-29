#include <stdio.h>
int main(void){
        int n;
        scanf("%d",&n);
        FILE *file;
        file = fopen("myGrades.txt","r");
        int num;
        while((fscanf(file,"%d",&num)!=EOF));
        fclose(file);

        if(n != num){
                file = fopen("myGrades.txt","a");
                fprintf(file," %d",n);
                fclose(file);
        }
        file = fopen("myGrades.txt", "r");
        while (fscanf(file, "%d", &num) != EOF){
                printf("%d ", num);
        }
        fclose(file);

        return 0;
}
