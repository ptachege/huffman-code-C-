
#include <iostream>

using namespace std;
int main() {


    /* first we declare a character array to hold our phrase */
   char str[100];
   //get the user input
   cout<<"Enter a phrase:";
   cin.get(str,100);
   /*declare an array to store the frequency of all the alphabets
   and initialize the frequency of each index to zero
   */
    int alphabet[26] = {0};
    //declaration of some loop variables. note that j will store the
    //numerical value of the alphabet i.e a = alphabet[0], z = alphabet[25]
   int i = 0, j;


   while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
      }
      ++i;
   }
   //output the frequency.
   cout<<"Frequency of all alphabets in the string is:"<<endl;
   for (i = 0; i < 26; i++)
   if(alphabet[i] != 0){
        cout<< char(i + 'a')<<" : "<< alphabet[i]<< endl;
   }

   return 0;
}
