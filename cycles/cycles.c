 #include <stdio.h>
 #include <stdbool.h> 

 int main() {
   // bool vindetta = true;
    //int e = 3;

    //while (vindetta == true) {
   //     printf("restart: "); 
   //     scanf("%d", &e);
//
  //      if (e == 4) { 
  //          vindetta = false;
  //      }
  //  }
  
  
  
  
  // float r = 578000;
  // while(r < 10) {
   // printf("%f\n", r);
  //  r /= 60;

   //}

// bool erorr = false; 
// do {
//     printf("да\n");
// //
// } while( erorr );


// int e ;

// for(int e = 6; e < 50; e++) {
//    if(e == 33)
//     break;   
    
//     // вышли из цикла

//     return e;
// }
    

//   printf("%d\n", e);

for(int y = 0; y < 44; y++) {
   // if (y == 3)
   //break;    //взламывает конструкцию (щстонавливает)
 if(y % 2 == 0)
// continue; ?//останавливает этот и пропускает конструкцию
printf("%d\n", y);

}


//     return 0; 
// }




//  int arr[] = {5, -56, 7, -777, -33};
// for(int p = 0; p < 2; p++ ) 
//    printf("%d\n", arr[p] );

printf("\n");
int min = arr[0];
int max = arr[0];
for(int p = 0; p < 5; p++){
if(arr[p] < min)
min = arr[p];
if(arr[p] > max)
max = arr[p];
}
printf("minimoom: %d\n", min);
printf("maximoom: %d\n", max);
   return 0;
}

