#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

// int random = offset + (rand() % range);

int main()
{   
    cout<<"\n\t\t\t || Welcome To Number Guessing Game ||"<<endl<<endl;
    cout<<"You have to guess a number between 1 and 100. you'll have limited choices based on the level you choose." <<endl;

    while(true){

        cout<<"\n Enter the difficulty level you have to choose: \n";
        cout<<" 1. EASY \t";
        cout<<" 2. MEDIUM \t";
        cout<<" 3. HARD \t";
        cout<<" PRESS 0 FOR ENDING THE GAME! \n"<<endl;

        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;

        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerchoice;

        if(choice == 1){
            cout<<"\n You have 10 Guesses for finding the secret number.";

            int choicesleft = 10;
            for(int i=1; i<=10; i++){
                cout<<"\n\n Enter the number: ";
                cin>>playerchoice;
                if(playerchoice == secretNumber){
                    cout<<"WELL PLAYED!! YOU WON, "<<endl;
                    cout<<"\t\t\t THANKS FOR PLAYING..." <<endl;
                    cout<<"Play The Game Again!\n\n"<<endl;
                    break;
                }
                else{ 
                    cout<< "NOPE, "<< playerchoice <<" is not the right number.\n";

                     if(playerchoice > secretNumber){
                        cout<<"The secret number is Smaller than the number you have chosen." <<endl;
                    }
                    else{
                        cout<<"The secret number is Greater than the number you have chosen." <<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<" choices left. " <<endl;

                    if(choicesleft == 0){
                        cout<<"YOU LOSE! it was " <<secretNumber<<","<<endl;
                        cout<<"Play The Game Again To Win! \n\n";
                    }
                }
            }
        }
        else if(choice == 2){
            cout<<"\n You have 7 Guesses for finding the secret number.";

            int choicesleft = 7;
            for(int i=1; i<=7; i++){
                cout<<"\n\n Enter the number: ";
                cin>>playerchoice;
                if(playerchoice == secretNumber){
                    cout<<"WELL PLAYED!! YOU WON, "<<endl;
                    cout<<"\t\t\t THANKS FOR PLAYING..." <<endl;
                    cout<<"Play The Game Again!\n\n"<<endl;
                    break;
                }
                else{ 
                    cout<< "NOPE, "<< playerchoice <<" is not the right number.\n";

                     if(playerchoice > secretNumber){
                        cout<<"The secret number is Smaller than the number you have chosen." <<endl;
                    }
                    else{
                        cout<<"The secret number is Greater than the number you have chosen." <<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<" choices left. " <<endl;

                    if(choicesleft == 0){
                        cout<<"YOU LOSE! it was " <<secretNumber<<","<<endl;
                        cout<<"Play The Game Again To Win! \n\n";
                    }
                }
            }
        }
        else if(choice == 3){
            cout<<"\n You have 5 Guesses for finding the secret number.";

            int choicesleft = 5;
            for(int i=1; i<=5; i++){
                cout<<"\n\n Enter the number: ";
                cin>>playerchoice;
                if(playerchoice == secretNumber){
                    cout<<"WELL PLAYED!! YOU WON, "<<endl;
                    cout<<"\t\t\t THANKS FOR PLAYING..." <<endl;
                    cout<<"Play The Game Again!\n\n"<<endl;
                    break;
                }
                else{ 
                    cout<< "NOPE, "<< playerchoice <<" is not the right number.\n";

                     if(playerchoice > secretNumber){
                        cout<<"The secret number is Smaller than the number you have chosen." <<endl;
                    }
                    else{
                        cout<<"The secret number is Greater than the number you have chosen." <<endl;
                    }
                    choicesleft--;
                    cout<<choicesleft<<" choices left. " <<endl;

                    if(choicesleft == 0){
                        cout<<"YOU LOSE! it was " <<secretNumber<<","<<endl;
                        cout<<"Play The Game Again To Win! \n\n";
                    }
                }
            }
        }
        else if(choice == 0){
            exit(0);
        }
        else{
            cout<<"Wrong Choice, Enter valid choice to play the game! (0,1,2,3)"<<endl;
        }
    }
    return 0;
}