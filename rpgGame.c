//Contributors

//Brandon LaNuevo Room #1
//Ivan Khaffaji Room #19

//Hugo Rodriguez Room #10


// Justin Do Room #2


//kseeram
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

//Prototypes
void sleep(unsigned int seconds);
void shuffle(int *a, int *b, int SIZE);
void combine(int *a, int *b, int *c, int *d, int *all);
int rando(void);
int room12Spells(int *hp, int enDam);

void main(void)
{
    int x,y,z,i,h,g,k,choice=0;
    char name[256];
    int boxNum=0;
    int num = 6, guess= 0, a;


    srand(time(NULL));

    int power = 0;
    int diceroll;


    printf("Please enter your name: "); //Input any number of array inputs
    scanf("%s",name);

    printf("Hello %s welcome to the rpgGame!\n",name);

    while(choice != 99)
    {
        puts("You find yourself in a dark room and you are not sure how you got here.");
        puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        puts("What door do you choose?");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                {
                    while(choice != 99)
                    {

                    }
                    break;
                }
            case 2: // Justin Do Room 2
                {
                    while(choice != 99)
                    {
                        puts("Welcome to room 2. Glad you didn't drown. \n");
                        puts("You open the door and find a wolf that looks intimidating.\n");
                        puts("You need to stay alive and there are three choices to choose from.\n");
                        puts("1. Run back to the door.\n");
                        puts("2. Pick up the knife on the floor and throw it at the wolf.\n");
                        puts("3. Drop and play dead on the floor.\n");
                        scanf("%d",&choice);
                        if(choice == 1)
                        {
                            puts("You start running to the door but you are slower than the wolf.\n");
                            puts("The wolf catches up and eats you alive.\n");
                        }
                        if(choice == 2)
                        {
                            puts("You pick up the knife... \n");
                            puts("Throw it as hard as you can and....\n");
                            puts("End up missing the wolf and the wolf mauls you to death.\n");
                        }
                        if(choice == 3)
                        {
                            puts("You decide to lay down and the wolf comes running at you...\n");
                            puts("As soon the wolf runs up to you, it sniffs you for a couple of minutes.\n");
                            puts("The wolf starts to lick you face and then scurries away.");
                        }
                        else
                        {
                            puts("Incorrect choice!\n");
                            puts("Choices are 1, 2 or 3 \n");
                        }
                    }
                    break;
                }
            case 3:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 4:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 5:
                {
                    srand(time(NULL));
                    while(choice != 99)
                    {
                        puts("You open the door and find a treasure chest.\n");
                        puts("You have 2 choices listed below. Choose carefully.\n");
                        puts("1. Open the chest.\n");
                        puts("2. Leave the chest and move on.\n");
                        scanf("%d",&choice);
                        if(choice == 1)
                        {
                            puts("You open the chest and find a golden dice hidden inside.\n");
                            puts("You have 2 choices listed below. Choose carefully.\n");
                            puts("1. Roll the dice.\n");
                            puts("2. Pocket the dice.\n");
                            scanf("%d", &choice);
                            if(choice == 1)
                            {
                                diceroll = 1 + (rand() % 6);
                                printf("Congratulations! You rolled a %d. Your strength is increased by %d", diceroll, diceroll);
                                puts("You move on with your journey. Ahead you encounter a giant orc with heavy armor. Between you and the orc is a sword.\n");
                                puts("You have 3 choices listed below. Choose carefully.\n");
                                puts("1. Pick up the sword and combat the orc.\n");
                                puts("2. Run up and punch the orc.\n");
                                puts("3. Run away.\n");
                                scanf("%d", &choice);

                            }
                            else if(choice == 2)
                            {
                                puts("You move on with your journey. Ahead you encounter a giant orc with heavy armor. Between you and the orc is a sword.\n");
                                puts("You have 3 choices listed below. Choose carefully.\n");
                                puts("1. Pick up the sword and combat the orc.\n");
                                puts("2. Roll the dice.\n");
                                puts("3. Run away.\n");

                            }
                        }
                        else if(choice == 2)
                        {
                            puts("You leave the chest and move on. Standing before you is a giant orc with heavy armor. Between you and the orc is a sword.\n");
                            puts("You have 2 choices listed below. Choose carefully.\n");
                            puts("1. Pick up the sword and combat the orc.\n");
                            puts("2. Run away.\n");
                            scanf("%d", &choice);
                            if (choice == 1)
                            {
                                puts("You pick up the sword and charge at the orc.\n");
                                puts("Before you could hit the orc with your sword the orc swings down with its club.\n");
                                puts("Your head gets smashed.\n");
                                puts("*****_____ GAME OVER _____*****\n");
                            }
                            else if (choice == 2)
                            {
                                puts("You attempt to run away.\n");
                                puts("The orc quickly catches up and smashes your head.\n");
                                puts("*****_____ GAME OVER _____*****\n");								}
                        }
                    }
                    break;
                }
            case 6:
                {
                    while(choice != 99)
                    {
                        puts("you open the door to find a man wearing sunglasses, track pants, and a blue shirt with a ravioli stain on his shirt pocket.");
                        puts("Welcome to the filthy frank show! Where everything is filthy and filled with terrible pop culture references.");
                        puts("If you want to make it out alive, just answer my questions and stuff and you'll be safe from dark lord chin chin");
                        puts("Question:  If Pewdiepie reached 80 million subscribers, will the ravioli stick to the ceiling?");
                        puts("1. Wait what?");
                        puts("2. Youtube's reccomended algorithm is garbage!");
                        puts("3. 34 chromonsones");
                        scanf("%d",&choice);
                        if (choice == 1)
                        {
                            puts("YOU OBVIOUSLY WEREN'T LISTENING!!! BACK TO THE RICEFIELDS FOR YOU!!!......GAME OVER.");
                            break;
                        }
                        else if (choice == 2)
                        {
                            puts("Yes, youtubes algorithm is pretty bad and they do demonetize my content, BUT IT ISN'T THE RIGHT ANSWER PUNK!!!......GAME OVER.");
                            break;
                        }
                        else if (choice == 3)
                        {
                            puts("I can't believe you try bribing me. You should be so damn ashamed.  Lucky for you though, I take bribes!");
                            puts("He pockets the chromosones");
                        }
                        else
                        {
                            puts("TRY AGAIN YOU DUNCE");
                        }
                    }
                    break;
                }
            case 7:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        puts("an old man sitting in the middle of the dark and baren room.");
                        puts("You have four choices: ");
                        puts("1.Approach the old man");
                        puts("2.Scream at the old man");
                        puts("3.Try to sneak behind the old man");
                        puts("4.Leave the old man to die.");
						puts("What do you do?");
                        scanf("%d",&choice);
                        if(choice == 1)
                        {
                            puts("As you approach the old man he notices you. You have two choices: ");
                            puts("1.Try talking to the old man");
                            puts("2.Pretend he didn't notice and walk away");
							puts("What do you do?");
                            scanf("%d",&choice);
                            if(choice ==1)
                            {
                                puts("The old man was resting and you have disturbed his slumber. You are now in combat you have two options:");
                                puts("1.Attempt to beat him");
                                puts("2.Run away");
								puts("What do you do?");
                                scanf("%d",&choice);
                                if(choice == 1)
                                {
                                    puts("The old man is too strong for you. He beats you. You are dead Game over");
                                    break;
                                }
                                if(choice == 2)
                                {
                                    puts("As you begin to run the old man stands up. He catches up to you in a split second.");
                                    puts("Your vision goes blury. You are dead Game over");
                                    break;
                                }
                            }
                            if(choice == 2)
                            {
                                puts("The old man sees your attempt to leave and visibly angers");
                                puts("As soon as you turn around you hear the old man breathing behind you");
                                puts("The last thing you see is your lower body being strown accross the floor");
                                puts("You are dead. Game over.");
                                break;
                            }
                            break;
                        }
                        if(choice == 2)
                        {
                            puts("You startle the old man. He falls over and appears dead. You have two choices: ");
							puts("1. Poke the dead body.");
							puts("2. Feel guilty.");
							puts("What do you do?");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You look around the room for a stick to poke the old man.");
								puts("You spot a stick by the chair the old man was sitting. Pick it up?");
								puts("1. Yes");
								puts("2. No");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("You pick up the stick. With the stick in hand you approach the old man.");
									puts("You poke at the old man a couple of times, but you see no reaction.");
									puts("You have two choices: ");
									puts("1. Dispose of the body.");
									puts("2. Get Out!");
									puts("What do you do?");
									scanf("%d",&choice);
									if(choice == 1)
									{
										puts("You decide that you would rather make the nobler choice of disposing of the evidence");
										puts("than be responsible for the untimely death of this old fogey. ");
										break;
									}
									if(choice == 2)
									{
										
										break;
									}
									
									break;
								}
								if(choice == 2)
								{
									puts("You decide not to pick up the stick.");
									break;
								}
								break;
							}
							if(choice == 2)
							{
							puts("As you contemplate suicide over the guilt of killing an old man you notice him stand up.");
							puts("He becomes infuriated by your actions and bring down his fury upon you. He completely decimates you.");
							puts("You are dead. Game over");
							break;
							}
                            break;
                        }
                        if(choice == 3)
                        {
                            puts("As you approach you make a loud noise. You look down and notice the");
							puts("origin of the noise was a loose tile you stepped on.");
                            puts("As you look up the old man is nowhere to be found. The next sensation");
							puts("you feel is a heavy hit in the back of the head.");
                            puts("You are dead. Game over");
                            break;
                        }
                        if(choice == 4)
                        {
                            puts("As you walk away the old man screams at you. He says \"Why would you just leave me?\"");
                            puts("You turn around and notice that the old man has taken all your belongings.");
                            puts("He screams \"You will pay with your life!\" You are dead. Game over");
                            break;
                        }
                    }
                    break;
                }
            case 8:
                {

					int choice;
					#define RED     "\x1b[31m"
					#define GREEN   "\x1b[32m"
					#define YELLOW  "\x1b[33m"
					#define BLUE    "\x1b[34m"
					#define MAGENTA "\x1b[35m"
					#define CYAN    "\x1b[36m"
					#define RESET   "\x1b[0m"

					char userInput[10];
					int input = 0;
					int gamesPlayed = 0;
					int totalDeaths = 0;
					char longestTime[15] = "0s";

                    while(choice != 99){
					    puts("you open the door and find ........");
					    //system("color A0");
				    
					    //Title Block
					        puts("\n");
					        for(i = 0;i < 19;i++){
					            printf(" ");
					        }
					        printf(GREEN "SURVIVAL GAME\n" RESET);
				    
					    //boderlines1
					        printf(BLUE"<");
					        for(i = 0;i < 50;i++){
					            printf("-"); 
					        }
					        printf(">\n"RESET);
				    
					    //borderlines2
					        printf(BLUE"<");
					        for(i = 0;i < 50;i++){
					            printf("-"); 
					        }
					        printf(">\n"RESET);
				    
					    //TotalGames
					        for(i = 0;i < 12;i++){
					            printf(" ");
					        }
					        printf("Total Games Played:   "RED);
					        printf("%d\n\n"RESET,gamesPlayed);
				    
					    //TotalDeaths
					        for(i = 0;i < 12;i++){
					            printf(" ");
					        }
					        printf("Total Deaths:   "RED);
					        printf("%d\n\n"RESET,totalDeaths);
				    
					    //LongestTimeSurvived
					        for(i = 0;i < 12;i++){
					            printf(" ");
					        }
					        printf("Longest Time Survived:  "RED);
					        printf("%s\n\n\n"RESET,longestTime);
				    
					    //PLAY
					        for(i = 0;i < 12;i++){
					            printf(" ");
					        }
					        printf(GREEN"PLAY:"RESET"\tto begin playing\n");
				        
					    //copyright
					        printf("\n\n");
					        for(i = 0;i < 12;i++){
					            printf(" ");
					        }
					        printf("copyright or something 2018\n");
				        
					    //Marcus
					        for(i = 0;i < 12;i++){
					            printf(" ");
					        }
					        printf("Marcus Schumann\n\n");
				        
				        
					    //help
					        printf(YELLOW"This is an interactive game. Use numbers to make\nchoices in the game\n"RESET);
					        printf(YELLOW"type PIRATE for pirate mode, type 99 to quit\n"RESET);
				        
					    //boderlines1
					        printf(BLUE"<");
					        for(i = 0;i < 50;i++){
					            printf("-"); 
					        }
					        printf(">\n"RESET);
				    
					    //borderlines2
					        printf(BLUE"<");
					        for(i = 0;i < 50;i++){
					            printf("-"); 
					        }
					        printf(">\n\n"RESET);
                        
                    
					    while(1){
					        printf(GREEN "Whats say you?: " RESET);    
					        scanf("%s",userInput);
				        
					        if(strcmp("PLAY",userInput) == 0 || strcmp("play",userInput) == 0){
				            
					            printf("\nYour name is "BLUE"%s"RESET", and you're on a trip to see family in Canada....\n",name);
					            puts("Everything seems to be going normally. You went through security and\nfound your seat on the plane.");
					            puts("Pretty soon you're in the air and the flight attendants are going\ndown the aisles to give out drinks");
					            puts("Would you like something to drink sir?");
					            puts("\t1. ask for water");
					            puts("\t2. ask for a sprite ");
					            puts("\t3. ask for a beer ");
					            puts("\t4. tell her to go away\n");
				        
					            printf(GREEN "Whats say you?: " RESET);    
					            scanf("%d",&input);
				            
					            if(input == 99){
					                break;
					            }
				            
				            
				            
					        }else if(strcmp("99",userInput) == 0){
				            
					            break;
				            
					        }else{
					            printf("I can't understand that, Try again?\n");
					            continue;   
					        }
					    }
                    	
                       
                        scanf("%d",&choice);
                    }


                    break;
                }
            case 9:
                {
					#define GREEN   "\x1b[32m"
					#define RESET   "\x1b[0m"
					#define RED     "\x1b[31m"
					#define FILE_NAME "MadDog.txt"
					
					
					bool chp1 = false, chp2 = false, chp3 = false, chp4 = false;
					bool key = false, FiveHundred = false, JailKey = false, sheriff = false;
					int take;
					
					FILE *wptr;

					char option[256];
					
					    printf("you open the door and find ........ \n");
                        printf("You are in a dark room. You then open another door and you see light shining bright as you step out side\n");
						printf("As you walk outside into what looks like a ghost town, an old man with gray beard and bald head runs up and tells you \" stranger, we need your help!\" \n");
						puts(" ");
						printf("You are first confused and want to ask what's happening but the old man continues \" MadDog McCree and his gang has return to terrorize our town! \n");
						puts(" ");
						printf("You have no idea how you got here but you feel you got to save this town to get out of here. \" His gang has taken over various parts of town and only you can get them out of here! \"");
						puts(" ");
						printf("Maybe this is too dangerous, perhaps you should decline but the old man continue \" His gang can be found over at the Saloon, the Post Office, the Bank, General Store, and in the Jail where they locked the sheriff! \"\n");
						printf("\" So please stranger, can you help us take out MadDog and his gang once as for all?? \"");
						puts(" ");
                    while(choice != 99)
					{
                        printf("1. Yes, I'll help  \n2. Sorry old man, I'll come back later  \n");
                        scanf("%d",&choice);

                        if(choice == 1)
						{
					
                        printf("You tell the old man your name and agree to help him chase the MadDog gang out of town. \n");
						printf("\"Oh thank you, %s! Now hurry, MadDog is only growing stronger the longer we stand here! \"", name);
						puts(" ");
						while(choice != 99)
						{
						
						Menu:
						puts("Choose a location:\n1. The Bank \n2. The Saloon \n3. The Jail \n4. The Post Office \n");
                        scanf("%d", &choice);
						
							if(choice == 1 && chp1 == false)
								{
											Bank:
											printf("AS you walk toward the entrance, a man hiding in a barrel next to the entrance peaks his head out.\n");
											printf("He tells you \"One of MadDog's gang is in there! Be careful, he is armed! \"");
											printf("You step into the bank, it looks abandon. However you do hear some noise. To the '"GREEN"west"RESET"' of you is the teller booth. '"GREEN"North"RESET"' of you is a door. You can also turn '"GREEN"back"RESET"'\n");
										while(*option != 'z')
											{
											printf(GREEN "Decision>" RESET);
											scanf("%s", option);
											
											
												if(strcasecmp(option, "west") == 0)
												{
													printf("You walk up to the teller booth. You try to see as much as you can but the secure bars are in the way. \n");
													printf("'"GREEN"Shout"RESET"' to the get a response or turn '"GREEN"back"RESET"'. \n");
												while(*option != 'z')
												{
													printf(GREEN "Decision>" RESET);
													scanf("%s", option);
														
														if(strcasecmp(option, "shout") == 0)
														{
															printf("You shout \" Hey! who's back there? \" You get a response \" None of your damn business!\" You respond back saying \"I know what you're doing, now get out here and leave this town in peace\"\n");
															printf("You hear the man respond \"That's it, you want to go? lets go! \" You hear foot steps coming closer and closer.\n");
															printf("'"GREEN"Hide"RESET"' immediately or '"GREEN"pull"RESET"' your gun out and get ready to tango?\n");
														while(*option != 'z')
														{
															printf(GREEN"Decision>" RESET);
															scanf("%s", option);
															
															if(strcasecmp(option, "hide") == 0)
															{
																printf("You suddenly hear \" Oh we have a prankster do we? Okay funny guy, this will be your last laugh! \"\n");
																printf("The foot steps sound like they are heading to the door. \n");
																printf("The door is now opening. You can '"GREEN"stay"RESET"' there or '"GREEN"shoot"RESET"' as soon as the guy walks out \n");
															while(*option != 'z')
															{
																printf(GREEN "decision>" RESET);
																scanf("%s", option);
																
																if(strcasecmp(option, "stay") == 0)
																{
																	printf("You see the door open but you stayed in place\n");
																	printf("The man looks overweight, wearing a plaid red shirt, with black suspender. \n");
																	printf("He has a full goatee, basically he looks like a fat duck dynasty character or young santa Claus. \n");
																	printf("However he doesn't look friendly. He has a shotgun pointed right at you. \" It's best you outta get out of here. it will turn ugly\" He tells you \n");
																	printf("He's not wrong, you better get out of here and restart this chapter. Any further and your a dead man. \n");
																	goto Menu;
																}
																
																else if(strcasecmp(option, "shoot") == 0)
																{
																	printf("You see the door open and you immediately shoot. Residue from the door spreads out around. \n");
																	printf("\"GODDAMN IT!\", the man shouts. You get up and immediately run behind the damage door. \n");
																	printf("\"That's it!\" the man shouts \"you are so f**king dead!\" He runs out the room looks left and right while you are right be hind him hiding behind the damaged door.\n");
																	printf("The man himself looks overweight, wearing a plaid red shirt, with black suspenders. \n");
																	printf("He is wearing a cowboy hat and has a full goatee, basically he looks like a fat duck dynasty character. \n");
																	printf("He's about to turn around, what's your move?");
																	printf("You notice that one shot was your only ammo. You can '"GREEN"hit"RESET"' him with your gun or do '"GREEN"nothing"RESET"' \n");
																while(*option != 'z')
																{
																	printf(GREEN "Decision>" RESET);
																	scanf("%s", option);
																	
																	if(strcasecmp(option, "hit") == 0)
																	{
																		printf("You immediately hit the man in the back of the head. He's out cold. \n");
																		printf("The guy that was hiding in the barrel walks in. He looks a little lanky with blue plaid shirt and Levis denom jeans. \n");
																		printf("Surprisingly, he was strong enough to pick up the man. \"I'm gonna cuff this man before he walks up. Here's award stranger, this man has been wanted for various murder and robbery crimes.\"\n");
																		printf("The skinny man awards you with 500 dollars. He then walks into the back room and notice a gun the ground. It as a double barreled side by side coach shot gun. Boy that would of spelled trouble if he pointed that at you!\n");
																		printf("The skinny guy tells you that the jail cannot be opened. One of MadDog's gang members have the key. You better hurry and find out where it's at!");
																		puts(" ");
																		printf("--------- END OF THIS CHAPTER ---------\n");
																		FiveHundred = true;
																		chp1 = true;
																		goto Menu;
																		
																	}
																	
																	else if(strcasecmp(option, "nothing") == 0)
																	{
																		printf("You didn't move, nothing at all. The man turns around, points his gun at you. Before you know it, it's too late. No need to tell you what happens next. \n");
																		puts(" ");
																		printf("GAME OVER\n");
																		
																		exit(EXIT_SUCCESS);
																	}
																}
																}
															}
															}
															
															else if(strcasecmp(option, "pull") == 0)
															{
																printf("You pull your gun, ready to shoot the man. \n");
																printf("You see him behind the teller desk, he is overweight with a red plaid shirt with black suspenders. He's wearing a cowboy hat and his face have a full goatee. \n");
																printf("He clearly sees you with a .44 magnum pointed at him. \"Go ahead!\" he says, \"you don't got the guts!\". It's up to you, this can turn ugly quick \n");
																printf("You can '"GREEN"shoot"RESET"' the man or you can '"GREEN"disarm"RESET"' yourself \n");
															while(*option != 'z')
															{
																puts(GREEN "Decision>" RESET);
																scanf("%s", option);
																
																if(strcasecmp(option, "shoot") == 0)
																{
																	printf("You shoot the man,\" GODDAMN IT!\" he shouts. Only his hat is hit; you got a pretty bad shot. \n");
																	printf("He seems really frustrated now and proceeded to run around to the door near you. \n");
																	printf("It's up to you. You can '"GREEN"hide"RESET"' behind the door or just '"GREEN"stand"RESET"' there \n");
																while(*option != 'z')
																{
																	printf("Decision>");
																	scanf("%s", option);
																	
																	if(strcasecmp(option, "hide") == 0)
																	{
																		printf("You suddenly hear \"You are about to meet your maker!\"\n");
																		printf("The criminal is now out the door and right in front of you but his back turned. \n");
																		printf("You can '"GREEN"stay"RESET"' there or '"GREEN"hit"RESET"' the man back of his head with your gun. \n");
																	while(*option != 'z')
																	{
																		printf(GREEN "decision>" RESET);
																		scanf("%s", option);
																		
																		if(strcasecmp(option, "hit") == 0)
																		{
																			printf("You immediately hit the man in the back of the head. He's out cold. \n");
																			printf("The guy that was hiding in the barrel walks in. He looks a little lanky with blue plaid shirt and Levis denom jeans. \n");
																			printf("Surprisingly, he was strong enough to pick up the man. \"I'm gonna cuff this man before he walks up. Here's award stranger, this man has been wanted for various murder and robbery crimes.\"\n");
																			printf("The man awards you with 500 dollars. He then walks into the back room and notice a gun the ground. It as a double barreled side by side coach shot gun. Boy that would of spelled trouble if he pointed that at you!\n");
																			printf("The guy explains that the jail cannot be opened. One of MadDog's gang members have the key. You better hurry and find out where it's at!");
																			puts(" ");
																			printf(GREEN "--------- END OF THIS CHAPTER ---------\n" RESET);
																			FiveHundred = 1;
																			chp1 = true;
																			goto Menu;
																		}
																		
																		else if(strcasecmp(option, "stay") == 0)
																		{
																			printf("The man turned around and he has a shotgun pointed right at you. \" It's best you outta get out of here. it will turn ugly\" He tells you \n");
																			printf("He's not wrong, you better get out of here and restart this chapter. Any further and your a dead man. \n");
																			printf("-----------------------\n");
																			goto Menu;
																		}
																	}
																	}
																	
																	else if(strcasecmp(option, "stand") == 0)
																	{
																		printf("The door opens fast, you see the man with a doubled barreled side by side coach shotgun. \n");
																		printf("One of a kind. Too bad you didn't get to observe it for that long but you did get a taste of the bullets. \n");
																		printf("Yea, you got the hint, you died. Why did you just stand there again? \n");
																		printf("\n");
																		puts(RED"GAME OVER\n"RESET);
																		
																		exit(EXIT_SUCCESS);
																	}
																}
																}
																
																else if(strcasecmp(option, "disarm") == 0)
																{
																	printf("You disarm yourself but the man raises a shot gun. Double barreled side by side cough shot gun. \n");
																	printf("\"I knew you wouldn't, now get the hell out of here or you'll be pushing daisies!\" the criminal shouts \n");
																	printf("There isn't really anything you can do. We'll pretend this didn't happen and restart the chapter. \n");
																	printf("-------------------------------------------------------------------------------------------------\n");
																	
																	goto Menu;
																}
															}
															}
														}
						
														}
														else if(strcasecmp(option, "Back") == 0)
														{
															printf("You've decided to turn back\n");
															printf("------------------------------");
															goto Bank;
														}
												}
												}
												
												else if(strcasecmp(option, "north") == 0)
												{
													printf("You walk toward the door, you hear banging noises like someone is trying to break something");
													printf("'"GREEN"Open"RESET"' to open the door or turn 'back' around?\n");
												while(*option != 'z')
												{
													printf(GREEN "Decision>" RESET);
													scanf("%s", option);
													
														if(strcasecmp(option, "Open") == 0)
														{
															printf("You slowly open the door. You see a overweight man with red plaid shirt and black suspenders.\n");
															printf("He looks as if he is trying to break into a safe.\n");
															printf("Should you '"GREEN"shoot"RESET"' the man or turn '"GREEN"back"RESET"' around?\n");
														while(*option != 'z')
														{
															puts(GREEN "Decision>" RESET);
															scanf("%s", option);
															
															if(strcasecmp(option, "shoot") == 0)
															{
																printf("You shoot your gun and the man's hat flies off his head. \n");
																printf("\"WHAT THE FU-\", the man shouts loudly. He seems to turning around. What do you do?\n");
																printf("'"GREEN"Hide"RESET"' behind the door or '"GREEN"stay"RESET"' where you are at?\n");
															while(*option != 'z')
															{
																printf(GREEN "Decision>" RESET);
																scanf("%s", option);
															
																if(strcasecmp(option, "hide") == 0)
																{
																printf("You suddenly hear \"whoever that was, you are about to meet your maker!\"\n");
																printf("The foot steps sound like they are heading to the door. The criminal is now out the door and right in front of you but his back turned. \n");
																printf("You can '"GREEN"stay"RESET"' there or '"GREEN"hit"RESET"' the man back of his head with your gun. \n");
															while(*option != 'z')
															{
																printf(GREEN "Decision>" RESET);
																scanf("%s", option);
																
																	if(strcasecmp(option, "hit") == 0)
																	{
																		printf("You immediately hit the man in the back of the head. He's out cold. \n");
																		printf("The guy that was hiding in the barrel walks in. He looks a little lanky with blue plaid shirt and Levis denom jeans. \n");
																		printf("Surprisingly, he was strong enough to pick up the man. \"I'm gonna cuff this man before he walks up. Here's award stranger, this man has been wanted for various murder and robbery crimes.\"\n");
																		printf("The man awards you with 500 dollars. He then walks into the back room and notice a gun the ground. It as a double barreled side by side coach shot gun. Boy that would of spelled trouble if he pointed that at you!\n");
																		printf("The guy explains that the jail cannot be opened. One of MadDog's gang members have the key. You better hurry and find out where it's at!");
																		puts(" ");
																		printf("--------- END OF THIS CHAPTER ---------\n");
																		FiveHundred = true;
																		chp1 = true;
																		goto Menu;
																	}
																	
																	else if(strcasecmp(option, "stay") == 0)
																	{
																		printf("The man turned around and he has a shotgun pointed right at you. \" It's best you outta get out of here. it will turn ugly\" He tells you \n");
																		printf("He's not wrong, you better get out of here and restart this chapter. Any further and your a dead man. \n");
																		printf("-----------------------\n");
																		goto Menu;
																	}
															}
																}
																else if(strcasecmp(option, "stay") == 0)
																{
																	printf("You decided to stay right where you are at. The door opens very fast. The man is now right in front of you.\n");
																	printf("\"Boy it is best you outta leave now or you'll be sleeping six feet under the ground.\"\n");
																	printf("Standing there wasn't a good idea. What is a good idea is trying this chapter again\n");
																	printf("You are now returning to the main menu.\n");
																	printf("---------------------------------------\n");
																	
																	goto Menu;
																}
															}
															}
																
															else if(strcasecmp(option, "back") == 0)
															{
																printf("You've turned around back\n");
																printf("-------------------------\n");
																
																goto Bank;
															}
														}
																
														}
														
														else if(strcasecmp(option, "back") == 0)
														{
															printf("You've turned around back\n");
															printf("-------------------------\n");
															goto Bank;
															
														}
												}
													
												}
												
												else if(strcasecmp(option, "back") == 0)
												{
													goto Menu;
												}
											}
								}
								
								if(choice == 1 && chp1 == true)
								{
									printf("THIS CHAPTER IS COMPLETE. CHOOSE ANOTHER CHAPTER. \n");
									printf(GREEN "------------------------------------------------- \n" RESET);
									goto Menu;
								}
						
								if(choice == 2 && chp2 == false)
								{
									printf("You walk into the Saloon, everyone stares at you like they've never seen a human \n");
									puts("You walk toward the stools at the bar. A man with a bow tie and handle bar mustache approaches you and ask \"What will it be?\"");
									puts("With no words to say, the bartender just pours a shot of whiskey. Bartender then whispers to you \"those men to the left side playing cards are part of MadDog's gang. Keep an eye on them. They have the key to free the sheriff.\"");
									puts("\"HEY!\" One of the men on the left side of you shout, \" I ain't never seen you before, who are you? \" It's three men over to your left.");
									printf("\n1. The name's %s, what's it to ya? \n2. None of your Goddamn business! \n3. Turn around back\n", name);
									while(choice != 99)
									{
									scanf("%d", &choice);
										
										if(choice == 1 && FiveHundred == false)
										{
											printf("\"Well you better not be planning stealing the key to free the sheriff!\" The man in the middle yells.\n");
											printf("You can say you are '"GREEN"going"RESET"' to do it or so '"GREEN"what"RESET"' if you are.\n");
											while(*option != 'z')
											{
											printf(GREEN "Decision>" RESET);
											scanf("%s", option);
											
											if(strcasecmp(option, "going") == 0)
											{
												printf("\"Yea, I am and there's nothing you can do \", you tell the men. \n");
												printf("Bad idea, all the three men over to the left pull their guns and point it at you. \n");
												printf("Let's pretend that this didn't happen and do this chapter again. \n");
												printf("---------------------------------------------------------------- \n");
												printf("\n");
												
												goto Menu;
											}
											
											else if(strcasecmp(option, "what") == 0)
											{
												printf("\"What if I am?\", you ask the man with his other crew. \n");
												printf("\"Well I got the key!\" the man in the middle shouts at you while he jingle the keys in his left hand. \n");
												printf("His men around him seem to be smirking; they know you aren't getting the keys. \n");
												printf("However you are confident. You tell them \"Well we can do this the easy way... or the hard way \" \n");
												printf("The minute you've said that, the three men got serious and got their hand on their holsters. \n");
												
												fight:
												printf("\"Well it seems we'll be doing the hard way. Any last wishes?\", you got some guts, I'll tell you what. \n");
												printf("You are now in a shoot out. This is a chance of random (numbers between 1 to 10 to be exact). If you take the challenge to face these men, you better hope you got a date with lady luck (sexy)\n");
												printf("BUT if you aren't lucky, it could be game over. You can 'take' the challenge or go 'back' to restart this chapter.\n");
												printf("If your number lands a 1, 4, or 8. The RESET will just reset will count as a miss. (NOTE: LOSING WILL END UP IN A GAME OVER!)\n");
												printf("If you are up to it, just type '"GREEN"take"RESET"', if not just type '"GREEN"back"RESET"'. GOOD LUCK!\n");
												while(*option != 'z')
												{	
												printf(GREEN "Decision>" RESET);
												scanf("%s", option);
												
												if(strcasecmp(option, "take") == 0)
												{
												
													
													int try=0,hit=0,need=0,left=0, miss=0;
													
													for(try = 5; try > 0; try--)
													{
														
													take = rand() % 10 + 1;
													
														if(take == 1 || take == 4 || take == 8)
														{
															hit++;
															
															need = 3 - hit;
															
															printf("You've rolled at %d, it's a hit! That's %d, %d to go!\n",take, hit, need);
															
															if(hit == 3)
																{
																	printf("You've won the shoot out. All three men are in a state of shock. The man on the right hat has flown off. The left had his gun shot off his hand. The one in the middle completely dropped the keys \n");
																	printf("\"Now get out of here! All of you! Oh don't forget to drop the keys and don't let the door hit your ass on the way out!\" All men run out scared. Everyone in the bar was as shock to see you win the battle.");
																	printf("\"Gee, lady luck was surely on your side, stranger!\" The bartender compliments in an encouraging way. You grab the keys and begin walking out the bar.\n");
																	printf("However, you stop right at the door, turn your head to the crowed and say \"it's all in a days work... and sorry for the mess.\"\n");
																	printf("Congrats on winning the bar fight and just skipping chapter one! (Feel free to play chapter one)\n");
																	printf("--------- END OF THIS CHAPTER ---------\n");
																	key = true;
																	chp2 = true;
																	goto Menu;
																}	
															
															printf("Type '"GREEN"roll"RESET"' to try again!\n");
															scanf("%s", option);
															
														}
														else
														{
															miss++;
															
															printf("You've rolled a %d, that's a miss... \n", take);
															
															if(miss == 3)
																{
																	printf("The shoot out didn't go in your favor. Bullets are flying left and right. Every bullet you had missed all three men. \n");
																	printf("The whole saloon is now an entire battle royale. You aren't the gun slinger wizard as you thought you were. \n");
																	printf("It's not easy to say this but you took more bullets than it took the tries. \n");
																	printf(RED"GAME OVER\n"RESET"HINT: COMPLETING CHAPTER ONE WILL RESULT THIS CHAPTER DIFFERENTLY\n");
																	
																	exit(EXIT_SUCCESS);
																}
																	
															printf("Type '"GREEN"roll"RESET"' to try again!\n");	
															scanf("%s", option);
														}
													
													}
													
												}
												
												else if(strcasecmp(option, "back") == 0)
												{
													puts("You've decided to go back. It was perhaps for the best. \n");
													puts("------------------------------------------------------- \n");
													
													goto Menu;
												}
												}
											}
											}
										}
										else if(choice == 1 && FiveHundred == true)
											{
												printf("\"Well you better not be planning stealing the key to free the sheriff!\" The man in the middle yells.\n");
												printf("You can say you are '"GREEN"going"RESET"' to do it or so '"GREEN"what"RESET"' if you are.\n");
												while(*option != 'z')
												{	
												printf(GREEN"Decision>"RESET);
												scanf("%s", option);
												
												if(strcasecmp(option, "going") == 0)
												{
													printf("\"Yea, I am and there's nothing you can do \", you tell the men. \n");
													printf("Bad idea, all the three men over to the left pull their guns and point it at you. \n");
													printf("Let's pretend that this didn't happen and do this chapter again. \n");
													printf("---------------------------------------------------------------- \n");
													printf("\n");
													
													goto Menu;
												}
												
												else if(strcasecmp(option, "what") == 0)
												{
													printf("\"What if I am?\", you ask the man with his other crew. \n");
													printf("\"Well I got the key!\" the man in the middle shouts at you while he jingle the keys in his left hand. \n");
													
													bribe:
													printf("His men around him seem to be smirking, they know you aren't getting the keys. \n");
													printf("However you are confident. You say to them, \"Well I'll tell you what, we'll play a game. I'll take you on in a game of Vingt et Un for the key. \" \n");
													printf("\"Yea? And what do you got to make such a bet?\", the man scoffs. From your pocket, you pull the five-hundred dollars from your award. \n");
													printf("All three men eyes widen. \"I win, the key is mine. If I lose, the money is yours.\"\n");
													printf("They seem skeptical but the man in the middle looked as if he knows he'll win. He accepts the challenge.\n");
													printf("--------------------------------------------------------------------------------------------------\n");
													printf("The rules of Vingt et Un (BlackJack) is simple. You must beat the dealers hand by having the higher card value. Dealer must hit till the dealer's cards value are matching or above seventeen.\n");
													printf("Your options will be: \n");
													printf("'Hit' - To get cards \n'Stand' - Stay with the cards that drawn \n'Double' - Double your bet however you can only draw one card \n'Split'(If necessary) - Will spit your hand if the cards are even \n");
													printf("----------------------------------------------------------------- \n");
													printf("Additional information: \n");
													printf("Your and the dealer's cards value must stay under twenty-one or you will bust! You must win three games to proceed. \n");
													printf("If you are up to it, just type '"GREEN"take"RESET"', if not just type '"GREEN"back"RESET"'. GOOD LUCK!\n");
													while(*option != 'z')
													{	
													printf(GREEN"Decision>"RESET);
													scanf("%s", option);
													
													
													if(strcasecmp(option, "take") == 0)
													{
														int PC1=0, PC2, PC3, COM1, COM2, COM3, left=0, i,j,PT, CT;
														int win=0, lose=0;
														int *ptr1, *ptr2, *ptr3, *ptr4, *whole;
														
														
														int Deck1[13] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
														int Deck2[13] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
														int Deck3[13] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
														int Deck4[13] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
														
														ptr1 = Deck1;
														ptr2 = Deck2;
														ptr3 = Deck3;
							 							ptr4 = Deck4;
														
														shuffle(ptr1, ptr2, 13);
														shuffle(ptr3, ptr4, 13);
														shuffle(ptr2, ptr4, 13);
														shuffle(ptr1, ptr3, 13);
														shuffle(ptr3, ptr2, 13);
														shuffle(ptr4, ptr1, 13);
														
														for(j = 5; j >= 0; j--)
														{

														i = (rand()% 13) + 1;
														
														PC1 = *(ptr3 + i);
														PC2 = *(ptr4 + i);
														COM1 = *(ptr2 + i);
														COM2 = *(ptr3 + i);
						
														if(PC1 == 1 || PC2 == 1)
														{
															if(PC1 == 1 && PC2 != 1)
															{
																PC1 = PC1 + 10;
															}
															if(PC1 == 1 && PC1 != 1)
															{
																PC2 = PC2 + 10;
															}
															if(PC1 == 1 && PC2 == 1)
															{
																PC1 = PC1 + 10;
															}
														}	
														
														if(COM1 == 1 || COM2 == 1)
														{
															if(COM1 == 1 && COM2 == 10)
															{
																COM1 = COM1 + 10;
																
																printf("Dealer have a ace with a %d, dealer wins.. you have %d left", PC2,j);
															}
															if(COM2 == 1 && COM1 == 10)
															{
																COM2 = COM2 + 10;
																printf("You have a ace with a %d, dealer wins.. you have %d left", PC2,j);
															}
															if(COM1 == 1 && COM2 != 1)
															{
																COM1 = COM1 + 10;
															}
															if(COM2 == 1 && COM1 != 1)
															{
																COM2 = COM2 + 10;
															}
															if(COM1 == 1 && COM2 == 1)
															{
																COM1 = COM1 + 10;
															}
															
														}
														PT = PC1 + PC2;
														CT = COM1 + COM2;
														printf("You are presented with %d and %d. A %d total card value. ", PC1, PC2, PT);
														printf("Dealer has a %d faced up. \n", COM1);
														
														move:
														printf("What is your move?\n");
														printf(GREEN "Decision>" RESET);
														scanf("%s", option);

														
														if(strcasecmp(option, "hit") == 0)
														{
															hit:
															
															i = rand()% 13;
															
															PC3 = *(ptr3 + i);
															
															PT = PT + PC3;
															
															if(PT > 21)
															{
																bust:
																lose++;
																printf("A %d card flips\n", PC3);
																printf("Your cards values at %d. You busted, you lose this hand.\n", PT);
																if(lose == 3)
																{
																	goto lost;
																}
																printf("Type '"GREEN" deal "RESET"' to continue. \n");
																scanf("%s", option);

															}
															else if(PT == 21)
															{
																win++;
																left = 3 - win;
																printf("A %d card flip which makes your total cards value %d\n", PC3, PT);
																printf("BLACKJACK! Congrats!\n");
																printf("That's %d,%d to go!\n", win, left);
																if(win == 3)
																{
																	goto winner;
																}
																printf("Type '"GREEN" deal "RESET"' to continue. \n");
																scanf("%s", option);
															}
															else if(PT < 21)
															{
																printf("A %d card flips \n", PC3);
																printf("Your new total is %d, what is your next move?\n", PT);
																printf(GREEN "Decision>" RESET);
																scanf("%s", option);

																
																	if(strcasecmp(option, "hit") == 0)
																	{
																		goto hit;
																	}
																	
																	if(strcasecmp(option, "stand") == 0 || strcasecmp(option, "stay") == 0)
																	{
																		goto stand;
																	}
	
															}
															
														}
														
														if(strcasecmp(option, "double") == 0)
														{
															
															i = rand()% 13;
															
															PC3 = *(ptr4 + i);
															
															PT = PT + PC3;
															
															if(PT > 21)
															{
																goto bust;
															}
															else if(PT == 21)
															{
																win++;
																left = win - 3;
																printf("BLACKJACK! Congrats!\n");
																printf("That's %d,%d to go!\n", win, left);
																if(win == 3)
																{
																	goto winner;
																}
																printf("Type '"GREEN" deal "RESET"' to continue. \n");
																scanf("%s", option);
															}
															else if (PT < 21)
															{
																printf("A %d card flips.", PC3);
																printf("Your new total is %d", PT);
																goto stand;
															}
														}
														if(strcasecmp(option, "split") == 0)
														{
															if(PC1 != PC2)
															{
																printf("You cannot split your cards.\n");
																goto move;
															}
															
															if(PC1 == PC2)
															{
																i = rand()% 13;
																
																PC3 = *(ptr4 + i);
																
																int PT1 = PC1 + PC3;
																
																printf("You're first hand shows a %d and %d. Total card value of %d. What is your move?\n", PC1, PC3, PT1);
																do
																{	
																	printf(GREEN"Decision>"RESET);
																	scanf("%s", option);
																	
																	if(strcasecmp(option, "hit") == 0)
																	{
																	i = rand()% 13;
																
																	PC3 = *(ptr3 + i);
																
																	PT1 = PT1 + PC3;
																	
																	printf("Next card is a %d. Giving you %d total value.\n", PC3, PT1);
																		if(PT1 > 21)
																		{
																			lose++;
																			printf("A %d card flips\n", PC3);
																			printf("Your cards values at %d. You busted, you lose this hand. You have %d tries left\n", PT, j);
																			if(lose == 3)
																			{
																				goto lost;
																			}
																			printf("Type '"GREEN" stand "RESET"' to continue. \n");
																			scanf("%s", option);
																			continue;
																		}
																	}
																}
																while(!strcasecmp(option, "stand") == 0);
																
																i = rand()% 13;
																
																int PC4 = *(ptr4 + i);
																
																int PT2 = PC1 + PC4;
																
																printf("You're second hand shows a %d and %d. Total card value of %d. What is your move?\n", PC1, PC4, PT2);
																do
																{	
																	printf(GREEN"Decision>"RESET);
																	scanf("%s", option);
																	
																	if(strcasecmp(option, "hit") == 0)
																	{
																	i = rand()% 13;
																
																	PC4 = *(ptr3 + i);
																
																	PT2 = PT2 + PC4;
																	
																	printf("Next card is a %d. Giving you %d total value.\n", PC4, PT2);
																	if(PT2 > 21)
																		{
																			lose++;
																			printf("A %d card flips\n", PC3);
																			printf("Your cards values at %d. You busted, you lose this hand.\n", PT);
																			if(lose == 3)
																			{
																				goto lost;
																			}
																			printf("Type '"GREEN" continue "RESET"' to continue. \n");
																			scanf("%s", option);
																			continue;
																		}
																	}
																}
																while(!strcasecmp(option, "stand") == 0);
																
																printf("Dealer's cards are %d and %d. Total of %d card value.\n", COM1, COM2, CT);
																
																while(CT < 17)
																{
																	i = rand()% 13;
																	
																	COM3 = *(ptr3 + i);
																	
																	CT = CT + COM3;
																	
																	printf("Dealer hits a %d.\n", COM3);
																	printf("Dealer has a %d in total.\n", CT);
																	
																}
																if(CT > 21)
																{
																	win++;
																	printf("Your first card present a total card value of %d. \n", PT);
																	printf("Dealer presents a %d. Dealer bust, you win this hand!. \n", CT);
																	printf("That's %d,%d to go!\n", win, left);
																	if(win == 3)
																	{
																	  goto winner;
																	}
																	printf("Type '"GREEN" Deal "RESET"' to continue. \n");
																	scanf("%s", option);
																}
																else if(CT > PT1)
																{
																	lose++;
																	printf("Your first card present total card value of %d. \n", PT1);
																	printf("Dealer wins this hand...\n");
																	if(lose == 3)
																	{
																		goto lost;
																	}
																	
																}
																else if(PT1 > CT)
																{
																	win++;
																	left = 3 - win;
																	printf("Your first card present total card value of %d. \n", PT1);
																	printf("Dealer presents a %d. You won this hand!\n", CT);
																	if(win == 3)
																	{
																		goto winner;
																	}
																	printf("That's %d,%d to go!\n", win, left);

																	
																}
																else if(PT1 == CT)
																{
																	j++;
																	printf("You present total card value of %d. \n", PT1);
																	printf("Dealer presents a %d. This is a push.\n", CT);
																	
																}
																else if(CT > PT2)
																{
																	printf("Your first card present total card value of %d. \n", PT2);
																	printf("Dealer wins this hand...\n");
																	lose++;
																	if(lose == 3)
																	{
																		goto lost;
																	}
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																	
																	
																}
																else if(PT2 > CT)
																{
																	win++;
																	if(win == 3)
																	{
																		goto winner;
																	}
																	left = 3 - win;
																	printf("You present total card value of %d. \n", PT2);
																	printf("Dealer presents a %d. You won this hand!\n", CT);
																	printf("That's %d,%d to go!\n", win, left);
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																	
																	
																}
																else if(PT2 == CT)
																{
																	j++;
																	printf("You present total card value of %d. \n", PT2);
																	printf("Dealer presents a %d. This is a push. \n", CT);
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																}
																
																
															}
																	
																	
														}
														
														if(strcasecmp(option, "stand") == 0 || strcasecmp(option, "stay") == 0)
														{
							
																stand:
																printf("Dealer's cards are %d and %d. Total of %d card value.\n", COM1, COM2, CT);
																
																while(CT < 17)
																{
																	i = rand()% 13;
																	
																	COM3 = *(ptr3 + i);
																	
																	CT = CT + COM3;
																	
																	printf("Dealer hits a %d.\n", COM3);
																	printf("Dealer has a %d in total.\n", CT);
																	
																}
																if(CT > 21)
																{
																	win++;
																	left = 3 - win;
																	printf("You present a total card value of %d. \n", PT);
																	printf("Dealer presents a %d. Dealer bust, you win this hand!. \n", CT);
																	if(win == 3)
																		{
																			goto winner;
																		}
																	printf("That's %d,%d to go!\n", win, left);
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																}
																else if(CT > PT)
																{
																	lose++;
																	printf("You present total card value of %d. \n", PT);
																	printf("Dealer presents a %d, dealer wins...\n", CT);
																	if(lose == 3)
																	{
																		lost:
																		printf("You've lost three times. It seems lady luck wasn't on your side.\n");
																		printf("You can have another shot once we restart this chapter or you could take and alternate path\n");
																		printf("You'll now go back to the menu\n");
																		printf("-------------------------------\n");
																		goto Menu;
																	}
																	
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																	
																}
																else if(PT > CT)
																{
																	win++;
																	left = 3 - win;
																	printf("You present total card value of %d. \n", PT);
																	printf("Dealer presents a %d. You won this hand!\n", CT);
																	printf("That's %d,%d to go!\n", win, left);
																	if(win == 3)
																		{
																			winner:
																			printf("You beat the man for the sheriff's key. \"Well if you still think I'm giving it, forget it!\" the man assertively tells you.\n");
																			printf("\"Just hand 'em the key! The stranger won fair and square!\" the man on the left shouts at the man you beat.\n");
																			printf("With a mad grin on his face, the man you beat puts the key on the table. All three out laws start walking out the bar but before they walk out, you shout \"hey!\".\n");
																			printf("As they turn, you toss three-hundred of your money toward the men. That's more than half of your award! \"I don't need this much, you men take it and clean yourself up. Don't worry, I will never rat ya'll wrongful doings.\", you tell the men.\n");
																			printf("With all three men in shocking in despair, one of them thanks you. Your great generosity will certainly keep those men out of town. Now lets get the sheriff out of jail and put an end to MadDog for good!\n");
																			printf("--------- END OF THIS CHAPTER ---------\n");
																			key = true;
																			chp2 = true;
																			goto Menu;
																		}
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
							
																}
																else if(PT == CT)
																{
																	j++;
																	printf("You present total card value of %d. \n", PT);
																	printf("Dealer presents a %d. This is a push.\n", CT);
																	printf("Type '"GREEN" deal "RESET"' to continue. \n");
																	scanf("%s", option);
																}
														}
														}
													}
													
													else if(strcasecmp(option, "back") == 0)
													{
														puts("You've decided to go back. \n");
														puts("-------------------------- \n");
														
														goto Menu;
													}
													}
												
												}

												}
												
												
											}
											
										if(choice == 2 && FiveHundred == true)
										{
											printf("\"Want to say that again?!\" The man yells as he's reaching for his gun\n");
											printf("\"I would outta apologize if I was you!\"\n");
											printf("You can '"GREEN"apologize"RESET"' or stay '"GREEN"silent"RESET"'. The choice is yours.\n");
											while(*option != 'z')
											{
											printf(GREEN"Decision>"RESET);
											scanf("%s", option);
											
											if(strcasecmp(option, "apologize") == 0)
											{
												apologized:
												
												printf("You tell the man you are sorry for your actions. \n");
												printf("He tells you, \"yea, that's what I thought!\"\n");
												printf("There isn't going anywhere from here, lets try that again.\n");
												
												goto Menu;
											}
											
											else if(strcasecmp(option, "silent") == 0)
											{
												printf("You stay silent while staring at the man... intimidately.\n");
												printf("\"Hey, did you hear what I said?? You better apologize!\", the man shouts at you. \n");
												printf("He seems to be getting agrivated. You may find yourself in a gun fight.\n");
												printf("\"Hey boy! If you don't apologize now, I'll make you apologize!\" This is it! You are in big troulbe now!\n");
												printf("You can still get yourself out of this, that five-hundred you got can be handy. type '"GREEN"bribe"RESET"' to cool things down\n");
												printf("type '"GREEN"pull"RESET"' to fight this guy or type '"GREEN"back"RESET"' to go back to the menu.\n");
												printf(GREEN"Decision>"RESET);
												scanf("%s", option);
												
												if(strcasecmp(option, "bribe") == 0)
												{
													goto bribe;
												}
												
												else if(strcasecmp(option, "pull") == 0)
												{
													goto fight;
												}
												
												else if(strcasecmp(option, "back") == 0)
												{
													printf("You decided to go back\n");
													printf("----------------------\n");
													
													goto Menu;
												}
											}
											}
										}
										
										else if(choice == 2 && FiveHundred == false)
										{
											printf("\"Want to say that again?!\" The man yells as he's reaching for his gun\n");
											printf("\"I would outta apologize if I was you!\"\n");
											printf("You do not have anything but your gun to back yourself. You can tango with this guy or go back. \n");
											printf("Type '"GREEN"fight"RESET"' to get yourself in a gun fight or '"GREEN"back"RESET"' to try this again. \n");
											while(*option != 'z')
											{	
											printf(GREEN"Decision>"RESET);
											scanf("%s", option);
											
											if(strcasecmp(option, "fight") == 0)
											{
												goto fight;
											}
											
											else if(strcasecmp(option, "back") == 0)
											{
												printf("You decided to go back.\n");
												printf("-----------------------\n");
												
												goto Menu;
											}
											}
										}
										else if(choice == 3);
										{
											printf("You decided to go back\n");
											printf("------------------------\n");
											goto Menu;
										}
									}
								}
								if(choice == 2 && chp2 == true)
								{
									printf("THIS CHAPTER IS COMPLETE. CHOOSE ANOTHER CHAPTER. \n");
									printf("------------------------------------------------- \n");
									goto Menu;
								}
								if(choice == 3 && chp3 == false && key == false)
								{
									printf("You open the door to the jail house. You hear a voice yell \"who's there?\"\n");
									printf("You approach to the jail cell, you see it's the town sheriff. \"the name's %s, I'm here to run MadDog and his gang out.\"\n", name);
									printf("\"Boy, am I glade to hear that!\" the sheriff tells you.\"You see, MadDog and his gang out number me and my deputies. They completely over ran us. \nYou got to let me out and stop this shenanigans. Do you have the keys to the cells?\"\n");
									printf("Unfortunately, you don't have the keys, the sheriff tells you that the guy who locked the sheriff may be in the saloon but he only heard that from that criminal on the way out of the jail house\n");
									printf("He furthermore tells you that the man is very hard to deal with though he is dense. A huge gambling man. It's best to find some money and win that key at any cost.\n");
									printf("\"Now don't try to nagociate or challenge this man,\" the sheriff tells you, \"it may end in a deadly way. Now please go and get me out of here!\" \n");
									printf("You will now return to the main menu.\n");
									printf("-------------------------------------\n");
									
									goto Menu;
								}
								
								if(choice == 3 && chp3 == false && key == true)
								{
									printf("You open the door to the jail house. You hear a voice yell \"who's there?\"\n");
									printf("You approach to the jail cell, you see it's the town sheriff. \"the name's %s, I'm here to run MadDog and his gang out.\"\n", name);
									printf("\"Boy, am I glade to hear that!\" the sheriff tells you.\"You see, MadDog and his gang out number me and my deputies. They completely over ran us. \nYou got to let me out and stop this shenanigans. Do you have the keys to the cells?\"\n");
									printf("You pull the jail keys from your pocket. As you release the sheriff, you hear a click but it isn't a the jail unlocking, it's the sound of a revolver being ready to shoot.\n");
									printf("You turn to the left of you and see a pretty build man in a brown vest with a long brown jacket with brown pants. He has the revolver pointed at you\n");
									printf("\"Okay stranger, jump the keys and no one gets hurt\", the man tells you. Should you '"GREEN"drop"RESET"' it or '"GREEN"go"RESET"' for your gun?\n");
									while(*option != 'z')
									{
									printf(GREEN"Decision>"RESET);
									scanf("%s", option);
									
									
										if(strcasecmp(option, "drop") == 0)
										{
											printf("\"That's right fellar,\" the man tells you, \"drop the keys and move back, don't do anything stupid\"\n");
											printf("As soon as the man grabbed the keys from the lock, the sheriff grabbed the outlaws wrist\n");
											printf("The outlaw's left hand which is holding the gun is going over to the sheriff. This is a wise decision, what should you do?\n");
											printf("Pull your gun and '"GREEN"shoot"RESET"' the man or try to throw a '"GREEN"punch"RESET"'?\n");
											while(*option != 'z')
											{
											printf(GREEN"Decision>"RESET);
											scanf("%s", option);
											
												if(strcasecmp(option, "shoot") == 0)
												{
													printf("You pull your gun and shoot the outlaw. His gun falls right out of his hands\n");
													printf("Immediately, the sheriff punches the outlaw, he is now outcold.\n");
													printf("You run toward the jail cell and free the sheriff. \"Let's put this hooligan behind bars.\" The sheriff tells you\n");
													printf("The sheriff walks out of the jail house and you follow behind. He grabs his belt and raises his pants. \"MadDog! You don't stand a chance!\" He says proudly.\n");
													printf("\"I know his girlfriend is at the post office. He may be hidding out there. Lets go %s! Oh by the way, the name is sheriff Moore!\" Sheriff Moore says while tipping his hat.\n", name);
													printf("It's time to head to the post office and finally put an end to this madness!\n");
													printf("--------- END OF THIS CHAPTER ---------\n");
													sheriff = true;
													chp3 = true;
													
													goto Menu;
												}
												
												else if(strcasecmp(option, "punch") == 0)
												{
													printf("You throw a punch to the outlaw. His gun fires but no one got hit. You immediately unlock the jail cell for the sheriff\n");
													printf("\"Thank you kindly, %s. The name is sheriff Moore.\" The sheriff tells you while he tips his hat.\n", name);
													printf("\"Quick lets put this hooligan behind bars before he wakes up.\" Sheriff Moore tells you as he puts the outlaw in jail\n");
													printf("Soon after, you both walk outside the jail cell, \"MadDog! You don't stand a chance!\" He says proudly. \"I know his girlfriend is at the post office. He may be hiding out there. Lets go, %s!\n", name);
													printf("It's time to head to the post office and finally put an end to this madness!\n");
													printf("--------- END OF THIS CHAPTER ---------\n");
													sheriff = true;
													chp3 = true;
													
													goto Menu;
												}
											
											}
										}
										
										else if(strcasecmp(option, "go") == 0)
										{
											printf("You reach for your gun but the outlaw immediately shot it out of your hand.\n");
											printf("This is pretty much a dead end. Let's take you back to the menu and try this again.\n");
											printf("-----------------------------------------------------------------------------------\n");
											
											goto Menu;
										}
											
									}
									
								}
								
								if(choice == 3 && chp3 == true)
								{
									printf("THIS CHAPTER IS COMPLETE. CHOOSE ANOTHER CHAPTER. \n");
									printf("------------------------------------------------- \n");
									goto Menu;
								}
									
								if(choice == 4 && sheriff == false)
								{
									printf("You walk into the Post Office. A fine lady walks to the front counter. Though she isn't like any other lady. She is dressed like the rest of the cowboys.\n");
									printf("\"How can I help you darling?\" The lady ask you. You ask her about MadDog and his whereabouts. She seems slightly distraught when you asked that question but she answers,\"I know his gang is controlling town but I don't know where he is.\"\n");
									printf("She isn't giving much information, there isn't much to do here. She ask you \"listen sugar, if I see him, I'll report to you immediately\", the way she said that sounds dishonest but it's all you got.\n");
									printf("We may need someone who has more information. You will now return to the main menu. \n");
									printf("----------------------------------------------------------------------------------- \n");
									
									goto Menu;
								}
								
								if(choice == 4 && sheriff == true)
								{
									printf("You walk into the Post Office. A fine lady walks to the front counter. Though she isn't like any other lady. She is dressed like the rest of the cowboys.\n");
									printf("\"How can I help you darling?\" The lady ask you. You ask her about MadDog and his whereabouts. She seems slightly distraught when you asked that question but she answers,\"I know his gang is controlling town but I don't know where he is.\"\n");
									printf("She isn't giving much information. \"Perhaps you do, Mrs. Logan\", sheriff Moore says as he walks into the Post Office. \"Now ma'am, stop playing these charades and tell use where Clayton 'MadDog' Logan is at.\" Moore says assertively.\n");
									printf("Ms. Logan is now very distraught, she tells sheriff Moore \"I have no idea what you're talking about. This is an outrage, what gives you authority to just start questioning things like this?\"\n");
									printf("\"You see, I'm the sheriff of this town. My partner, %s, got me out of the jail that YOUR husband locked me in. He also cleaned out the town from MadDog's hooligans. Now Mandy Logan, please, tell us where MadDog is!\"\n", name);
									printf("She is very furious now, she yells \"what makes you think I'm gonna rat my husband out? We still have control of the town, you have to do better then that officer!\"\n");
									printf("As she says that, she pulls out a gun, a Sharps Rifle and points it right at the sheriff.\n");
									while(*option != 'z')
									{
									printf("You can '"GREEN"reach"RESET"'for the gun or '"GREEN"attack"RESET"' the wroman. The choice is yours");
									printf(GREEN"Decision>"RESET);
									
										if(strcasecmp(option, "hit") == 0)
										{
											printf("You reach for the gun and pushed the barrel away from the officer just as soon as she made her shot.\n");
											printf("\"What the hell was that?!\" you hear a distinct voice heard from another room \"That's it you've guys done it now.\" Mandy try blaming you two.\n");
											printf("A man with long neck length black hair, a dark cowboy hat, brown vest and red tie with a dark long jacket wearing brown jeans steps into the Post Office lobby\n");
											printf("He is surprise to see sheriff Moore standing right in front of him. \"What in the world is going on? How did you get out??\"\n");
											printf("\"This guy has been causing trouble around town, hun. He chased our men and let the sheriff out of jail\" Mandy said about you.\n");
											printf("MadDog is very frustrated. He immediately pulls his pistol and says \"come on, babe, lets have good ole fun. Lets finish these two!\"\n");
											printf("You found yourself in a shoot out. Stakes are high, you must roll 3 or better. It is best out of 3. You win twice, MadDog is done, you lose twice you are done. \n");
											printf("Type '"GREEN"ready"RESET"' if you are ready to end MadDog's wrongful doings\n");
											printf(GREEN"Decision>"RESET);
											scanf("%s", option);

											while(*option != 'z')
											{
												if(strcasecmp(option, "ready") == 0)
												{
													int try=0,hit=0,need=0,left=0, miss=0;
													
													for(try = 5; try > 0; try--)
													{
														
													take = rand() % 6 + 1;
													
														if(take >= 3)
														{
															hit++;
															
															need = 2 - hit;
															
															printf("You've rolled at %d, it's a hit! That's %d, %d to go!\n",take, hit, need);
															
															if(hit == 2)
																{
																	printf("You've won the shoot out. You and the officer shot both of Mandy and Clayton guns out of their hands. \n");
																	printf("Even if they pick up their guns, they are out of ammo both outlaws have no choice but to flee.\n");
																	printf("MadDog and his wife run to the back of the Post Office through to the back door. You and sheriff Moore chase after them.\n");
																	printf("Out in the back door, there are two horses which MadDog and Mandy jump on receptively\n");
																	printf("\"You listen to me, buddy!\" MadDog shouts at you,\"This isn't over! You haven't heard the last of MadDog!\" Both Mandy and Clayton ride off fast. \n");
																	printf("\"Let 'em go\" sheriff Moore tells you. \"They'll meet their maker one day. They can't always run forever. You were brave, son. Tell me, where are going to go now?\"\n");
																	printf("\"I'm going home,back into that same portal that brought me here in the first place!\"\n");
																	printf("MadDog wasn't wrong about saying he's going to see you again. You actually received a letter from Western Union... somehow on your computer.\n");
																	printf("To see it just type '"GREEN"cat MadDog.txt"RESET"'\n");
																	printf("--------- THE END ---------\n");
																	wptr = fopen(FILE_NAME, "w");
																	fclose(wptr);
																	fprintf(wptr, "Hey %s!\n\nThis is Clayton 'MadDog' Logan. Don't worry about how I send this letter from the past to you.\nThat's the least of your concern.\nI am sending this to you to remind you that you haven't seen the last of me!\n\n\nYour pal,\nMadDog\n", name);
																	
																	exit(EXIT_SUCCESS);
																}	
															
															printf("Type '"GREEN"roll"RESET"' to try again!\n");
															scanf("%s", option);
															
														}
														else
														{
															miss++;
															
															printf("You've rolled a %d, that's a miss... \n", take);
															
															if(miss == 2)
																{
																	printf("The shoot out didn't go in your favor. \n");
																	printf("You and the sheriff ran out of ammo. Soon you both found yourselves in quite the pickle. \n");
																	printf("I would tell you what happens next but lets keep the violence at PG-13. \n");
																	printf(RED"GAME OVER\n"RESET);
																	
																	exit(EXIT_SUCCESS);
																}
																	
															printf("Type '"GREEN"roll"RESET"' to try again!\n");	
															scanf("%s", option);
														}
													
													}
												}
											}
										}
										
										else if(strcasecmp(option, "nothing") == 0);
										{
											printf("You've tried attacking the woman by charging her over the counter but it's too late.\n");
											printf("The sheriff has been shot, he is laying on the ground wounded. \n");
											printf("\"What the hell was that?!\" you hear a distinct voice heard from another room \"That's it you've guys done it now.\" Mandy try blaming you two.\n");
											printf("A man with long neck length black hair, a dark cowboy hat, brown vest and red tie with a dark long jacket wearing brown jeans steps into the Post Office lobby\n");
											printf("He is surprise to see sheriff Moor laying on the ground. \"What in the world is going on? How did he get out??\"\n");
											printf("\"This guy has been causing trouble around town, hun. He chased our men and let the sheriff out of jail\" Mandy said about you.\n");
											printf("MadDog is very frustrated. He immediately pulls his pistol and says \"come on, babe, lets have good ole fun. Lets finish these asshole!\"\n");
											printf("You found yourself in a shoot out. Stakes are high, you must roll 5 or better. It is best out of 3. You win twice, MadDog is done, you lose twice you are done. \n");
											printf("Type '"GREEN"ready"RESET"' if you are ready to end MadDog's wrongful doings\n");
											while(*option != 'z')
											{	
											printf(GREEN"Decision>"RESET);
											scanf("%s", option);
											
											if(strcasecmp(option, "ready") == 0)
												{
													int try=0,hit=0,need=0,left=0, miss=0;
													
													for(try = 4; try > 0; try--)
													{
														
													take = rand() % 6 + 1;
													
														if(take >= 3)
														{
															hit++;
															
															need = 2 - hit;
															
															printf("You've rolled at %d, it's a hit! That's %d, %d to go!\n",take, hit, need);
															
															if(hit == 2)
																{
																	printf("You've won the shoot out. You shot both of Mandy and Clayton guns out of their hands. \n");
																	printf("Even if they pick up their guns, they are out of ammo both outlaws have no choice but to flee.\n");
																	printf("MadDog and his wife run to the back of the Post Office through to the back door. You chase after them.\n");
																	printf("Out the back door, there are two horses which MadDog and Mandy jump on receptively\n");
																	printf("\"You listen to me, buddy!\" MadDog shouts at you,\"This isn't over! You haven't heard the last of MadDog!\" Both Mandy and Clayton ride off fast. \n");
																	printf("\"Let 'em go\" sheriff Moore tells you. To your surprise, you are happy to see sheriff survive the shot. \"They'll meet their maker one day. They can't always run forever. You were brave, son. Tell me, where are going to go now?\"\n");
																	printf("\"I'm going home,back into that same portal that brought me here in the first place!\"\n");
																	printf("MadDog wasn't wrong about saying he's going to see you again. You actually received a letter from Western Union... somehow on your computer.\n");
																	printf("To see it just type '"GREEN"cat MadDog.txt"RESET"'\n");
																	printf("--------- THE END ---------\n");
																	
																	wptr = fopen(FILE_NAME, "w");
																	fprintf(wptr, "Hey %s!\n\nThis is Clayton 'MadDog' Logan. Don't worry about how I send this letter from the past to you.\nThat's the least of your concern.\nI am sending this to you to remind you that you haven't seen the last of me!\n\n\nYour pal,\nMadDog\n", name);
																	fclose(wptr);
																	exit(EXIT_SUCCESS);
																}	
															
															printf("Type '"GREEN"roll"RESET"' to try again!\n");
															scanf("%s", option);
															
														}
														else
														{
															miss++;
															
															printf("You've rolled a %d, that's a miss... \n", take);
															
															if(miss == 2)
																{
																	printf("The shoot out didn't go in your favor. \n");
																	printf("You ran out of ammo. With the sheriff down, there is no one to help you. \n");
																	printf("I would tell you what happens next but lets keep the violence at PG-13. \n");
																	printf(RED"GAME OVER\n"RESET);
																	
																	exit(EXIT_SUCCESS);
																}
																	
															printf("Type '"GREEN"roll"RESET"' to try again!\n");	
															scanf("%s", option);
														}
													
													}
												}
											}
										}
									}
								}
						}
								
						}
						
                        else if(choice == 2)
						{
                            puts("\"Please stranger, come back soon! Our town can't take anymore of these hooligans! \"  \n GAME OVER \n");
						
							exit(EXIT_SUCCESS);
						}
                    }
                    break;
                }
            case 10:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find Balloons");
                        puts("Your options:");
                        puts("1: Pop the balloons.");
                        puts("2: Inhale the helium.");
                        puts("3: Grab them and fly away.");

                        scanf("%d",&choice);
                        if(choice == 1)
                        {
                            puts("Congratulations you made a kid cry.");
                        }

                        if(choice == 2)
                        {
                            puts("You inhaled the helium and now you sound funny");
                        }

                        if(choice == 3)
                        {
                            puts("You need a lot more balloons to fly.");
                        }
                        break;
                    }
                    break;
                }
            case 11:
                {
                    while(choice != 99)
                    {
                        printf("Enter a number between 1 and 10: ");

                        scanf("%d", &guess);


                        printf("%d + magic number =%d\n",guess, (num + guess) );
                        printf("%d * magic number=%d\n", guess, (num * guess));
                        printf("%d - magic number=%d\n", guess, (num - guess));
                        printf("what is your guess?\n");
                        scanf("%d", &a);
                        if(a==num)
                        {
                            printf("You are correct! You win\n");
                        }
                        else
                        {
                            printf("sorry wrong guess");
                        }
                    }
                    break;
                }
            case 12:	//room 12 overhall
		{
			puts("you open the door and find a machine that proceeds to teleport you to a distant facility");
			int hp = 20, enemyhp = 20, dam=0, enDam=0; 
			int w, b[3] = { 0,0,0 };		//enemy weakness and boolean for completion
			FILE *fptr;
			int *p = b;
			fptr = fopen("data.txt", "w+");
			if (fscanf(fptr, "%d %d %d", b[0], b[1], b[2]) != 3)
			{
				rewind(fptr);
				puts("A new save file will be created.");
				fprintf(fptr, "%d %d %d", b[0], b[1], b[2]);
			}
			while (choice != 99)
			{

				printf("Soldier: We're glad you made it back, captain %s! What are your orders?\n(Enter -1 to train, 0 to save your progress, or enter 1-3 to play through a particular chapter of this game.)\n", name);
				if ((*(p + 0) + *(p + 1) + *(p + 2)) == 3)
				{
					puts("After completing every chapter you unlocked a bonus scene.(Enter 4 to view it)");
				}
				scanf("%d", &choice);
				if (choice == -1)
				{
					puts("This is just a combat tutorial against a dummy.\nStart by entering 1(to use a gun), 2(to use a sword), or 3(to cast 1 of 4 spells).");
					puts("Guns and swords will do a fixed amount of damage while spells vary.");
					puts("Fire does a fixed amount, thunder does double of fire's amount but has a 50% chance of failing, heal does 0 damage but you heal hp, and reflect sends back enemy damage while taking half of the damage.");
					puts("Enemies have a weakness to certain weapons or spells so try to find them to deal more damage to the enemy.");
					puts("When casting a spell, cast it calmly or else you'll lose focus. (lower case letters)");

					enemyhp = 20; w = 3; hp = 20;
					while (choice != 99 && enemyhp > 0)
					{
						printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, or else:nothing)\n", hp, enemyhp);
						scanf("%d", &choice);
						if (choice>0 && choice<4)
						{
							dam = ((choice == 3) ? room12Spells(&hp,1) : 4) * ((choice==w)?2:1);
						}
						else
						{
							dam = 0;
						}
						enemyhp -= dam;
						puts("err");
						if (enemyhp <= 0)
						{
							break;
						}
						enDam = 1;
						if(dam % 2 == 1 || (int)(dam/2.0+.5) % 2 == 1)		//checks for reflect spell
						{
							enDam /= 2;
						}
						hp -= enDam;
						printf("You dealt %d damage and the enemy dealt %d damage.\n", dam,enDam);
					}
					puts("Congratulations you beat the training level, you will now be sent back to the facility.");
					choice = -2;
				}
				else if (choice == 0)
				{
					rewind(fptr);
					fprintf(fptr, "%d %d %d", b[0], b[1], b[2]);
					puts("Your progress has been saved, you will now return to the facility.");
					choice = -2;
				}
				else if (choice == 1)
				{
					puts("Chapter 1: Fall of a Republic");
					puts("Once the new chancellor was elected he implemented new laws throughout the galaxy.");
					puts("The laws strengthened the military, but rather than being used to protect the Milky Way Republic from the Andromeda Empire it was used to keep the people in line.");
					puts("Former military, local militias, and people fleeing the laws from the center of the galaxy formed a rebellion force around the edges of the Milky Way.");
					puts("We managed to deceive the enemy into sending their main force to our \"secret base\" now we sent our force for an all out attack towards the center.");
					printf("Here we are, facing the force stationed at the capital... - %s - January 24, 3018\n", name);
					enemyhp = 20; w = 2; hp = 20;
					while (choice != 99 && enemyhp > 0)
					{
						printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, or else:nothing)\n", hp, enemyhp);
						scanf("%d", &choice);
						if (choice>0 && choice<4)
						{
							dam = ((choice == 3) ? room12Spells(&hp,1) : 4) * ((choice==w)?2:1);
						}
						else
						{
							dam = 0;
						}
						enemyhp -= dam;
						puts("err");
						if (enemyhp <= 0)
						{
							break;
						}
						enDam = 1;
						if(dam % 2 == 1 || (int)(dam/2.0+.5) % 2 == 1)		//checks for reflect spell
						{
							enDam /= 2;
						}
						hp -= enDam;
						printf("You dealt %d damage and the enemy dealt %d damage.\n", dam,enDam);
					}
					b[0] = (hp>0) ? 1 : b[0];
					if (hp <= 0)
					{
						puts("You lost you will now be sent to the facility.");
					}
					choice = -2;
				}
				else if (choice == 2)
				{
					puts("Chapter 2: Life in the Center");
					puts("The chancellor promised everyone jobs once elected and he delivered on his promise... in the most horrible way possible.");
					puts("Plenty of people were rounded up and experimented on with various chemical substances.");
					puts("The chancellor's goal was to make a mindless population that will obey any order given to them by him directly.");
					puts("Many people never survived the experiments because the drug made unnatural changes to the human brain.");
					puts("Those that survived suffer from symptoms such as rotting flesh and fits of rage, some even resort to cannabalism. Rumors suggest it's to ease their pain.");
					printf("Here we are, facing the citizins attempting to put them out of their misery... - %s - February 1, 3018\n", name);
					enemyhp = 20; w = 1; hp = 30;
					while (choice != 99 && enemyhp > 0)
					{
						printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, or else:nothing)\n", hp, enemyhp);
						scanf("%d", &choice);
						if (choice>0 && choice<4)
						{
							dam = ((choice == 3) ? room12Spells(&hp,1) : 4) * ((choice==w)?2:1);
						}
						else
						{
							dam = 0;
						}
						enemyhp -= dam;
						puts("err");
						if (enemyhp <= 0)
						{
							break;
						}
						enDam = 1;
						if(dam % 2 == 1 || (int)(dam/2.0+.5) % 2 == 1)		//checks for reflect spell
						{
							enDam /= 2;
						}
						hp -= enDam;
						printf("You dealt %d damage and the enemy dealt %d damage.\n", dam,enDam);
					}
					b[1] = (hp>0) ? 1 : b[1];
					if (hp <= 0)
					{
						puts("You lost you will now be sent to the facility.");
					}
					choice = -2;
				}
				else if (choice == 3)
				{
					puts("Chapter 3: End of the Milky Way Government");
					puts("The chancellor is now confronting us directly along with his corrupt officials.");
					puts("People believe the restricting of magic to the general population helped the chancellor rise to power.");
					puts("Other corrupt officials proceeded to use spells to manipulate the population and due to a lack of knowledge on magic nobody could counter their charm spells.");
					puts("This will be our most difficult fight and we must finish this quickly before the main force returns to the capital.");
					puts("If the rumors hold true then the chancellor has a powerful ability that could destroy armies, there must be a way to counter it.");
					printf("This is it, our last stand and the stakes can't be any higher - %s - February 3, 3018\n", name);
					enemyhp = 40; w = 3; hp = 20;
					int timeStop = 0, timeReset = 0;
					while (choice != 99 && enemyhp > 0)
					{
						printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, or else:nothing)\n", hp, enemyhp);
						scanf("%d", &choice);
						if (choice>0 && choice<4)
						{
							dam = ((choice == 3) ? room12Spells(&hp,1) : 4) * ((choice==w)?2:1);
						}
						else
						{
							dam = 0;
						}
						enemyhp -= dam;
						puts("err");
						if (enemyhp <= 0)
						{
							break;
						}
						enDam = 1;
						if(dam % 2 == 1 || (int)(dam/2.0+.5) % 2 == 1)		//checks for reflect spell
						{
							enDam /= 2;
						}
						hp -= enDam;
						printf("You dealt %d damage and the enemy dealt %d damage.\n", dam,enDam);
					}
					b[2] = (hp>0) ? 1 : b[2];
					if (hp <= 0)
					{
						puts("You lost you will now be sent to the facility.");
					}
					choice = -2;
				}
				else if (choice == 4 && (*(p + 0) + *(p + 1) + *(p + 2)) == 3)
				{
					puts("Chapter 4: Return of the Republic");
					puts("After the final battle everyone celebrated our victory it became a holiday.");
					puts("The Milky Way was at peace for a time but then the Andromeda Empire invaded.");
					puts("We discovered that the chancellor was a puppet of the Andromeda Emperor.");
					printf("Looks like the final confrontation with the emperor and his army will determine the fate of the Milky Way.... - %s - April 27, 3058\n", name);
					
					while (choice != 99 && enemyhp > 0)
					{
						printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, or else:nothing)\n", hp, enemyhp);
						scanf("%d", &choice);
						if (choice>0 && choice<4)
						{
							dam = ((choice == 3) ? room12Spells(&hp,1) : 4) * ((choice==w)?2:1);
						}
						else
						{
							dam = 0;
						}
						enemyhp -= dam;
						puts("err");
						if (enemyhp <= 0)
						{
							break;
						}
						enDam = 1;
						if(dam % 2 == 1 || (int)(dam/2.0+.5) % 2 == 1)		//checks for reflect spell
						{
							enDam /= 2;
						}
						hp -= enDam;
						printf("You dealt %d damage and the enemy dealt %d damage.\n", dam,enDam);
					}
					choice = -2;
					if (hp <= 0 && choice != 99)	//bad end
					{
						printf("The Milky Way has fallen I fear everyone will become slaves for Andromeda.\n Now I await for my execution in an hour on charges of war crimes.... %s - May 8, 3058",name);
					}
					if (hp > 0 && choice != 99)		//good end
					{
						printf("After the fall of the Andromeda Empire the Milky Way took over.\n Now we have entered a true era of peace and may it last forever..... %s - May 9, 3092");
						printf("And thus the final entry in the journal of captain %s comes to an end.",name);
					}
				}
			}
			break;
		}
            case 13:
                {
                    
                    while(choice != 99)
                    {
                        puts("You open the door and find yourself in a time traveling car. There are three buttons in front of you. In order head back home, you will have to travel back in time and surive the survival. If you fail to save them, you will end up back in the same room with water and drown. If you save their life you will be able to go back home");
                        puts("The first button will take you to Zions national Park and you must save the dog from drowning in the flood");
                        puts("The second button will take you to Yosemite National Park and you must save the your best friend from a wildfire ");
                        puts("The third button will take you to Hawaii Volcanoes National Park and you must save the 7 year old boy from the erupting volcano");
                        
                        scanf("%d",&choice);
                        
                        if(choice == 1)
                        {
                            puts("Welcome to Zions National Park");
                        }
                        
                        if(choice == 2)
                        {
                            puts("Welcome to Yosemite National Park");
                        }
                        
                        if(choice == 3)
                        {
                            puts("Welcome to Hawaii Volcanoes National Park");
                        }
                        
                    }
                    switch(choice)
                    {
                        case 1:
                            puts("You will be able to stay for here for 5 days. You are provided a " );
                            
                            
                            break;
                        case 2:
                            
                            puts("You will be able to stay for here for 5 days. You are provided a  ");
                            
                            
                            
                            
                            break;
                            
                        case 3:
                            
                            puts("You will be able to stay for here for 5 days. You are provided a"  );
                            
                            
                            break;
                            
                    }
                    //break;
                }
                

                
            case 14:
                {
                    int num, j, winning;
                    while(choice != 99)
                    {
                        puts("You enter and close the door behind you.");
                        puts("You see two doors one on your left and one on your right");
                        puts("There is also a tunnel straight ahead");
                        puts("You can either enter door 1 of 2 of go to the tunnel (choice 3)");
                        puts("What's your choice?");
                        scanf("%d",&choice);
                        switch(choice)
                        {
                            case 1:
                                puts("You enter and close the door behind you");
                                puts("You find a table straight ahead with a duffel bag on top");
                                puts("You can either open the bag (Option 1) or take $500 and leave (Option 2");
                                puts("What do you choose?");
                                scanf("%d",&choice);
                                switch(choice)
                                {
                                    case 1:
                                        {
                                            puts("You have chosen to open the bag");
                                            puts("You win NOTHING, should've taken the money");
                                            break;
                                        }
                                    case 2:
                                        {
                                            puts("You have chosen to take the money");
                                            puts("Very smart since there was nothing in the bag");
                                            puts("You can now leave $500 richer, Have a good day");
                                            break;
                                        }
                                    default:
                                        break;
                                }
                                break;
                            case 2:
                                {
                                    puts("You have entered door 2");
                                    puts("You have won the lottery!");
                                    break;
                                }
                                break;
                            case 3:
                                {
                                    puts("You have now entered the tunnel");
                                    puts("Props for being a risk taker");
                                    puts("While the other doors you could have been a very rich man...");
                                    puts("You'll have a chance. You will be given one million dollars and you can bet on a number (1-5)");
                                    puts("You also have another option to not gamble and take $500,000 and leave");
                                    puts("You're a risk taker, but the option is up to you");
                                    puts("Enter 1 to gamble or enter 2 to leave with the money");
                                    scanf("%d",&choice);
                                    switch(choice)
                                    {
                                        case 1:
                                            puts("Enter the number you'd like to bet on:");
                                            puts("The number will be multiplied by a random multiplier and that will be the money you win");
                                            puts("Keep in mind it can be multiplied by 0");
                                            scanf("%d",&num);
                                            j = rand() %6;
                                            printf("%d\n",j);
                                            winning = (num*j) * 2000000;
                                            printf("You have won $%d, congratulations!\n",winning);
                                            break;
                                        case 2:
                                            puts("You took the easy way out");
                                            puts("But you're being rewarded for taking the risk entering the tunnel");
                                            puts("Have a good day!");
                                            break;
                                        default:
                                            break;

                                    }
                                    break;
                                }
                            default:
                                break;
                        }
                        break;
                    }
                    break;
                }
            case 15:
                {
                    while(choice != 99)
                    {
                        puts("you open the door, but something prevents you from entering. ");
                        puts("Through the door you hear someone shouting \"HOLD THE DOOR\"");
                        puts("Despite your effort, the mass opposite from you keeps the door closed.");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 16:
                {
                    while(choice != 99)
                    {
                    }
                    break;
                }
            case 17:
                {
                    //modyfied November 7, 2018
                    puts("You open the door and find.......");
                    puts("A poorly lit room with a single box on the floor...");

                    while(choice != 99)
                    {



                        puts("1.Inspect the box");
                        puts("2.Flick the light switch");
                        scanf("%d",&choice);
                        if(choice == 1)
                        {
                            puts("You pick up the box and look inside....");
                            puts("There is nothing inside...");
                            puts("You are highly disappointed and your day is ruined");
                        }
                        else if(choice ==2)
                        {
                            puts("You flick the light switch and hear a scream from the box");
                            puts(" Turn off the light ");
                        }
                        else
                        {
                            puts("You walk away...");
                        }
                    }
                    break;
                }
            case 18:
                {
                    while(choice != 99)
                    {
                        FILE *inptr;
                        char ranstring[256];
			int randints[10];
                        int sides, numguess, randnum, i, k, numrolls, roll;
                        puts("You open the door and find ...... ");
                        puts("An s2000 that is currently fixed with airbag suspension");
                        puts("An s2000 completely modified with all authentic JDM parts");
                        puts("An that is just completely bone stock andlow miles, but is an AP1");
                        puts("But now you have 4 choices...");
                        puts("Choice 1: throw away the bagged s2000 but then the modified s2000 is reverted to OEM");
                        puts("Choice 2: throw away all of these cars and save your money for a worse car");
                        puts("Choice 3: Make these cars all bone stock");
			puts("Choice 4: Do nothing to the cars and just test your luck...");
                        scanf("%d", &choice);
                        switch(choice)
                        {
                            case 1:
                                puts("Okay so this was a pretty good choice, but i can tell you're a purist. Yuck");
                                puts("So now that you chose this i have a task for you, if you can guess the number than you get to move on to the next door, but really you can still move on anyways.");
                                puts("So heres the equation 134 x 4 + 31 x 21 = ?\n Whats the answer? ");
                                scanf("%d", &numguess);
                                if(numguess = 1187)
                                {
                                    puts("Okay i guess you're pretty smart so get out of my room.");
                                }
                                else
                                {
                                    puts("Bro it is literally so easy but that was your last chance, bye");
                                }

                                break;

                            case 2:
                                puts("Why the heck would you make this choice? Literally this is the best car you can ever drive. Pleb");
                                puts("Since you chose this i have a riddle for you, you walk into a room with 5 people, they all die, how many people are left in the room?");
                                scanf("%d", &numguess);
                                if(numguess = 6)
                                {
                                    puts("Sweet, looks like you have some good abstract thinking skills.");
                                    puts("Okay now you can choose another door, bye!");
                                }
                                else
                                {
                                    puts("Okay so, look at your answer and then think really hard about the riddle.");
                                }
                                break;

                            case 3:
                                puts("Okay this is probably the safest choice you can make, but you are still no fun");
                                puts("So since you are no fun, i am goin to try and make this fun by taking a huge twist on the story line. What i am going to do is create a file you're going to write to but your job is to tell me where the file is");
                                inptr = fopen("here_is_Your_file_lol.txt", "a");
                                puts("Now put in your string please >:)");
                                scanf("%s", &ranstring);
                                printf("Here is the string you entered: %s", ranstring);
                                fprintf(inptr,"%s", ranstring);
                                fclose(inptr);
				puts("Now go find your file!");
                                break;
			    case 4:
				puts("Okay so you decided to have a random function chosen for you, cheeky person.");
				puts("So here's your random function:");
				int r = rando();
				switch(r)
				{
					case 1:
						puts("So this function will fill and sort a random array of integers for you");
						for(i = 0; i < 10; i++)
						{
							randints[i] = (rand() % 10) + 1;
						}
						printf("Here is your unsorted array: %d\n", randints);
						for(i = 0; i < 9; i++)
						{
							for(k = i + 1; k < 10; k++)
							{
								if(randints[i] > randints[k])
								{
									int temp = randints[i];
									randints[i] = randints[k];
									randints[k] = temp;
								}
							}

						}
						break;
					case 2:
						puts("Okay so this random case will roll a die with how ever many sides you want, how ever many times you want, just enter a number please.");
						scanf("%d", numrolls);
						
						puts("You decided to roll %d time/s. Now enter how many sides you want the die to have please.");
						scanf("%d", sides);
						
						for(i = 0; i < numrolls; i++)
						{
							roll = (rand() % sides) + 1;
							printf("You randomly rolled a: %d\n", roll);
						}
						break;
					
				}
				break;

                            default:
                                puts("Okay so i gave you like three options and you decided to be a little Rebel. No. Don't. This code would work fine if you did not try messing it up pls k thx.");
                                break;

                        }
                        break;
                    }
                    case 19:
                    {
                        while(choice != 99)
                        {
                            puts("you open the door and find ........");
                            puts("a box full of kittens!!! ..........");
                            puts("what do you do? ...................");
                            puts("1 for taking one kitten............");
                            puts("2 for taking two kittens...........");
                            puts("3 for taking three kittens.........");
                            puts("4 for not taking any kittens.......");
                            puts("99 for leaving the room............");
                            scanf("%d",&choice);
                            switch(choice)
                            {
                                case 1:
                                    puts("You only took one kitten??? How heartless!");
                                    break;
                                case 2:
                                    puts("Ok, not bad. 2 kittens could be worse.");
                                    break;
                                case 3:
                                    puts("Wow, look at you. Big man. You took 3 kittens. How do you plan on taking care of them?");
                                    puts("Look, one of them is already crying. Damn, theres a bottle somewhere here, right?");
                                    puts("1 to pick up the bottle from the table............");
                                    puts("2 to ignore the kitten............................");
                                    puts("99 to leave the room..............................");
                                    scanf("%d",&choice);
                                    switch(choice)
                                    {
                                        case 1:
                                            puts("The kitten stopped crying. Good job! Now leaving room.");
                                            choice = 19;
                                            break;
                                        case 2:
                                            puts("You heartless fool! Game over.");
                                            choice = 99;
                                            break;
                                        case 3:
                                            puts("You didn't take any kittens!!!!! You monster");
                                            choice = 99;
                                        case 99:
                                            puts("Now leaving room.");
                                            choice = 19;
                                            break;
                                    }
                                    break;
                            }


                        }
                        break;
                    }
                    case 20:
                    {
			
				#define BOLDBLACK "\033[1m\033[30m"
				#define BOLDGREEN "\033[1m\033[32m"
				#define RED "\x1b[31m"
				#define BLUE "\x1b[34m"
				#define BOLDBLUE "\033[1m\033[34m"
				#define BOLDRED "\033[1m\033[31m"

				puts(BOLDBLACK "\n\nWelcome to Karina's Spanish 101 class!"  BOLDGREEN " \u263A\n" RESET);
				puts("I have created 3 exams for you to take, so the end of this adventure you should be able to express yourself in spanish.\n");
				puts("You have the choice to challenge me if you don't want to start from level 1.\n");
				puts("You may choose a level above level 1 and if you pass the chosen level with a 90% or above then you automatically pass levels below the chosen level!\n");
				puts("BUT if you do not pass the chosen level with a 90% or above then you will restart from level 1, so CHALLENGE ME! :P\n");
				puts("If you choose to start from level 1 then you can work your way up to the next 2 levels.\n");
				puts("The average of the 3 exams will be taken at the end. If you pass with an 80% then you pass the class otherwise you will retake the class.\n");
				puts(BOLDBLACK"Let the challenge begin! Enjoy! :D"RESET);
				puts("You may quit anytime by selecting option 99, but I recommend you not to quit!");					

                        while(choice != 99)
                        {
                            	
				puts(BOLDBLACK"\nHere are your choices. You may work on your way up or challenge me:\n"RESET);
				puts(BOLDBLACK"Level 1"RESET);
				puts(BOLDBLACK"Level 2"RESET);
				puts(BOLDBLACK"Level 3\n"RESET);

				scanf("%d",&choice);
				switch(choice)
				{
					
					case 1: 
					puts(BOLDBLUE"\n**** Welcome to level 1! ****\n"RESET);
				
				int score = 0;
				char input;
				char n[30];
				choice = (rand() %10) + 1;
				gets(name);
				puts(BOLDBLACK"\n1. Please choose the correct translation for:"RESET BOLDBLUE" goodmorning"RESET);
				puts(" A. buenas noches\n B. buenos días\n C. buenas tardes\n D. buen días\n");
				printf(BOLDBLACK"Answer:"RESET);
				scanf(" %c", &input);
				if((input=='B') || (input == 'b'))
				{
					score = score+2; 
				}
				
				puts(BOLDBLACK"\n2. Please choose the correct translation for:"RESET BOLDBLUE" my name is"RESET);
				puts(" A. mi nombre es\n B. tu nombre es\n C. mi hombre es\n D. el hombre es\n");
				printf(BOLDBLACK"Answer:"RESET);
				scanf(" %c", &input);
				if((input=='A') || (input == 'a'))
				{
					score = score+2; 
				}

				puts(BOLDBLACK"\n3. Please choose the correct translation for:"RESET BOLDBLUE" what is your name"RESET);
				puts(" A. cómo llamas\n B. cómo tu llamas\n C. cómo te lamas\n D. cómo te llamas\n");
				printf(BOLDBLACK"Answer:\n"RESET);
				scanf(" %c" ,&input);
				if((input=='D') || (input == 'd'))
				{
					score = score+2; 
				}
				
				puts(BOLDBLACK"\n4. Please choose the correct translation for:"RESET BOLDBLUE" Good afternoon"RESET);
				puts(" A. Buenas tarde\n B. Buen tarde\n C. Buenas tardes\n D. Bueno tarde\n");
				printf(BOLDBLACK"Answer:\n"RESET);
				scanf(" %c" ,&input);
				if((input=='C') || (input == 'c'))
				{
					score = score+2; 
				}
				
				puts(BOLDBLACK"\n5. Please choose the correct translation for:"RESET BOLDBLUE" Goodnight"RESET);
				puts(" A. Buenas noches\n B. Buen noches\n C. Buen\n D. noche\n");
				printf(BOLDBLACK"Answer:\n"RESET);
				scanf(" %c" ,&input);
				if((input=='A') || (input == 'a'))
				{
					score = score+2; 
				}
				
				puts("------------------------");

				printf(BOLDBLACK"%s You scored %d out of 10\n"RESET, n, score);
				puts("------------------------");
				
				if (score >= 8)

				puts(BOLDGREEN"\nGood Job!! I'm so proud of you! :')"RESET);

				else

				{
					
					printf(BOLDRED "\nCome on! You are better than this!! -.- \n" RESET);

				}

				break;	
			
				case 2: 

				puts(BOLDBLUE"\n**** Welcome to level 2! ****\n"RESET);

				puts(BOLDBLACK"\n1. Please choose the correct translation for:"RESET BOLDBLUE" Monday"RESET);
				puts(" A. Viernes\n B. Martes\n C. Lunes\n D. Miércoles\n E. Jueves\n");
				printf(BOLDBLACK"Answer:\n"RESET);
				scanf(" %c" ,&input);
				if((input=='C') || (input == 'c'))
				{
					score = score+2; 
					
				}

				puts(BOLDBLACK"\n2. Please choose the correct translation for:"RESET BOLDBLUE" Tuesday"RESET);
				puts(" A. Viernes\n B. Martes\n C. Lunes\n D. Miércoles\n E. Jueves\n");
				printf(BOLDBLACK"Answer:\n"RESET);
				scanf(" %c" ,&input);
				if((input=='B') || (input == 'b'))
				{
					score = score+2; 
				}				

				puts("------------------------");
				printf(BOLDBLACK"%s You scored %d out of 10\n"RESET, n, score);
				puts("------------------------");

				puts(BOLDBLUE"\nHere are the rest of the week days that you should know\n"RESET);
				puts("Jueves = Thursday");

				if (score >= 8)

				puts(BOLDGREEN"\nGood Job!! I'm so proud of you! :')"RESET);

				else

				{
					
					printf(BOLDRED "\nCome on! You are better than this!! -.- \n" RESET);

				}

				}
					
				if(choice == 99)
				{
					puts(BOLDRED"\nW H Y\nA R E\nY O U\n  A\nQ U I T T E R?!!"RESET);
				
				}
                        }
                        break;
                    }
                    case 21:
                    {
                        while(choice != 99)
                        {
                            puts("you open the door and find the one and only Rob. Game over man.");
                            scanf("%d",&choice);
                        }
                        break;
                    }
                    case 22:
                    {
                        while(choice != 99)
                        {
                            puts("you open the door and find ........");
                            scanf("%d",&choice);
                        }
                        break;
                    }
                    case 23:
                    {
                        while(choice != 99)
                        {
                            puts("you open the door and find ........");
                            scanf("%d",&choice);
                        }
                        break;
                    }
                    case 24:
                    {
                        while(choice != 99)
                        {
                            puts("you open the door and find ........");
                            scanf("%d",&choice);
                        }
                        break;
                    }
                    case 25:
                    {
                        while(choice != 99)
                        {
                            puts("You open the door and close it behind you.");
                            puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
                            puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
                            puts("At this point you have 3 choices:");
                            puts("1. Examine the skeleton.");
                            puts("2. Proceed further ahead in the cave.");
                            puts("3. Enter the door to your right.");
                            scanf("%d",&choice);
                            if(choice == 1)
                            {
                                puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
                                puts("To be continued...");
                                break;
                            }
                            else if(choice == 2)
                            {
                                puts("You find yourself further ahead in the cave.");
                                puts("To be continued....");
                                break;
                            }
                            else if(choice == 3)
                            {
                                puts("You enter the and close the door behind you.");
                                printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                puts("To be continued....");
                                break;
                            }
                            else
                            {
                                puts("wrong choice");
                            }
                        }
                        break;
                    }
                }
        }
}
}
int rando(void)
{
	int r = (rand() % 4) + 1;
	return r;
}
void shuffle(int *a, int *b, int SIZE)
{
	int i;
	int hold;
	for(i = 0; i < SIZE; i++)
	{
		hold = *(b + i);
		*(b + i) = *(a + i + 1);
		*(a + i + 1) = hold;
	}
}

void combine(int *a, int *b, int *c, int *d, int *all)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	
	for(i = 0; i < 52; i++)
	{
		all[j++] = a[i++];
		all[k++] = b[i++];
		all[l++] = c[i++];
		all[m++] = d[i++];
	}
}

int room12Spells(int *hp, int enDam)	//spell chanting
{
	char fire[] = "fire";
	char thun[] = "thunder";
	char heal[] = "heal";
	char ref[] = "reflect";
	char spell[9] = "";
	puts("Enter any of the following spells: fire, thunder, heal, or reflect");
	scanf("%s",spell);
	char *ch = spell;
	int i = 0, spellC = 0;
	for (i = 0, spellC = 0; i<6; i++)
	{
		if (*(ch + i) == fire[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 4 || spellC == 5)
	{
		return 4;	//guarunteed 4 damage
	}
	for (i = 0, spellC = 0; i<6; i++)
	{
		if (*(ch + i) == heal[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 4 || spellC == 5)
	{
		if (*hp + 10>20)
		{
			*hp = 20;
		}
		else
		{
			*hp += 10;
		}
		return 0;	//heal 10 hp
	}
	for (i = 0, spellC = 0; i<9; i++)
	{
		if (*(ch + i) == thun[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 7 || spellC == 8)
	{
		
		if(rand() % 2 == 1) 
		{		//50% chance of hitting
			return 8;
		}	
		else
		{
			return 0;
		}
	}
	for (i = 0, spellC = 0; i<9; i++)
	{
		if (*(ch + i) == ref[i])
		{
			spellC++;
		}
		else
		{
			break;
		}
	}
	if (spellC == 7 || spellC == 8)
	{
		return enDam;	//reflect enemy damage
	}
	return 0;		//failed spell
}
