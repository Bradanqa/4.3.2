#include "Tab.h"


int main()
{
   Tab<int> arr(0, 5);

   arr[0][0] = 42;
   std::cout << arr[0][0] << std::endl;

   auto size = arr.Size();
   std::cout << "Size = " << size << std::endl;


}
