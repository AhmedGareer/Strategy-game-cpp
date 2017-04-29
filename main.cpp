#include <iostream>
#include "windows.h"
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include "teams.h"
#include "TeamA.h"
#include "TeamB.h"
#include "weapons.h"
#include "TeamAweapons.h"
#include "TeamBweapons.h"

using namespace std;

int main()
{

    int c=0,c1=0 ,choose,y=24,x=40,damageBT=0,damageBR=0,damageBS=0,damageBA=0,damageBM=0,damageAT=0,damageAR=0,damageAS=0,damageAA=0,damageAM=0,soliderAD=0,soliderBD=0;
    char choose1,choosew;
    teams moving;
    teamA eagle;
    teamB hunter;
    weaponsA teamAweapons ;
    weaponsB teamBweapons;
    //loading screen
    ifstream read;
    char loading = 219;
    string loading_screen;
    int loading_counter = 5;
    read.open("loading_screen.txt", ios::app);
    system ("color 3F");
    while(getline(read, loading_screen))
    {
        moving.gotoXY(2,loading_counter); cout<<loading_screen<<"\n";
        loading_counter++;
    }
    read.close();
    moving.gotoXY(74, 15); cout <<"]";
    moving.gotoXY(9,15);  cout <<"[";
    for (int i=0; i<64; i++)
    {
        Sleep(20);
        cout<<loading;
    }
    Sleep(500);
    // end of loading screen
    system("cls");
    system ("color 3F");
    while (c==0)
    {
         y=24,x=40,damageBT=0,damageBR=0,damageBS=0,damageBA=0,damageBM=0,damageAT=0,damageAR=0,damageAS=0,damageAA=0,damageAM=0,soliderAD=0,soliderBD=0;

        cout<<"\n\n\tChoose Your team to start playing..\n\t[1] Team A\n\n\t[2] Team B\n\n\t[3]EXIT the game  ";
        cin>>choose;
        fflush(stdin);
        cin.clear();
        switch (choose)
        {
        case 1:
                system ("CLS");
                cout<<"\n\n\tYou're in Team A Now\n";
                cout<<"\n\t control setting ..\n\t [w] Move forward\n\t [s] Move Backword \n\t [a] Move Left \n\t [d] Move Right \n\t [f] Attack\n\t [q] Exit the game \n\t Press Any Key to start the game.. ";
                getch();
                system("CLS");
                c1=0;
                while (c1==0)
                {
                    if(damageBT>=100 && damageBM>=100 && damageBR>=100 && damageBS >=100 && damageBA>=100)
                    {
                        c1++;
                    }
                    if (soliderBD>=100)
                    {
                        c1++;
                    }
                    if (damageBT>=0 && damageBT <100)
                    {
                    moving.gotoXY(1,1);
                    cout<<"[T]Tank "<<teamBweapons.TankH(damageBT)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(1,1);
                    cout<<"[T]Destroyed "<<teamBweapons.TankH(100)<<"%";
                    }
                    if (damageBR>=0 && damageBR <100)
                    {
                    moving.gotoXY(16,1);
                    cout<<"[R]Rockets "<<teamBweapons.RocketsH(damageBR)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(16,1);
                    cout<<"[R]Destroyed "<<teamBweapons.RocketsH(100)<<"%";
                    }
                    if (damageBS>=0 && damageBS <100)
                    {
                    moving.gotoXY(32,1);
                    cout<<"[S]Ships "<<teamBweapons.ShipsH(damageBS)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(32,1);
                    cout<<"[S]Destroyed "<<teamBweapons.ShipsH(100)<<"%";
                    }
                    if (damageBA>=0 && damageBA <100)
                    {
                    moving.gotoXY(48,1);
                    cout<<"[A]Armor "<<teamBweapons.ArmorH(damageBA)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(48,1);
                    cout<<"[A]Destroyed "<<teamBweapons.ArmorH(100)<<"%";
                    }
                    if (damageBM>=0 && damageBM <100)
                    {
                    moving.gotoXY(62,1);
                    cout<<"[M]Munitions "<<teamBweapons.MunitionsH(damageBM)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(62,1);
                    cout<<"[M]Destroyed "<<teamBweapons.MunitionsH(100)<<"%";

                    }
                    if (soliderBD>=0 && soliderBD<100)
                    {
                    hunter.Move(40,2);
                    cout<<"solider "<<hunter.soliderHealth(soliderBD)<<"%";
                    }
                    else
                    {
                    hunter.Move(40,2);
                    cout<<"solider died "<<hunter.soliderHealth(100)<<"%";
                    }

                    //---------------------------------------------------- your team weapons
                    if (damageAT>=0 && damageAT <100)
                    {
                    moving.gotoXY(1,25);
                    cout<<"[T]Tank "<<teamAweapons.TankH(damageAT)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(1,25);
                    cout<<"[T]Destroyed "<<teamAweapons.TankH(100)<<"%";
                    }
                    if (damageAR>=0 && damageAR <100)
                    {
                    moving.gotoXY(16,25);
                    cout<<"[R]Rockets "<<teamAweapons.RocketsH(damageAR)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(16,25);
                    cout<<"[R]Destroyed "<<teamAweapons.RocketsH(100)<<"%";
                    }
                    if (damageAS>=0 && damageAS <100)
                    {
                    moving.gotoXY(32,25);
                    cout<<"[S]Ships "<<teamAweapons.ShipsH(damageAS)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(32,25);
                    cout<<"[S]Destroyed "<<teamAweapons.ShipsH(100)<<"%";
                    }
                    if (damageAA>=0 && damageAA <100)
                    {
                    moving.gotoXY(48,25);
                    cout<<"[A]Armor "<<teamAweapons.ArmorH(damageAA)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(48,25);
                    cout<<"[A]Destroyed "<<teamAweapons.ArmorH(100)<<"%";
                    }
                    if (damageAM>=0 && damageAM <100)
                    {
                    moving.gotoXY(62,25);
                    cout<<"[M]Munitions "<<teamAweapons.MunitionsH(damageAM)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(62,25);
                     cout<<"[M]Destroyed "<<teamAweapons.MunitionsH(100)<<"%";
                    }
                    eagle.Move(x,y);

                    cout<<"solider "<<eagle.soliderHealth(soliderAD)<<"%";

                    choose1 = _getch();
                    if (isupper(choose1))
                    {
                        choose1=tolower(choose1);
                    }
                    system("cls");
                    switch (choose1)
                    {
                    case 'w':
                        --y;

                        break;

                    case 's':
                        ++y;

                        break;

                    case 'a':
                        --x;

                        break;

                    case 'd':
                        ++x;


                        break;

                    case 'f':

                        moving.gotoXY(1,2);
                        cout<<"Press ...\n 'e' for solider to attack\n 't' for tank to attack\n 'r' for rockets to attack\n 's' for ships to attack\n 'a' for armors to attack \n 'm' for Munitions to attack\n" ;
                        choosew = _getch();
                        if (isupper(choosew))
                        {
                            choosew=tolower(choosew);
                        }
                        switch (choosew)
                        {
                        case 't':
                            damageBT=damageBT+5;
                            break;

                        case 'r':
                            damageBR=damageBR+10;
                            break;

                        case 's':
                            damageBS=damageBS+8;
                            break;

                        case 'a':
                            damageBA=damageBA+15;
                            break;

                        case 'm':
                            damageBM=damageBM+12;
                            break;

                        case 'e':
                            soliderBD=soliderBD+3;
                            break;
                        }
                        system("CLS");
                        break;

                        case 'q':
                            c1++;
                            c++;
                            break;

                    default :
                        eagle.Move(x,y);
                        cout<<"solider "<<eagle.soliderHealth(soliderAD)<<"%";
                        break;


                    }
                }
                system("CLS");
                 if(damageBT>=100 && damageBM>=100 && damageBR>=100 && damageBS >=100 && damageBA>=100)
                    {
                        moving.gotoXY(30,13);
                cout<<"CONGRATULATION , Team A is the winner";
                getch();
                    }
                    if (soliderBD>=100)
                    {
                        moving.gotoXY(30,13);
                cout<<"CONGRATULATION , Team A is the winner";
                getch();
                    }

                system ("CLS");
                break;
        case 2:
                system ("CLS");
                cout<<"\n\n\tYou're in Team B Now\n";
                cout<<"\n\t control setting ..\n\t [w] Move forward\n\t [s] Move Backword \n\t [a] Move Left \n\t [d] Move Right \n\t [f] Attack\n\t [q] Exit the game \n\t Press Any Key to start the game.. ";
                getch();
                system("CLS");
                c1=0;
                while (c1==0)
                {
                    if(damageAT>=100 && damageAM>=100 && damageAR>=100 && damageAS >=100 && damageAA>=100)
                    {
                        c1++;
                    }
                    if (soliderAD>=100)
                    {
                        c1++;
                    }
                    if (damageAT>=0 && damageAT <100)
                    {
                    moving.gotoXY(1,1);
                    cout<<"[T]Tank "<<teamAweapons.TankH(damageAT)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(1,1);
                    cout<<"[T]Destroyed "<<teamAweapons.TankH(100)<<"%";
                    }
                    if (damageAR>=0 && damageAR <100)
                    {
                    moving.gotoXY(16,1);
                    cout<<"[R]Rockets "<<teamAweapons.RocketsH(damageAR)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(16,1);
                    cout<<"[R]Destroyed "<<teamAweapons.RocketsH(100)<<"%";
                    }
                    if (damageAS>=0 && damageAS <100)
                    {
                    moving.gotoXY(32,1);
                    cout<<"[S]Ships "<<teamAweapons.ShipsH(damageAS)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(32,1);
                    cout<<"[S]Destroyed "<<teamAweapons.ShipsH(100)<<"%";
                    }
                    if (damageAA>=0 && damageAA <100)
                    {
                    moving.gotoXY(48,1);
                    cout<<"[A]Armor "<<teamAweapons.ArmorH(damageAA)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(48,1);
                    cout<<"[A]Destroyed "<<teamAweapons.ArmorH(100)<<"%";
                    }
                    if (damageAM>=0 && damageAM <100)
                    {
                    moving.gotoXY(62,1);
                    cout<<"[M]Munitions "<<teamAweapons.MunitionsH(damageAM)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(62,1);
                     cout<<"[M]Destroyed "<<teamAweapons.MunitionsH(100)<<"%";
                    }
                    if (soliderAD>=0 && soliderAD<100)
                    {
                    eagle.Move(40,2);
                    cout<<"solider "<<eagle.soliderHealth(soliderAD)<<"%";
                    }
                    else
                    {
                    eagle.Move(40,2);
                    cout<<"solider died "<<eagle.soliderHealth(100)<<"%";
                    }
                    //---------------------------------------------------- your team weapons
                    if (damageBT>=0 && damageBT <100)
                    {
                    moving.gotoXY(1,25);
                    cout<<"[T]Tank "<<teamBweapons.TankH(damageBT)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(1,25);
                    cout<<"[T]Destroyed "<<teamBweapons.TankH(100)<<"%";
                    }
                    if (damageBR>=0 && damageBR <100)
                    {
                    moving.gotoXY(16,25);
                    cout<<"[R]Rockets "<<teamBweapons.RocketsH(damageBR)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(16,25);
                    cout<<"[R]Destroyed "<<teamBweapons.RocketsH(100)<<"%";
                    }
                    if (damageBS>=0 && damageBS <100)
                    {
                    moving.gotoXY(32,25);
                    cout<<"[S]Ships "<<teamBweapons.ShipsH(damageBS)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(32,25);
                    cout<<"[S]Destroyed "<<teamBweapons.ShipsH(100)<<"%";
                    }
                    if (damageBA>=0 && damageBA <100)
                    {
                    moving.gotoXY(48,25);
                    cout<<"[A]Armor "<<teamBweapons.ArmorH(damageBA)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(48,25);
                    cout<<"[A]Destroyed "<<teamBweapons.ArmorH(100)<<"%";
                    }
                    if (damageBM>=0 && damageBM <100)
                    {
                    moving.gotoXY(62,25);
                    cout<<"[M]Munitions "<<teamBweapons.MunitionsH(damageBM)<<"%";
                    }
                    else
                    {
                    moving.gotoXY(62,25);
                    cout<<"[M]Destroyed "<<teamBweapons.MunitionsH(100)<<"%";

                    }
                    hunter.Move(x,y);
                    cout<<"solider "<<hunter.soliderHealth(soliderBD)<<"%";
                    choose1 = _getch();
                    if (isupper(choose1))
                    {
                        choose1=tolower(choose1);
                    }
                    system("cls");
                    switch (choose1)
                    {
                    case 'w':
                        --y;

                        break;

                    case 's':
                        ++y;

                        break;

                    case 'a':
                        --x;

                        break;

                    case 'd':
                        ++x;


                        break;

                    case 'f':

                        moving.gotoXY(1,2);
                        cout<<"Press ...\n 'e' for solider to attack\n 't' for tank to attack\n 'r' for rockets to attack\n 's' for ships to attack\n 'a' for armors to attack \n 'm' for Munitions to attack\n" ;
                        choosew = _getch();
                        if (isupper(choosew))
                        {
                            choosew=tolower(choosew);
                        }
                        switch (choosew)
                        {
                        case 't':
                            damageAT=damageAT+5;
                            break;

                        case 'r':
                            damageAR=damageAR+10;
                            break;

                        case 's':
                            damageAS=damageAS+8;
                            break;

                        case 'a':
                            damageAA=damageAA+15;
                            break;

                        case 'm':
                            damageAM=damageAM+12;
                            break;
                        case 'e':
                            soliderAD=soliderAD+3;
                            break;
                        }
                        system("CLS");
                        break;

                        case 'q':
                            c1++;
                            c++;
                            break;

                    default :
                        hunter.Move(x,y);
                        cout<<"solider "<<hunter.soliderHealth(soliderAD)<<"%";
                        break;


                    }
                }
                system("CLS");
                if(damageAT>=100 && damageAM>=100 && damageAR>=100 && damageAS >=100 && damageAA>=100)
                    {
                        moving.gotoXY(30,13);
                        cout<<"CONGRATULATION , Team B is the winner";
                        getch();
                    }
                    if (soliderAD>=100)
                    {
                        moving.gotoXY(30,13);
                        cout<<"CONGRATULATION , Team B is the winner";
                        getch();
                    }


                system ("CLS");
            break;

        case 3:
            c++;
            break;
        default:
            cout<<"\n\n\twrong choice , press any key to try again .. ";
            getch();
            system("CLS");
            break;

        }
    }
        system ("CLS");
cout<<"\n\n\n\t\t\tThe game has been terminated..\n\n\n\n\n\n\n";


    return 0;
}
