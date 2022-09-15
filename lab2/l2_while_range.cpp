
#include <iostream>
int main()
{
 int val1 =0 , val2 =0 , val3 =0, flag =1;
 std::cout << "Enter two numbers:" << std::endl;
 std::cin >> val1 >> val2;
 std::cout << "The list of numbers between " << val1 << " and " << val2 << " are: " <<std::endl;
 
 if(val2 > val1){
     
     val3 = val2 -val1;
     while (flag < val3) {
 std::cout << val1 +flag;
 ++flag;
 
     std::cout << ", ";
 }
 }
 
  if(val1 > val2){
     
     val3 = val1 -val2;
     
      while (flag < val3) {
 std::cout << val2 +flag;
 ++flag;
 
     std::cout << ", ";
 }
     
 }
 
 
 std::cout << std::endl;
 return 0;
}


