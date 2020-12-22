#include<stdio.h>
int main ()
{
    int pop, popmen, popwomen, poplit, poilit, litmen, ilitmen, litwomen, ilitwomen;
    pop = 80000;
   
    //population of men
    popmen = (52 * pop) / 100;
   
    //population of women
    popwomen = pop - popmen;
   
    //literate population
    poplit = (48 * pop) / 100;
   
    //literate population of men
    litmen = (35 * pop) / 100;
   
    ////literate population of women
    litwomen = poplit - litmen;
   
    //iliterate population of men
    ilitmen = popmen - litmen;
   
    //iliterate population of women
    ilitwomen = popwomen - litwomen;
   
    printf("\n\t\t\tDATA\n\n");
    printf("_____________________________________________\n\n");
    printf("Total population of the city     :\t%d\n\n",pop);
    printf("Total population of men          :\t%d\n\n",popmen);
    printf("Total population of women        :\t%d\n\n",popwomen);
    printf("Literate population of men       :\t%d\n\n",litmen);
    printf("Literate population of women     :\t%d\n\n",litwomen);
    printf("Illiterate population of men     :\t%d\n\n",ilitmen);
    printf("Illiterate population of women   :\t%d\n\n",ilitwomen);
    getch();
    return 0;
}




