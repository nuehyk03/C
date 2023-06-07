#include <stdio.h>
#include <string.h>
//정올 2514
int main() {
char arr[10001];
int i,KOI = 0, IOI = 0 ;
for(i=0; i<strlen(arr)-2; i++){
  if(arr[i] == 'k' && arr[i+1] == '0' && arr[i+2] == 'I')
    KOI++;
  else if(arr[i] == 'I' && arr[i+1] == '0' && arr[i+2] == 'I')
    IOI++;
}
    
printf("%d\n%d", KOI, IOI);
return 0;

}
