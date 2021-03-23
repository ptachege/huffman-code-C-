#include <iostream>
#include<string.h>

using namespace std;
int main(){

char phrase[100];
int i,j,length;

/*To count and store frequency of each alphabet we need an array,
 say freq[26]. An array of size 26 (since there are 26 alphabets).
 Each element of the array will hold the occurrence of specific alphabet. For example
array[0] will hold the occurrence of a or A alphabet, similarly
array[1] will hold frequency of b and so on
array[25] will hold frequency of z. */
int freq[26];

//get user input and store it in a variable called phrase
cout<<"Enter a phrase:";
cin.get(phrase, 100);


//get the length of the phrase
length =strlen(phrase);
cout<<"\n The phrase has "<<length<<" characters";

//initialize size of each character frequency to zero. This loop runs through characters in the phrase setting their frequencies to zero.
for (int i=0;i<26;i++){
    freq[i]=0;
}
/*If ch == 'a' then increment the value of freq[0]++ by one. If ch == 'c', then increase value of freq[2] by one.
 Similarly if(ch == 'z') then increment freq[25]++ */
 /*Since, ASCII value of a is 97, b is 98 and so on.
  Suppose ch = 'c' then we need to increment the value of freq[2] by one.
  i.e. freq [c-97], which is the same as freq [99-97] since the ASCII code for c is 97.
  Therefore, freq[2].  with the upper case alphabets i.e. if(ch == 'Z') then we need to perform freq[ ch - 65 ] since A = 65 in ASCII
  */

for (int i=0; i<length;i++)
{
    /* if current character is lower alphabet*/
    if(phrase[i]>='a' && phrase[i]<='z')
    {
        freq[phrase[i] - 97]++;
    }
    else if (phrase[i]>='A' && phrase[i]<='Z')
    {
        freq[phrase[i]-65]++;
    }

}

 /* Print the frequency of all characters in the phrase */
 cout<<"\n The frequencies of characters in the phrase are: \n";

 for(int i=0; i<26;i++)
 {
     /*check if current current exists in given string */
     //char (i+'a') reverses the ASCII
     if (freq[i] !=0)
     {
         cout<<char(i+'a')<<":"<<freq[i]<<endl;
     }

 }
 return 0;

}
