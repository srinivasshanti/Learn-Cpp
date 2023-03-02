#include <iostream>
using namespace std;

int main() {
            int num = 10;    
            if (num % 2 == 0)    
            {    
                cout<<"It is even number"<<endl;    
            }   
            else  
            {    
                cout<<"It is odd number"<<endl;    
            } 



           switch (num)    
          {    
              case 10: cout<<"It is 10"<<endl;
               break;    
              case 20: cout<<"It is 20"<<endl;
               break;    
              case 30: cout<<"It is 30"<<endl;
               break;    
              default: cout<<"Not 10, 20 or 30"<<endl;
               break;    
          }



          for(int i=1;i<=10;i++){      
            cout<<i <<"\n";      
          }


          int i=1;      
         while(i<=10)   
          {      
            cout<<i <<"\n";    
            i++;  
          }  
          int ii=1;

          do{    
              cout<<ii<<"\n";    
              ii++;    
          } while (ii <= 10) ; 


      
          
      int age=17;  
       
      if (age < 18){    
              goto ineligible;    
      }    
      else    
      {    
              cout<<"You are eligible to vote!";     
      }     

    //Go-To
      ineligible:    
        cout<<"You are not eligible to vote!\n";                  
}
