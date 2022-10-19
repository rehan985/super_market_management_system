#include<iostream>

 #include<windows.h>
  #include<MMsystem.h>
//  #include <mciapi.h>

//  #include"Product.h"
   #include"Admin.h"
   #include"Menu.h"
   #include"Customer.h"
   #include"MainScreen.h"

int main()
{
//system("color 80"); PlaySound(TEXT("sound.wav"), NULL, SND_ASYNC);

MainScreen M;
cout << Product::serialNumber << endl; M.Start();

}
