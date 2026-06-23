#include <stdio.h>



int main() {
  char phone[15] = {'\0'}; 
  int length = 0;
  printf("Enter phone number: ");
  do { // input the phone number string to phone
    scanf("%c", &phone[length]);
    length++;
  } while (phone[length-1] != '\n'); // until enter ('\n')
  length -= 1; // length correcting

  if (length > 15) { // (length > 15) -> invalid then quit
    printf("invalid phone number\n");
    return 0;
  }

  int invalid = 0; // to check if there is invalid character
  for (int i = 0; i < length; i++) { // loop length times (each char of the string)
    if (phone[i] >= 'A' && phone[i] <= 'C') phone[i] = '2'; // replace the alphabets by numbers
    else if (phone[i] >= 'D' && phone[i] <= 'F') phone[i] = '3';
    else if (phone[i] >= 'G' && phone[i] <= 'I') phone[i] = '4';
    else if (phone[i] >= 'J' && phone[i] <= 'L') phone[i] = '5';
    else if (phone[i] >= 'M' && phone[i] <= 'O') phone[i] = '6';
    else if (phone[i] >= 'P' && phone[i] <= 'S') phone[i] = '7';
    else if (phone[i] >= 'T' && phone[i] <= 'V') phone[i] = '8';
    else if (phone[i] >= 'W' && phone[i] <= 'Y') phone[i] = '9';
    
    if (phone[i] == '*' || phone[i] == 'Q' || phone[i] == 'Z') invalid = 1; // check invalid
  }
   
  if(!invalid) { // (invalid == 0) -> valid then output the result
    for(int i = 0; i < length; i++) { // loop each char  of the string
      printf("%c", phone[i]);
    }
    printf("\n");
  } else { // output invalid
    printf("invalid phone number\n");
  }
  return 0;
}