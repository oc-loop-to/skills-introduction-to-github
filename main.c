#include <stdio.h>
#include <stdlib.h>
enum day{samedi=1,dimanche=2,lundi=3,maredi=4,mercredi=5,jeudi=6,vendredi=7};
int main()
{enum day today;
printf("samedi=1,dimanche=2,lundi=3,maredi=4,mercredi=5,jeudi=6,vendredi=7");
printf("\nwhat day is today:");
scanf("%d",&today);



if(today==7 || today==1){
    printf("it is the weekend");

}else{

printf("it is work day");


}

    return 0;
}
