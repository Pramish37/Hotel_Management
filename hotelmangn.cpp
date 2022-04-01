#include <iostream>
using namespace std;

int main()
{
   n:

   int Net_Room, Net_Pasta, Net_Burger, Net_Chicken, Net_Noodles, Net_Shake; // Net rooms & food items available!

   int Oroom, Opasta, Oburger, Ochicken, Onoodles, Oshake; // items ordered by the customer!

   int Ts_room = 0, Ts_pasta = 0, Ts_burger = 0, Ts_chicken = 0, Ts_noodles = 0, Ts_shake = 0; // Total sold item added!

   int Tc_room = 0, Tc_pasta = 0, Tc_burger = 0, Tc_chicken = 0, Tc_noodles = 0, Tc_shake = 0; // Total amount collected by selling particular item!

   cout << "\t\t\t\t\t\t Enter the net number of food items available: " << endl;
   cout << "Enter the Net Rooms of the hotel: ";
   cin >> Net_Room;

   cout << "Enter the Net pasta available: ";
   cin >> Net_Pasta;

   cout << "Enter the Net Burger available: ";
   cin >> Net_Burger;

   cout << "Enter the Net Chicken available: ";
   cin >> Net_Chicken;

   cout << "Enter the Net Noodles available: ";
   cin >> Net_Noodles;

   cout << "Enter the Net shake available: ";
   cin >> Net_Shake;

   int choice;
   m:

   cout << "\t\t\t Press (1) to order Room : " << endl;
   cout << "\t\t\t Press (2) To order Pasta: " << endl;
   cout << "\t\t\t Press (3) To order Burger: " << endl;
   cout << "\t\t\t Press (4) To order Chicken: " << endl;
   cout << "\t\t\t Press (5) To order Noodles: " << endl;
   cout << "\t\t\t Press (6) To order Shake: " << endl;
   cout << "\t\t\t Press (7) To see the overview of all items sold and daily collection: " << endl;
   cout << "\t\t\t Press (8) To exit::: " << endl;

   cout << "Enter your order choice: ";
   cin >> choice;

   switch (choice)
   {
   case 1: // Dealing with room begins here:
   {
      // cout<<"Total number of room available is: "<<Net_Room;
      cout << "Enter the number of room customer wants: ";
      cin >> Oroom;

      if (Oroom <= Net_Room - Ts_room)
      {

         Ts_room = Ts_room + Oroom;
         Tc_room = Tc_room + Oroom * 600;

         cout << Oroom << " room is the order by the customer! " << endl;
      }

      else
      {
         cout << "There is " << Net_Room - Ts_room << " room available now! " << endl;
      }

      break;
   } // Dealing with Rooms ends here:

   case 2: // Dealing with pasta begins here:
   {
      cout << "Enter the number of pasta the customer wants: ";
      cin >> Opasta;

      if (Opasta <= Net_Pasta - Ts_pasta)
      {

         Ts_pasta = Ts_pasta + Opasta;
         Tc_pasta = Tc_pasta + Opasta * 12;

         cout << Opasta << " pasta is order by the customer! "<<endl;
      }

      else
      {
        cout << "Number of pasta available now is "<<Net_Pasta - Ts_pasta<<endl;
        
      }
      break; // Dealing with pasta begins here:
   }

   case 3: // Dealing with Burger begins here:
   {
      cout << "Enter the number of Burger the customer wants: ";
      cin >> Oburger;

      if (Oburger <= Net_Burger - Ts_burger)
      {

         Ts_burger = Ts_burger + Oburger;
         Tc_burger = Ts_burger + Oburger * 15;

         cout << Oburger << " Burger is the order by the customer! "<<endl;
      }

      else
      {
         cout << "There is " << Net_Burger - Ts_burger << "burger available now! " << endl;
      }
      break;
   }

   case 4: // Dealing with chicken begins here:
   {
      cout << "Enter the number of chicken the customer wants: ";
      cin >> Ochicken;

      if (Ochicken <= Net_Chicken - Ts_chicken)
      {

         Ts_chicken = Ts_chicken + Ochicken;
         Tc_chicken = Tc_chicken + Ochicken * 20;

         cout << Ochicken << " is the order by the customer!"<<endl;
      }

      else
      {
         cout << Net_Chicken - Ts_chicken << " Chicken is available now! " << endl;
      }
      break;
   }

   case 5: // Dealing with Noodle begins here:
   {
      cout << "Enter the number of Noodle the customer wants: ";
      cin >> Onoodles;

      if (Onoodles <= Net_Noodles - Ts_noodles)
      {

         Ts_noodles = Ts_noodles + Onoodles;
         Tc_noodles = Tc_noodles + Onoodles * 12;
         cout << Onoodles << " Noodles is order by the customer! "<<endl;
      }

      else
      {
         cout << "There is " << Net_Noodles - Ts_noodles << " Noodle is available now! " << endl;
      }
      break;
   }

   case 6: // Dealing with Shake begins here:
   {
      cout << "Enter the number of shake customer wants: ";
      cin >> Oshake;

      if (Oshake <= Net_Shake - Ts_shake)
      {

         Ts_shake = Ts_shake + Oshake;
         Tc_shake = Tc_shake + Oshake * 12;

         cout << Oshake << " Noodles is order by the customer! "<<endl;
      }

      else
      {
         cout << "There is " << Net_Shake - Ts_shake << " Noodle is available now! " << endl;
      }

      break;
   }

   case 7: // Dealing with remainging foods and rooms begin here:
   {
      cout << "Total number of remaining rooms are: " << Net_Room-Ts_room << endl;
      cout << "Total number of remaining rooms are: " << Net_Pasta-Ts_pasta << endl;
      cout << "Total number of remaining rooms are: " << Net_Burger-Ts_burger << endl;
      cout << "Total number of remaining rooms are: " << Net_Chicken-Ts_chicken << endl;
      cout << "Total number of remaining rooms are: " << Net_Noodles-Ts_noodles << endl;
      cout << "Total number of remaining rooms are: " << Net_Shake-Ts_shake << endl;
      break;
   }

   case 8:
   {{
      cout<<"Exit!!!"<<endl;
   }
    goto n;
   }
   default:
   {
      cout << "Enter vaild number to get the data: "<<endl;
   }
      break;
    return 0;
   }
   goto m;
}
