#include <iostream>
int main()
{
 int val1 =0 , val2 =0 , val3 =0;
 std::cout << "Enter two numbers:" << std::endl;
 std::cin >> val1 >> val2;
 std::cout << "The list of numbers between " << val1 << " and " << val2 << " are: " <<std::endl;

 if(val2 > val1){

     val3 = val2 -val1;
     for (int i = 1; i < val3; ++i){
 std::cout << val1 +i;
 
     std::cout << ", ";
 }
 }

  if(val1 > val2){

     val3 = val1 -val2;

     for (int i = 1; i < val3; ++i){
 std::cout << val2 +i;
 

     std::cout << ", ";
 }

 }


 std::cout << std::endl;
 return 0;
}

