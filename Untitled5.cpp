/*
   This program will gets a string from the user and then displays it in reverse order.
   
   Author: Victor Manuel Gastelum Huitzil
   e-mail: A01411985@itesm.mx
   Date: 18/10/18
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[250];
    
    // In this part the program ask to the user for a string
    printf("Give me a string:\n");
    fgets(str, sizeof(str), stdin);
    
    printf("\nYour text backwards is: ");
    
    // This part print every character in the string
    for(int x=strlen(str); x>0; x--){
        printf("%c", str[x-1]);
    }

return 0;
}
