#include <stdio.h>
#include <string.h>
typedef struct{
char name[20];
int age;
}human;



int main()
{human a[10];
    for(int i=0;i<2;i++){
        printf("the name of human[%d]:",i+1);
        fgets(a[i].name,20,stdin);

        a[i].name[strlen(a[i].name)-1]='\0';
        printf("the age of the human[%d]",i+1);
        scanf("%d",&a[i].age);
        getchar();
    }
    for(int i=0;i<2;i++){
        printf("\n %s is %d years old",a[i].name,a[i].age);


    }
    return 0;
}
