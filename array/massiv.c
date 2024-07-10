#include <stdio.h>

int main() {
    int array[5] = {6, 5, 7, 89, 65};
    printf("%d\n",array[2]);


    char massiv_stroc1[9] = "good";   // обьвила масив, задала массив 
    char massiv_stroc2[4] = {'B', 'a', 'y' };

    printf("%c \n %c \n", massiv_stroc1[3], massiv_stroc2[2]); // обратилась к элементу массива по его индексу 

    massiv_stroc1[3] = 's';

    printf("%s \n", massiv_stroc1);




    massiv_stroc2[2] = 'd';

    printf("%s  \n", massiv_stroc2);



    int arr[4] = {43, 56, 7, 678 };
    arr[0] = 545;
    printf("%d\n", arr[0]);

    float hope[2];
    hope[0] = 3.4f;
    hope[1] = 4.5f;

    char jin[] = "foodbol";
    char jin1[] = {'g', 'o', 'o', 'd'};

    jin[1] = 'j';
    printf("%s\n", jin);

    printf("%c\n", jin[0]);

    int jin45[5][3] = { // двумернный массив 
        {45, 56, 4},      //0
        {33, 2, 1},       //1[1] = 2,
        {12, 66, 3},
        {23, 451, 332},      //3
        {77, 13, 44},         //4
  
    };
    jin45[1][1] = 7;
    printf("%d\n", jin45[2][1]);








































































    return 0;

    };



    
