#include <stdio.h> 
#include <string.h> 

int main() {
int i;
char str[] = "Oct 9 8pm";
 
for (i = 0; str[i] != 0; i++) {
   if ((str[i] >= 'a') && (str[i] <= 'z'))
      str[i] -= 0x20;
   else if ((str[i] >= '0') && (str[i] <= '9'))
      str[i] += 1;                        
}

    printf("%s", str);
}