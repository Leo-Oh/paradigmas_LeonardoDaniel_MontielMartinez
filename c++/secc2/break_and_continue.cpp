#include <iostream>
using namespace std;

 int main() {

 /* break.......
  for (int i = 0; i < 5; i++) {
  
  cout << "i is: " << i << endl; 

  if(i==3) {
     break;
  } 

  cout << "Looping....." << endl;
  }
  */
  
 /* continue....
    
    for (int i = 0; i < 5; i++) {
 
    cout << "i is: " << i << endl;

    if (i == 3){
       cout << "Hello";
       continue;
    }


   cout << "Looping..." << endl;
 } */
  


 const string password = "hi";

 string input;
 
 do {
      cout << "Enter you password " << flush;
      cin >> input;

      if(input == password) {
          break;

     } else{
          cout << "Access denied" << endl;
      }

  } while (input != password);

   cout << "Password acceted" << endl;
   cout << "Program quitting....." << endl;

  return 0;
}