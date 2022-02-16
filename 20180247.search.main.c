#include <stdio.h>
#include <stdlib.h>

int LSearch(int array[],int n, int key){
    int i;
    for( i=0; i < n; i++){
        if(array[i] >= key ){
            return i;
        }
    }
    return -1;
}

int main()
{
    int counting, counter =1;
    int k;
    int i;
    int n;
    printf("\nenter the number of slices and travellers : \n");
    scanf("%d",&n);
    //int a[n],b[n];
    int arr[n],arr2[n];
    printf("\nEnter elements of slices sizes : \n");
    int s =0;

    for(s =0; s < n; s++){
        printf("Enter arr[%d] : ",s);
        scanf("%d",&arr[s]);
    }

    printf("\nEnter elements of satisfactions factors : \n");

    int t =0;

    for(t =0; t < n; t++)
    {
        printf("Enter arr2[%d] : ",t);
        scanf("%d",&arr2[t]);
    }
   //////////////////////////////////////
   while(i < n ){
           printf("\nEnter element of satisfaction factor to search : ");
            scanf("%d",&t);

  int result= LSearch(arr, n , t);
   for(int j = 0; j < n; j++){
        if( t == arr[j]){
    arr[j]= 0;
   }
    }
   if (result == -1){
        printf("not possible\n");
        i++;
     }
        else{
         printf("possible\n");
                   i ++;
                  counting=counter++;
        }
   }
    if(counting == n){
                 printf("everyone is  happy\n");
        }
        else
            printf("everyone is not happy\n");

     return 0;
}
