#include<iostream.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
int main(void)
{
clrscr();
long a,age,i,dob,kbcpass,ans0,type,type1,type2,type3,type4,type5,type6,type7,type8,type9,type10,type11,type12,level,ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12;
char proceed,gender,quit,quit1,quit2,quit3,quit4,quit5,quit6,quit7,quit8,quit9,quit10,quit11,quit12,choice,life,life1,life2,life3,life4,life5,life6,life7,life8,life9,life10,life11,life12,name[30],choice1,choice2,choice3,choice4,choice5,choice6,choice7,choice8,choice9,choice10,choice11,choice12,occupation[30];
/////////////////////////////////(page1)//////////////////////////////////////
delay(1000);
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(30,20);
textbackground(BLACK);
textcolor(GREEN);
cprintf("Your game is Loading");
gotoxy(34,21);
textcolor(WHITE+BLINK);
cprintf("Please Wait.");
gotoxy(30,10);
textcolor(GREEN);
cprintf("Kaun Banega Crorepati");
gotoxy(34,11);
textcolor(GREEN);
cprintf("Version 2012");
gotoxy(22,12);
textcolor(YELLOW);
cprintf("A computer generated game, made by :-");
gotoxy(32,13);
textcolor(GREEN);
cprintf("Shubham Mahajan");
gotoxy(38,14);
cprintf("XI-E");
delay(5000);
gotoxy(11,23);
for(i=1;i<=59;i++)
{
delay(100);
textcolor(RED);
textbackground(RED);
cprintf("X");
}
textcolor(BLACK);
textbackground(BLACK);
clrscr();
/////////////////////////////////(page2)//////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t\t     ";
cprintf("XXXXXXXXXX");
cout<<endl;
textbackground(BLACK);
}
for(a=1;a<=80;a++)
{
textcolor(BLUE+BLINK);
textbackground(BLUE+BLINK);
cprintf("X");
}
gotoxy(20,13);
textcolor(WHITE+BLINK);
textbackground(BLACK);
cprintf("   Welcome to KAUN BANEGA CROREPATTI");
textcolor(GREEN);
textbackground(BLACK);
delay(5000);
gotoxy(20,14);
cprintf("  Do you want to play the game (y/n)?");
textbackground(BLACK);
gotoxy(20,15);
textcolor(GREEN);
cprintf("  Answer :- ");
cin>>proceed;
/////////////////////////////////(page3)//////////////////////////////////////
clrscr();
if(proceed=='y')
{
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
textbackground(BLACK);
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(14,4);
textcolor(WHITE+BLINK);
textbackground(BLACK);
cprintf("Registration and Idea 3G KBC Pass");
cout<<endl<<endl<<endl;
textcolor(GREEN);
cout<<"\t\t    Please enter the following details to ";
cout<<endl;
cout<<"\t\t    become a member of KBC team and to ";
cout<<endl;
cout<<"\t\t    take full advantage of this game :-";
cout<<endl<<endl;
textcolor(YELLOW);
cout<<"\t\t    ";
cprintf("1.) Name :- ");
cin>>name;
cout<<endl<<endl;
textcolor(YELLOW);
cout<<"\t\t    ";
cprintf("2.) Age :- ");
cin>>age;
cout<<endl<<endl;
textcolor(YELLOW);
cout<<"\t\t    ";
cprintf("3.) Date of Birth (numeric) :- ");
cin>>dob;
cout<<endl<<endl;
textcolor(YELLOW);
cout<<"\t\t    ";
cprintf("4.) Male/Female (m/f) :- ");
cin>>gender;
/////////////////////////////////(page4)//////////////////////////////////////
textbackground(BLACK);
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
textbackground(BLACK);
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,4);
textcolor(WHITE+BLINK);
cprintf("Congratulations, Now you are a rgistered member");
cout<<"\n\t      ";
cprintf("of KBC team");
cout<<endl<<endl<<endl;
cout<<"\t      ";
kbcpass=(dob+age+1995);
textcolor(GREEN);
cprintf("Your Idea 3G KBC Pass is ");
cout<<kbcpass;
cout<<endl;
cout<<"\t      ";
textcolor(YELLOW);
cprintf("Keep this pass with you for future benefits");
delay(10000);
clrscr();
/////////////////////////////////(page5)//////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,5);
cout<<endl<<endl<<endl<<endl<<endl;
cout<<"\t        ";
textcolor(GREEN);
cprintf("Here comes your Fastest Fingers First question");
delay(5000);
clrscr();
/////////////////////////////////(page6)//////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("Fastest Fingers First");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.1. Put these words of a Hindi Proverb in the ");
cout<<"\n\t\t    ";
cprintf("correct order.");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Bimar");
cout<<"\t\t";
cprintf("2. Anar");
cout<<"\n\t\t    ";
cprintf("3. Ek");
cout<<"\t\t";
cprintf("4. Sau");
cout<<"\n\t\t    ";
cin>>ans0;
clrscr();
/////////////////////////////////(page7)//////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(14,5);
textbackground(BLACK);
if(ans0==3241)
{
textcolor(WHITE);
cprintf("Congratulations! ");
cout<<ans0;
cprintf(" is right answer");
cout<<"\n\n\t      ";
textcolor(GREEN+BLINK);
cprintf("You have won the Fastest Fingers");
cout<<"\n\t      ";
cprintf("First question");
cout<<"\n\n\t      ";
delay(1000);
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for Fastest Fingers First Winner ");
cout<<name;
}
else
{
textcolor(WHITE);
cprintf("Oh no! ");
cout<<ans0;
cprintf(" is wrong answer");
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Correct answer :- 3.Ek 2.Anar 4.Sau 1.Bimar");
cout<<"\n\n\t      ";
delay(10000);
textcolor(YELLOW);
cprintf("BETTER LUCK NEXT TIME");
delay(1000);
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
delay(10000);
clrscr();
goto end;
}
delay(10000);
clrscr();
/////////////////////////////////(page8)//////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,10);
textcolor(GREEN);
cprintf("       Now lets play Kaun Banega Crorepatti");
textcolor(YELLOW);
cout<<"\n\t      ";
cprintf("              Season 6 (2012-13)");
delay(5000);
clrscr();
/////////////////////////////////(page9)//////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,5);
textcolor(WHITE+BLINK);
cprintf("Rules :- ");
cout<<"\n\n\n\t      ";
textcolor(GREEN);
cprintf("1. There are 13 Multiple choice questions.");
cout<<"\n\n\t      ";
textcolor(YELLOW);
cprintf("3. You have to select one answer by typing 1,2,3 or 4");
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("3. Choose your money level (only numbers) :-");
cout<<"\n\t      ";
textcolor(GREEN);
cprintf("10k 20k 40k 80k 160k 320k 640k 1250k 25L 50L 100L");
cout<<"\n\t      ";
cprintf("500L");
cout<<"\n\n\t      ";
cin>>level;
clrscr();
/////////////////////////////////(page10)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,10);
textcolor(GREEN);
cprintf("Here comes your 1st question worth 10 Thousand Rupees");
delay(5000);
clrscr();
/////////////////////////////////(page12)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.1. Which of these hindi idioms means 'Falling ");
cout<<"\n\t\t    ";
cprintf("in Love' ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Aankh Pherna");
cout<<"\t\t";
cprintf("2. Aankh Tarerna");
cout<<"\n\t\t    ";
cprintf("3. Aankh Lagana");
cout<<"\t\t";
cprintf("4. Aankh Churana");
textcolor(RED);
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to use any lifeline (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>life;
if(life=='y')
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Which lifeline do you want to use ? ");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Audience Pole");
cout<<"\t\t";
cprintf("2. Expert Advice");
cout<<"\n\t\t    ";
cprintf("3. Double Dip");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>type;
if(type==1)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.1. Which of these idioms means 'Falling  ");
cout<<"\n\t\t    ";
cprintf("in Love ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Aankh Pherna");
cout<<"\t\t";
cprintf("2. Aankh Tarerna");
cout<<"\n\t\t    ";
cprintf("3. Aankh Lagana");
cout<<"\t\t";
cprintf("4. Aankh Churana");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Aankh Pherna :- 7%");
cout<<"\n\t\t    ";
cprintf("2. Aankh Tarerna :- 2%");
cout<<"\n\t\t    ";
cprintf("3. Aankh Lagana :- 79%");
cout<<"\n\t\t    ";
cprintf("4. Aankh Churana :- 12%");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit;
if(quit=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.1. Which of these idioms means 'Falling  ");
cout<<"\n\t\t    ";
cprintf("in Love ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Aankh Pherna");
cout<<"\t\t";
cprintf("2. Aankh Tarerna");
cout<<"\n\t\t    ";
cprintf("3. Aankh Lagana");
cout<<"\t\t";
cprintf("4. Aankh Churana");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Aankh Pherna :- 7%");
cout<<"\n\t\t    ";
cprintf("2. Aankh Tarerna :- 2%");
cout<<"\n\t\t    ";
cprintf("3. Aankh Lagana :- 79%");
cout<<"\n\t\t    ";
cprintf("4. Aankh Churana :- 12%");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans1;
clrscr();
}
}
if(type==2)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.1. Which of these idioms means 'Falling  ");
cout<<"\n\t\t    ";
cprintf("in Love ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Aankh Pherna");
cout<<"\t\t";
cprintf("2. Aankh Tarerna");
cout<<"\n\t\t    ";
cprintf("3. Aankh Lagana");
cout<<"\t\t";
cprintf("4. Aankh Churana");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- It is very popular idiom which means ");
cout<<"\n\n\t\t    ";
cprintf("Aankh Lagana.");
cout<<"\n\n\t\t    ";
textcolor(RED);
delay(5000);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit;
if(quit=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.1. Which of these idioms means 'Falling  ");
cout<<"\n\t\t    ";
cprintf("in Love ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Aankh Pherna");
cout<<"\t\t";
cprintf("2. Aankh Tarerna");
cout<<"\n\t\t    ";
cprintf("3. Aankh Lagana");
cout<<"\t\t";
cprintf("4. Aankh Churana");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- It is very popular idiom which means ");
cout<<"\n\n\t\t    ";
cprintf("Aankh Lagana.");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans1;
clrscr();
}
}
if(type==3)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("     Double  Dip     ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.1. Which of these idioms means 'Falling  ");
cout<<"\n\t\t    ";
cprintf("in Love ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Aankh Pherna");
cout<<"\t\t";
cprintf("2. Aankh Tarerna");
cout<<"\n\t\t    ";
cprintf("3. Aankh Lagana");
cout<<"\t\t";
cprintf("4. Aankh Churana");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Now you have to choose 2 options and");
cout<<"\n\t\t    ";
cprintf("you cannot quit the game.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your first option :- ");
cin>>ans1;
if(ans1!=3)
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Oh no! ");
cout<<ans1;
cprintf(" is wrong answer.");
cout<<"\n\t\t    ";
cprintf("Don't worry, You have 1 more chance.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your second option :- ");
cin>>ans1;
}
}
}
else
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit;
if(quit=='y')
{
goto end;
}
else
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.1. Which of these idioms means 'Falling  ");
cout<<"\n\t\t    ";
cprintf("in Love ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Aankh Pherna");
cout<<"\t\t";
cprintf("2. Aankh Tarerna");
cout<<"\n\t\t    ";
cprintf("3. Aankh Lagana");
cout<<"\t\t";
cprintf("4. Aankh Churana");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans1;
}
clrscr();
/////////////////////////////////(page12)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(14,5);
textbackground(BLACK);
if(ans1==3)
{
textcolor(WHITE);
cprintf("Congratulations! ");
cout<<ans1;
cprintf(" is right answer");
cout<<"\n\n\t      ";
textcolor(GREEN+BLINK);
cprintf("You have won 10,000 rupees");
cout<<"\n\n\t      ";
delay(1000);
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
}
else
{
textcolor(WHITE);
cprintf("Oh no! ");
cout<<ans1;
cprintf(" is wrong answer");
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Correct answer :- 3.Aankh Lagana");
cout<<"\n\n\t      ";
textcolor(WHITE+BLINK);
cprintf("You have won 0 rupees");
cout<<"\n\n\t      ";
delay(10000);
textcolor(YELLOW);
cprintf("BETTER LUCK NEXT TIME");
delay(1000);
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
delay(10000);
clrscr();
goto end;
}
delay(10000);
clrscr();
/////////////////////////////////(page13)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,10);
textcolor(GREEN);
cprintf("Here comes your 2nd question worth 20 Thousand Rupees");
delay(5000);
clrscr();
/////////////////////////////////(page14)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
cout<<endl<<endl<<endl;
textcolor(GREEN);
cout<<"\t\t    ";
cprintf("Q.2. By which of these nicknames is Nagpur ");
cout<<"\n\t\t    ";
cprintf("also known as ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Diamond City");
cout<<"\t\t";
cprintf("2. Orange City");
cout<<"\n\t\t    ";
cprintf("3. Pink City");
cout<<"\t\t";
cprintf("4. City of Lakes");
textcolor(RED);
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to use any lifeline (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>life1;
if(life1=='y')
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Which lifeline do you want to use ? ");
cout<<"\n";
if(type!=1)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("1. Audience Pole");
}
if(type!=2)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("2. Expert Advice");
}
if(type!=3)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("3. Double Dip");
}
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>type1;
if(type1==1 && type!=1)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.2. By which of these nicknames is Nagpur");
cout<<"\n\t\t    ";
cprintf("also known as ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Diamond City");
cout<<"\t\t";
cprintf("2. Orange City");
cout<<"\n\t\t    ";
cprintf("3. Pink City");
cout<<"\t\t";
cprintf("4. City of Lakes");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Diamond City :- 3%");
cout<<"\n\t\t    ";
cprintf("2. Orange City :- 67%");
cout<<"\n\t\t    ";
cprintf("3. Pink City :- 16%");
cout<<"\n\t\t    ";
cprintf("4. City of Lakes :- 14%");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit1;
if(quit1=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.2. By which of these nicknames is Nagpur");
cout<<"\n\t\t    ";
cprintf("also known as ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Diamond City");
cout<<"\t\t";
cprintf("2. Orange City");
cout<<"\n\t\t    ";
cprintf("3. Pink City");
cout<<"\t\t";
cprintf("4. City of Lakes");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Diamond City :- 3%");
cout<<"\n\t\t    ";
cprintf("2. Orange City :- 67%");
cout<<"\n\t\t    ";
cprintf("3. Pink City :- 16%");
cout<<"\n\t\t    ";
cprintf("4. City of Lakes :- 14%");
cout<<"\n\t\t    ";
textcolor(RED);
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans2;
clrscr();
}
}
if(type1==2 && type!=2)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.2. By which of these nicknames is Nagpur");
cout<<"\n\t\t    ";
cprintf("also known as ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Diamond City");
cout<<"\t\t";
cprintf("2. Orange City");
cout<<"\n\t\t    ";
cprintf("3. Pink City");
cout<<"\t\t";
cprintf("4. City of Lakes");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- Nagpur is well known for its oranges.");
cout<<"\n\n\t\t    ";
textcolor(RED);
delay(5000);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit1;
if(quit1=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.2. By which of these nicknames is Nagpur");
cout<<"\n\t\t    ";
cprintf("also known as ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Diamond City");
cout<<"\t\t";
cprintf("2. Orange City");
cout<<"\n\t\t    ";
cprintf("3. Pink City");
cout<<"\t\t";
cprintf("4. City of Lakes");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- Nagpur is well known for its oranges.");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans2;
clrscr();
}
}
if(type1==3 && type!=3)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("     Double  Dip     ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.2. By which of these nicknames is Nagpur");
cout<<"\n\t\t    ";
cprintf("also known as ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Diamond City");
cout<<"\t\t";
cprintf("2. Orange City");
cout<<"\n\t\t    ";
cprintf("3. Pink City");
cout<<"\t\t";
cprintf("4. City of Lakes");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Now you have to choose 2 options and");
cout<<"\n\t\t    ";
cprintf("you cannot quit the game.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your first option :- ");
cin>>ans2;
if(ans2!=2)
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Oh no! ");
cout<<ans2;
cprintf(" is wrong answer.");
cout<<"\n\t\t    ";
cprintf("Don't worry, You have 1 more chance.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your second option :- ");
cin>>ans2;
}
}
}
else
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit1;
if(quit1=='y')
{
goto end;
}
else
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.2. By which of these nicknames is Nagpur");
cout<<"\n\t\t    ";
cprintf("also known as ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Diamond City");
cout<<"\t\t";
cprintf("2. Orange City");
cout<<"\n\t\t    ";
cprintf("3. Pink City");
cout<<"\t\t";
cprintf("4. City of Lakes");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans2;
}
clrscr();
/////////////////////////////////(page15)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(14,5);
textbackground(BLACK);
if(ans2==2)
{
textcolor(WHITE);
cprintf("Congratulations! ");
cout<<ans2;
cprintf(" is right answer");
cout<<"\n\n\t      ";
textcolor(GREEN+BLINK);
cprintf("You have won 20,000 rupees");
cout<<"\n\n\t      ";
delay(1000);
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
}
else
{
textcolor(WHITE);
cprintf("Oh no! ");
cout<<ans2;
cprintf(" is wrong answer");
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Correct answer :- 2.Orange City");
cout<<"\n\n\t      ";
textcolor(WHITE+BLINK);
cprintf("You have won 10 Thousand rupees");
cout<<"\n\n\t      ";
delay(10000);
textcolor(YELLOW);
cprintf("BETTER LUCK NEXT TIME");
delay(1000);
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
delay(10000);
clrscr();
goto end;
}
delay(10000);
clrscr();
/////////////////////////////////(page16)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,10);
textcolor(GREEN);
cprintf("Here comes your 3rd question worth 40 Thousand Rupees");
delay(5000);
clrscr();
/////////////////////////////////(page17)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,4);
cout<<endl<<endl<<endl;
cout<<"\n\t\t    ";
textcolor(GREEN);
cprintf("Q.3. Which pieces are maximum in number at");
cout<<"\n\t\t    ";
cprintf("the start of a chess game ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Rook");
cout<<"\t\t";
cprintf("2. Knight");
cout<<"\n\t\t    ";
cprintf("3. Pawn");
cout<<"\t\t";
cprintf("4. Bishop");
textcolor(RED);
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to use any lifeline (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>life2;
if(life2=='y')
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Which lifeline do you want to use ? ");
cout<<"\n";
if(type!=1 && type1!=1)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("1. Audience Pole");
}
if(type!=2 && type1!=2)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("2. Expert Advice");
}
if(type!=3 && type1!=3)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("3. Double Dip");
}
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>type2;
if(type2==1 && type!=1 && type1!=1)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.3. Which peices are maximum in number at");
cout<<"\n\t\t    ";
cprintf("the start of a chess game ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Rook");
cout<<"\t\t";
cprintf("2. Knight");
cout<<"\n\t\t    ";
cprintf("3. Pawn");
cout<<"\t\t";
cprintf("4. Bishop");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Rook :- 2%");
cout<<"\n\t\t    ";
cprintf("2. Knight :- 1%");
cout<<"\n\t\t    ";
cprintf("3. Pawn :- 92%");
cout<<"\n\t\t    ";
cprintf("4. Bishop :- 5%");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit2;
if(quit2=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.3. Which peices are maximum in number at");
cout<<"\n\t\t    ";
cprintf("the start of a chess game  ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Rook");
cout<<"\t\t";
cprintf("2. Knight");
cout<<"\n\t\t    ";
cprintf("3. Pawn");
cout<<"\t\t";
cprintf("4. Bishop");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Rook :- 2%");
cout<<"\n\t\t    ";
cprintf("2. Knight :- 1%");
cout<<"\n\t\t    ";
cprintf("3. Pawn :- 92%");
cout<<"\n\t\t    ";
cprintf("4. Bishop :- 5%");
cout<<"\n\t\t    ";
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans3;
clrscr();
}
}
if(type2==2 && type!=2 && type1!=2)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.3. Which peices are maximum in numbers at");
cout<<"\n\t\t    ";
cprintf("the start of a chess game ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Rook");
cout<<"\t\t";
cprintf("2. Knight");
cout<<"\n\t\t    ";
cprintf("3. Pawn");
cout<<"\t\t";
cprintf("4. Bishop");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- Well Pawn is the answer as there are 8.");
cout<<"\n\t\t    ";
cprintf("pawns in a chess and 8 is the mximum number. ");
textcolor(RED);
delay(5000);
cout<<"\n\n\t\t    ";
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit2;
if(quit2=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.3. Which peices are maximum in numbers at");
cout<<"\n\t\t    ";
cprintf("the start of a chess game ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Rook");
cout<<"\t\t";
cprintf("2. Knight");
cout<<"\n\t\t    ";
cprintf("3. Pawn");
cout<<"\t\t";
cprintf("4. Bishop");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- Well Pawn is the answer as there are 8.");
cout<<"\n\t\t    ";
cprintf("pawns in a chess and 8 is the mximum number.");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans3;
clrscr();
}
}
if(type2==3 && type!=3 && type1!=3)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("     Double  Dip     ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.3. Which peices are maximum in numbers at");
cout<<"\n\t\t    ";
cprintf("the start of a chess game ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Rook");
cout<<"\t\t";
cprintf("2. Knight");
cout<<"\n\t\t    ";
cprintf("3. Pawn");
cout<<"\t\t";
cprintf("4. Bishop");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Now you have to choose 2 options and");
cout<<"\n\t\t    ";
cprintf("you cannot quit the game.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your first option :- ");
cin>>ans3;
if(ans3!=3)
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Oh no! ");
cout<<ans3;
cprintf(" is wrong answer.");
cout<<"\n\t\t    ";
cprintf("Don't worry, You have 1 more chance.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your second option :- ");
cin>>ans3;
}
}
}
else
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit2;
if(quit2=='y')
{
goto end;
}
else
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.3. Which peices are maximum in numbers at");
cout<<"\n\t\t    ";
cprintf("the start of a chess game ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Rook");
cout<<"\t\t";
cprintf("2. Knight");
cout<<"\n\t\t    ";
cprintf("3. Pawn");
cout<<"\t\t";
cprintf("4. Bishop");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans3;
}
clrscr();
/////////////////////////////////(page18)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(14,5);
textbackground(BLACK);
if(ans3==3)
{
textcolor(WHITE);
cprintf("Congratulations! ");
cout<<ans3;
cprintf(" is right answer");
cout<<"\n\n\t      ";
textcolor(GREEN+BLINK);
cprintf("You have won 40,000 rupees");
cout<<"\n\n\t      ";
delay(1000);
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
}
else
{
textcolor(WHITE);
cprintf("Oh no! ");
cout<<ans3;
cprintf(" is wrong answer");
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Correct answer :- 3.Pawn");
cout<<"\n\n\t      ";
textcolor(WHITE+BLINK);
cprintf("You have won 20 Thousand  rupees");
cout<<"\n\n\t      ";
delay(10000);
textcolor(YELLOW);
cprintf("BETTER LUCK NEXT TIME");
delay(1000);
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
delay(10000);
clrscr();
goto end;
}
delay(10000);
clrscr();
/////////////////////////////////(page19)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,10);
textcolor(GREEN);
cprintf("Here comes your 4th question worth 80 Thousand Rupees");
delay(5000);
clrscr();
/////////////////////////////////(page20)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,4);
cout<<endl<<endl<<endl;
cout<<"\n\t\t    ";
textcolor(GREEN);
cprintf("Q.4. What was the name of the India's first ");
cout<<"\n\t\t    ";
cprintf("lunar spacecraft launched in October 2008 ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Chandravahaan 1");
cout<<"\t\t";
cprintf("2. Chandrayaan 1");
cout<<"\n\t\t    ";
cprintf("3. Chandravimaan");
cout<<"\t\t";
cprintf("4. Chandrakhoj 1");
textcolor(RED);
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to use any lifeline (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>life3;
if(life3=='y')
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Which lifeline do you want to use ? ");
cout<<"\n";
if(type!=1 && type1!=1 && type2!=1)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("1. Audience Pole");
}
if(type!=2 && type1!=2 && type2!=2)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("2. Expert Advice");
}
if(type!=3 && type1!=3 && type2!=3)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("3. Double Dip");
}
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>type3;
if(type3==1 && type!=1 && type1!=1 && type2!=1)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.4. What was the name of the India's first ");
cout<<"\n\t\t    ";
cprintf("lunar spacecraft launched in October 2008 ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Chandravahaan 1");
cout<<"\t\t";
cprintf("2. Chandrayaan 1");
cout<<"\n\t\t    ";
cprintf("3. Chandravimaan");
cout<<"\t\t";
cprintf("4. Chandrakhoj 1");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Chandravahaan 1 :- 32%");
cout<<"\n\t\t    ";
cprintf("2. Chandrayaan 1 :- 48%");
cout<<"\n\t\t    ";
cprintf("3. Chandravimaan :- 13%");
cout<<"\n\t\t    ";
cprintf("4. Chandrakhoj 1 :- 7%");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit3;
if(quit3=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.4. What was the name of the India's first ");
cout<<"\n\t\t    ";
cprintf("lunar spacecraft launched in October 2008 ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Chandravahaan 1");
cout<<"\t\t";
cprintf("2. Chandrayaan 1");
cout<<"\n\t\t    ";
cprintf("3. Chandravimaan");
cout<<"\t\t";
cprintf("4. Chandrakhoj 1");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Chandravahaan 1 :- 32%");
cout<<"\n\t\t    ";
cprintf("2. Chandrayaan 1 :- 48%");
cout<<"\n\t\t    ";
cprintf("3. Chandravimaan :- 13%");
cout<<"\n\t\t    ";
cprintf("4. Chandrakhoj 1 :- 7%");
cout<<"\n\t\t    ";
textcolor(RED);
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans4;
clrscr();
}
}
if(type3==2 && type!=2 && type2!=2 && type1!=2)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.4. What was the name of the India's first ");
cout<<"\n\t\t    ";
cprintf("lunar spacecraft launched in October 2008 ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Chandravahaan 1");
cout<<"\t\t";
cprintf("2. Chandrayaan 1");
cout<<"\n\t\t    ";
cprintf("3. Chandravimaan");
cout<<"\t\t";
cprintf("4. Chandrakhoj 1");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- After deep thinking, I think that ");
cout<<"\n\t\t    ";
cprintf("2. Chandrayaan is the right answer. ");
textcolor(RED);
delay(5000);
cout<<"\n\n\t\t    ";
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit3;
if(quit3=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.4. What was the name of the India's first ");
cout<<"\n\t\t    ";
cprintf("lunar spacecraft launched in October 2008 ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Chandravahaan 1");
cout<<"\t\t";
cprintf("2. Chandrayaan 1");
cout<<"\n\t\t    ";
cprintf("3. Chandravimaan");
cout<<"\t\t";
cprintf("4. Chandrakhoj 1");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- After deep thinking, I think that ");
cout<<"\n\t\t    ";
cprintf("2. Chandrayaan is the right answer. ");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans4;
clrscr();
}
}
if(type3==3 && type!=3 && type1!=3 && type2!=3)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("     Double  Dip     ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.4. What was the name of the India's first ");
cout<<"\n\t\t    ";
cprintf("lunar spacecraft launched in October 2008 ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Chandravahaan 1");
cout<<"\t\t";
cprintf("2. Chandrayaan 1");
cout<<"\n\t\t    ";
cprintf("3. Chandravimaan");
cout<<"\t\t";
cprintf("4. Chandrakhoj 1");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Now you have to choose 2 options and");
cout<<"\n\t\t    ";
cprintf("you cannot quit the game.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your first option :- ");
cin>>ans4;
if(ans4!=2)
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Oh no! ");
cout<<ans4;
cprintf(" is wrong answer.");
cout<<"\n\t\t    ";
cprintf("Don't worry, You have 1 more chance.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your second option :- ");
cin>>ans4;
}
}
}
else
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit3;
if(quit3=='y')
{
goto end;
}
else
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.4. What was the name of the India's first ");
cout<<"\n\t\t    ";
cprintf("lunar spacecraft launched in October 2008 ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Chandravahaan 1");
cout<<"\t\t";
cprintf("2. Chandrayaan 1");
cout<<"\n\t\t    ";
cprintf("3. Chandravimaan");
cout<<"\t\t";
cprintf("4. Chandrakhoj 1");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans4;
}
clrscr();
/////////////////////////////////(page21)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(14,5);
textbackground(BLACK);
if(ans4==2)
{
textcolor(WHITE);
cprintf("Congratulations! ");
cout<<ans4;
cprintf(" is right answer");
cout<<"\n\n\t      ";
textcolor(GREEN+BLINK);
cprintf("You have won 80,000 rupees");
cout<<"\n\n\t      ";
delay(1000);
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
}
else
{
textcolor(WHITE);
cprintf("Oh no! ");
cout<<ans4;
cprintf(" is wrong answer");
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Correct answer :- 2.Chandrayaan 1");
cout<<"\n\n\t      ";
textcolor(WHITE+BLINK);
cprintf("You have won 40 Thousand rupees");
cout<<"\n\n\t      ";
delay(10000);
textcolor(YELLOW);
cprintf("BETTER LUCK NEXT TIME");
delay(1000);
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
delay(10000);
clrscr();
goto end;
}
delay(10000);
clrscr();
/////////////////////////////////(page22)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,10);
textcolor(GREEN);
cprintf("Here comes your 5th question worth 1 Lakh");
cout<<"\n\t      ";
cprintf("60 thousand Rupees");
delay(5000);
clrscr();
/////////////////////////////////(page23)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,4);
textcolor(GREEN);
cout<<endl<<endl<<endl;
cout<<"\n\t\t    ";
cprintf("Q.5. The scheme for rural employment NREGA ");
cout<<"\n\t\t    ";
cprintf("has been named after which leader ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Mahatam Gandhi");
cout<<"\t\t";
cprintf("2. Rajiv Gandhi");
cout<<"\n\t\t    ";
cprintf("3. Jawahar Lal Nehru");
cout<<"\t";
cprintf("4. Indira Gandhi");
textcolor(RED);
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to use any lifeline (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>life4;
if(life4=='y')
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Which lifeline do you want to use ? ");
cout<<"\n";
if(type!=1 && type1!=1 && type2!=1 && type3!=1)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("1. Audience Pole");
}
if(type!=2 && type1!=2 && type2!=2 && type3!=2)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("2. Expert Advice");
}
if(type!=3 && type1!=3 && type2!=3 && type3!=3)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("3. Double Dip");
}
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>type4;
if(type4==1 && type!=1 && type1!=1 && type2!=1 && type3!=1)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.5. The scheme for rural employment NREGA ");
cout<<"\n\t\t    ";
cprintf("has been named after which leader ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Mahatam Gandhi");
cout<<"\t\t";
cprintf("2. Rajiv Gandhi");
cout<<"\n\t\t    ";
cprintf("3. Jawahar Lal Nehru");
cout<<"\t";
cprintf("4. Indira Gandhi");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Mahatama Gandhi :- 43%");
cout<<"\n\t\t    ";
cprintf("2. Rajiv Gandhi :- 15%");
cout<<"\n\t\t    ";
cprintf("3. Jawahar Lal Nehru :- 39%");
cout<<"\n\t\t    ";
cprintf("4. Indira Gandhi :- 3%");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit4;
if(quit4=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.5. The scheme for rural employment NREGA ");
cout<<"\n\t\t    ";
cprintf("has been named after which leader ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Mahatam Gandhi");
cout<<"\t\t";
cprintf("2. Rajiv Gandhi");
cout<<"\n\t\t    ";
cprintf("3. Jawahar Lal Nehru");
cout<<"\t";
cprintf("4. Indira Gandhi");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Mahatama Gandhi :- 43%");
cout<<"\n\t\t    ";
cprintf("2. Rajiv Gandhi :- 15%");
cout<<"\n\t\t    ";
cprintf("3. Jawahar Lal Nehru :- 39%");
cout<<"\n\t\t    ";
cprintf("4. Indira Gandhi :- 3%");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans5;
clrscr();
}
}
if(type4==2 && type!=2 && type2!=2 && type1!=2 && type3!=2)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.5. The scheme for rural employment NREGA ");
cout<<"\n\t\t    ";
cprintf("has been named after which leader ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Mahatam Gandhi");
cout<<"\t\t";
cprintf("2. Rajiv Gandhi");
cout<<"\n\t\t    ";
cprintf("3. Jawahar Lal Nehru");
cout<<"\t";
cprintf("4. Indira Gandhi");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- Well I'm not sure but I think ");
cout<<"\n\t\t    ";
cprintf("1. Mahatama Gandhi or 3. J.L. Nehru could be");
cout<<"\n\t\t    ";
cprintf("the answer.");
textcolor(RED);
delay(5000);
cout<<"\n\n\t\t    ";
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit4;
if(quit4=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.5. The scheme for rural employment NREGA ");
cout<<"\n\t\t    ";
cprintf("has been named after which leader ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Mahatam Gandhi");
cout<<"\t\t";
cprintf("2. Rajiv Gandhi");
cout<<"\n\t\t    ";
cprintf("3. Jawahar Lal Nehru");
cout<<"\t";
cprintf("4. Indira Gandhi");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- Well I'm not sure but I think ");
cout<<"\n\t\t    ";
cprintf("1. Mahatama Gandhi or 3. J.L. Nehru could be");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans5;
clrscr();
}
}
if(type4==3 && type!=3 && type1!=3 && type2!=3 && type3!=3)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("     Double  Dip     ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.5. The scheme for rural employment NREGA ");
cout<<"\n\t\t    ";
cprintf("has been named after which leader ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Mahatam Gandhi");
cout<<"\t\t";
cprintf("2. Rajiv Gandhi");
cout<<"\n\t\t    ";
cprintf("3. Jawahar Lal Nehru");
cout<<"\t";
cprintf("4. Indira Gandhi");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Now you have to choose 2 options and");
cout<<"\n\t\t    ";
cprintf("you cannot quit the game.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your first option :- ");
cin>>ans5;
if(ans5!=1)
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Oh no! ");
cout<<ans5;
cprintf(" is wrong answer.");
cout<<"\n\t\t    ";
cprintf("Don't worry, You have 1 more chance.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your second option :- ");
cin>>ans5;
}
}
}
else
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit4;
if(quit4=='y')
{
goto end;
}
else
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.5. The scheme for rural employment NREGA ");
cout<<"\n\t\t    ";
cprintf("has been named after which leader ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Mahatam Gandhi");
cout<<"\t\t";
cprintf("2. Rajiv Gandhi");
cout<<"\n\t\t    ";
cprintf("3. Jawahar Lal Nehru");
cout<<"\t";
cprintf("4. Indira Gandhi");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans5;
}
clrscr();
/////////////////////////////////(page24)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(14,5);
textbackground(BLACK);
if(ans5==1)
{
textcolor(WHITE);
cprintf("Congratulations! ");
cout<<ans5;
cprintf(" is right answer");
cout<<"\n\n\t      ";
textcolor(GREEN+BLINK);
cprintf("You have won 1,60,000 rupees");
cout<<"\n\n\t      ";
delay(1000);
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
}
else
{
textcolor(WHITE);
cprintf("Oh no! ");
cout<<ans5;
cprintf(" is wrong answer");
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Correct answer :- 1.Mahatma Gandhi");
cout<<"\n\n\t      ";
textcolor(WHITE+BLINK);
cprintf("You have won 80 Thousand rupees");
cout<<"\n\n\t      ";
delay(10000);
textcolor(YELLOW);
cprintf("BETTER LUCK NEXT TIME");
delay(1000);
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
delay(10000);
clrscr();
goto end;
}
delay(10000);
clrscr();
/////////////////////////////////(page7)//////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,10);
textcolor(GREEN);
cprintf("Here comes your 6th question worth 3 Lakh ");
cout<<"\n\t      ";
cprintf("20 Thousand Rupees");
delay(5000);
clrscr();
/////////////////////////////////(page20)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,4);
cout<<endl<<endl<<endl;
cout<<"\n\t\t    ";
textcolor(GREEN);
cprintf("Q.6. Gyaneshwari, Lichchavi, Gorakdham and ");
cout<<"\n\t\t    ";
cprintf("Sarayu are all names of what ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Saree types");
cout<<"\t\t";
cprintf("2. Rivers");
cout<<"\n\t\t    ";
cprintf("3. Express Trains");
cout<<"\t\t";
cprintf("4. Bud. Monastries");
textcolor(RED);
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to use any lifeline (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>life5;
if(life5=='y')
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Which lifeline do you want to use ? ");
cout<<"\n";
if(type!=1 && type1!=1 && type2!=1 && type3!=1 && type4!=1)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("1. Audience Pole");
}
if(type!=2 && type1!=2 && type2!=2 && type3!=2 && type4!=2)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("2. Expert Advice");
}
if(type!=3 && type1!=3 && type2!=3 && type3!=3 && type4!=3)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("3. Double Dip");
}
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>type5;
if(type5==1 && type!=1 && type1!=1 && type2!=1 && type3!=1 && type4!=1)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.6. Gyaneshwari, Lichchavi, Gorakdham and ");
cout<<"\n\t\t    ";
cprintf("Sarayu are all names of what ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Saree types");
cout<<"\t\t";
cprintf("2. Rivers");
cout<<"\n\t\t    ";
cprintf("3. Express Trains");
cout<<"\t\t";
cprintf("4. Bud. Monastries");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Saree types :- 13%");
cout<<"\n\t\t    ";
cprintf("2. Rivers :- 7%");
cout<<"\n\t\t    ";
cprintf("3. Express Trains :- 61%");
cout<<"\n\t\t    ";
cprintf("4. Buddhist Monastries :- 19%");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit5;
if(quit5=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.6. Gyaneshwari, Lichchavi, Gorakdham and ");
cout<<"\n\t\t    ";
cprintf("Sarayu are all names of what ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Saree types");
cout<<"\t\t";
cprintf("2. Rivers");
cout<<"\n\t\t    ";
cprintf("3. Express Trains");
cout<<"\t\t";
cprintf("4. Bud. Monastries");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Saree types :- 13%");
cout<<"\n\t\t    ";
cprintf("2. Rivers :- 7%");
cout<<"\n\t\t    ";
cprintf("3. Express Trains :- 61%");
cout<<"\n\t\t    ";
cprintf("4. Buddhist Monastries :- 19%");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans6;
clrscr();
}
}
if(type5==2 && type!=2 && type2!=2 && type1!=2 && type3!=2 && type4!=2)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.6. Gyaneshwari, Lichchavi, Gorakdham and ");
cout<<"\n\t\t    ";
cprintf("Sarayu are all names of what ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Saree types");
cout<<"\t\t";
cprintf("2. Rivers");
cout<<"\n\t\t    ";
cprintf("3. Express Trains");
cout<<"\t\t";
cprintf("4. Bud. Monastries");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- All these are the names of the Express");
cout<<"\n\t\t    ";
cprintf("Trains. ");
textcolor(RED);
delay(5000);
cout<<"\n\n\t\t    ";
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit5;
if(quit5=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.6. Gyaneshwari, Lichchavi, Gorakdham and ");
cout<<"\n\t\t    ";
cprintf("Sarayu are all names of what ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Saree types");
cout<<"\t\t";
cprintf("2. Rivers");
cout<<"\n\t\t    ";
cprintf("3. Express Trains");
cout<<"\t\t";
cprintf("4. Bud. Monastries");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- All these are the names of the Express");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans6;
clrscr();
}
}
if(type5==3 && type!=3 && type1!=3 && type2!=3 && type3!=3 && type4!=3)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("     Double  Dip     ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.6. Gyaneshwari, Lichchavi, Gorakdham and ");
cout<<"\n\t\t    ";
cprintf("Sarayu are all names of what ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Saree types");
cout<<"\t\t";
cprintf("2. Rivers");
cout<<"\n\t\t    ";
cprintf("3. Express Trains");
cout<<"\t";
cprintf("4. Bud. Monastries");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Now you have to choose 2 options and");
cout<<"\n\t\t    ";
cprintf("you cannot quit the game.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your first option :- ");
cin>>ans6;
if(ans6!=3)
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Oh no! ");
cout<<ans6;
cprintf(" is wrong answer.");
cout<<"\n\t\t    ";
cprintf("Don't worry, You have 1 more chance.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your second option :- ");
cin>>ans6;
}
}
}
else
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit5;
if(quit5=='y')
{
goto end;
}
else
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.6. Gyaneshwari, Lichchavi, Gorakdham and ");
cout<<"\n\t\t    ";
cprintf("Sarayu are all names of what ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Saree types");
cout<<"\t\t";
cprintf("2. Rivers");
cout<<"\n\t\t    ";
cprintf("3. Express Trains");
cout<<"\t";
cprintf("4. Bud. Monastries");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans6;
}
clrscr();
/////////////////////////////////(page24)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(14,5);
textbackground(BLACK);
if(ans6==3)
{
textcolor(WHITE);
cprintf("Congratulations! ");
cout<<ans6;
cprintf(" is right answer");
cout<<"\n\n\t      ";
textcolor(GREEN+BLINK);
cprintf("You have won 3,20,000 rupees");
cout<<"\n\n\t      ";
delay(1000);
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
}
else
{
textcolor(WHITE);
cprintf("Oh no! ");
cout<<ans6;
cprintf(" is wrong answer");
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Correct answer :- 3.Express Trains");
cout<<"\n\n\t      ";
textcolor(WHITE+BLINK);
cprintf("You have won 1 Lakh 60 Thousand rupees");
cout<<"\n\n\t      ";
delay(10000);
textcolor(YELLOW);
cprintf("BETTER LUCK NEXT TIME");
delay(1000);
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
delay(10000);
clrscr();
goto end;
}
delay(10000);
clrscr();
/////////////////////////////////(page20)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,10);
textbackground(BLACK);
textcolor(GREEN);
cprintf("Here comes your 7th question worth 6 Lakh");
cout<<"\n\t      ";
cprintf("40 thousand Rupees");
delay(5000);
clrscr();
/////////////////////////////////(page23)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(14,4);
cout<<endl<<endl<<endl;
cout<<"\n\t\t    ";
textcolor(GREEN);
cprintf("Q.7. What kind of animal is Shera, the mascot");
cout<<"\n\t\t    ";
cprintf("of the 2010 Delhi Commonwealth Games ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Bear");
cout<<"\t\t";
cprintf("2. Leopard");
cout<<"\n\t\t    ";
cprintf("3. Lion");
cout<<"\t\t";
cprintf("4. Tiger");
textcolor(RED);
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to use any lifeline (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>life6;
if(life6=='y')
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Which lifeline do you want to use ? ");
cout<<"\n";
if(type!=1 && type1!=1 && type2!=1 && type3!=1 && type4!=1 && type5!=1)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("1. Audience Pole");
}
if(type!=2 && type1!=2 && type2!=2 && type3!=2 && type4!=2 && type5!=2)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("2. Expert Advice");
}
if(type!=3 && type1!=3 && type2!=3 && type3!=3 && type4!=3 && type5!=3)
{
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("3. Double Dip");
}
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>type6;
if(type6==1 && type!=1 && type1!=1 && type2!=1 && type3!=1 && type4!=1 && type5!=1)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.7. What kind of animal is Shera, the mascot");
cout<<"\n\t\t    ";
cprintf("of the 2010 Delhi Commonwealth Games ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Bear");
cout<<"\t\t";
cprintf("2. Leopard");
cout<<"\n\t\t    ";
cprintf("3. Lion");
cout<<"\t\t";
cprintf("4. Tiger");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Bear :- 8%");
cout<<"\n\t\t    ";
cprintf("2. Leopard :- 3%");
cout<<"\n\t\t    ";
cprintf("3. Lion :- 43%");
cout<<"\n\t\t    ";
cprintf("4. Tiger :- 46%");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit6;
if(quit6=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Audience Pole    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.7. What kind of animal is Shera, the mascot");
cout<<"\n\t\t    ";
cprintf("of the 2010 Delhi Commonwealth Games ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Bear");
cout<<"\t\t";
cprintf("2. Leopard");
cout<<"\n\t\t    ";
cprintf("3. Lion");
cout<<"\t\t";
cprintf("4. Tiger");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("1. Bear :- 8%");
cout<<"\n\t\t    ";
cprintf("2. Leopard :- 3%");
cout<<"\n\t\t    ";
cprintf("3. Lion :- 43%");
cout<<"\n\t\t    ";
cprintf("4. Tiger :- 46%");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans7;
clrscr();
}
}
if(type6==2 && type!=2 && type2!=2 && type1!=2 && type3!=2 && type4!=2 && type5!=2)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.7. What kind of animal is Shera, the mascot");
cout<<"\n\t\t    ";
cprintf("of the 2010 Delhi Commonwealth Games ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Bear");
cout<<"\t\t";
cprintf("2. Leopard");
cout<<"\n\t\t    ";
cprintf("3. Lion");
cout<<"\t\t";
cprintf("4. Tiger");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- Shera is a type of 4. Tiger");
textcolor(RED);
delay(5000);
cout<<"\n\n\t\t    ";
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit6;
if(quit6=='y')
{
goto end;
}
else
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("    Expert Advice    ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.7. What kind of animal is Shera, the mascot");
cout<<"\n\t\t    ";
cprintf("of the 2010 Delhi Commonwealth Games ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Bear");
cout<<"\t\t";
cprintf("2. Leopard");
cout<<"\n\t\t    ";
cprintf("3. Lion");
cout<<"\t\t";
cprintf("4. Tiger");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Expert :- Shera is a type of 4. Tiger");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans7;
clrscr();
}
}
if(type6==3 && type!=3 && type1!=3 && type2!=3 && type3!=3 && type4!=3 && type5!=3)
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
textcolor(WHITE+BLINK);
cprintf("     Double  Dip     ");
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.7. What kind of animal is Shera, the mascot");
cout<<"\n\t\t    ";
cprintf("of the 2010 Delhi Commonwealth Games ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Bear");
cout<<"\t\t";
cprintf("2. Leopard");
cout<<"\n\t\t    ";
cprintf("3. Lion");
cout<<"\t\t";
cprintf("4. Tiger");
cout<<"\n\n\t\t    ";
textcolor(RED);
cprintf("Now you have to choose 2 options and");
cout<<"\n\t\t    ";
cprintf("you cannot quit the game.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your first option :- ");
cin>>ans7;
if(ans7!=4)
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Oh no! ");
cout<<ans7;
cprintf(" is wrong answer.");
cout<<"\n\t\t    ";
cprintf("Don't worry, You have 1 more chance.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("Enter your second option :- ");
cin>>ans7;
}
}
}
else
{
cout<<"\n\t\t    ";
textcolor(RED);
cprintf("Do you want to quit (y/n)? ");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("Answer :- ");
cin>>quit6;
if(quit6=='y')
{
goto end;
}
else
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
textbackground(BLACK);
gotoxy(30,4);
cout<<endl<<endl<<endl;
cout<<"\t\t    ";
textcolor(GREEN);
cprintf("Q.7. What kind of animal is Shera, the mascot");
cout<<"\n\t\t    ";
cprintf("of the 2010 Delhi Commonwealth Games ?");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("1. Bear");
cout<<"\t\t";
cprintf("2. Leopard");
cout<<"\n\t\t    ";
cprintf("3. Lion");
cout<<"\t\t";
cprintf("4. Tiger");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Then Enter the answer :- ");
cin>>ans7;
}
clrscr();
/////////////////////////////////(page24)/////////////////////////////////////
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(14,5);
textbackground(BLACK);
if(ans7==4)
{
textcolor(WHITE);
cprintf("Congratulations! ");
cout<<ans7;
cprintf(" is right answer");
cout<<"\n\n\t      ";
textcolor(GREEN+BLINK);
cprintf("You have won 6,40,000 rupees");
cout<<"\n\n\t      ";
delay(1000);
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
}
else
{
textcolor(WHITE);
cprintf("Oh no! ");
cout<<ans7;
cprintf(" is wrong answer");
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Correct answer :- 4.Tiger");
cout<<"\n\n\t      ";
textcolor(WHITE+BLINK);
cprintf("You have won 3 Lakhs 20 Thousand rupees");
cout<<"\n\n\t      ";
delay(10000);
textcolor(YELLOW);
cprintf("BETTER LUCK NEXT TIME");
delay(1000);
cout<<"\n\n\t      ";
textcolor(GREEN);
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t      ";
cprintf("applause for ");
cout<<name;
delay(10000);
clrscr();
goto end;
}
delay(10000);
clrscr();



}
end:
clrscr();
if(quit=='y')
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(32,5);
textcolor(WHITE+BLINK);
textbackground(BLACK);
cprintf("Congratulations!");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("You have won 0 rupees");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("Sorry!");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t\t    ";
cprintf("applause for ");
cout<<name;
delay(10000);
}
else if(quit1=='y')
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(32,5);
textcolor(WHITE+BLINK);
textbackground(BLACK);
cprintf("Congratulations!");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("You have won 10 Thousand rupees");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("Here is your check");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t\t    ";
cprintf("applause for ");
cout<<name;
delay(10000);
}
else if(quit2=='y')
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(32,5);
textcolor(WHITE+BLINK);
textbackground(BLACK);
cprintf("Congratulations!");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("You have won 20 Thousand rupees");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("Here is your check");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t\t    ";
cprintf("applause for ");
cout<<name;
delay(10000);
}
else if(quit3=='y')
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(32,5);
textcolor(WHITE+BLINK);
textbackground(BLACK);
cprintf("Congratulations!");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("You have won 40 Thousand rupees");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("Here is your check");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t\t    ";
cprintf("applause for ");
cout<<name;
delay(10000);
}
else if(quit4=='y')
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(32,5);
textcolor(WHITE+BLINK);
textbackground(BLACK);
cprintf("Congratulations!");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("You have won 80 Thousand rupees");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("Here is your check");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t\t    ";
cprintf("applause for ");
cout<<name;
delay(10000);
}
else if(quit5=='y')
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(32,5);
textcolor(WHITE+BLINK);
textbackground(BLACK);
cprintf("Congratulations!");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("You have won 1 Lakh");
cout<<"\n\t\t    ";
cprintf("60 Thousand rupees");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("Here is your check");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t\t    ";
cprintf("applause for ");
cout<<name;
delay(10000);
}
else if(quit6=='y')
{
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(32,5);
textbackground(BLACK);
textcolor(WHITE+BLINK);
cprintf("Congratulations!");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("You have won 3 Lakh");
cout<<"\n\t\t    ";
cprintf("20 Thousand rupees");
cout<<"\n\n\t\t    ";
textcolor(YELLOW);
cprintf("Here is your check");
textcolor(GREEN);
cout<<"\n\n\t\t    ";
cprintf("Ladies and Gentlemen, please give a big hand of");
cout<<"\n\t\t    ";
cprintf("applause for ");
cout<<name;
delay(10000);
}
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(32,5);
cout<<"\n\t\t    ";
textbackground(BLACK);
textcolor(WHITE);
cprintf("Hope you had enjoyed the game.");
cout<<"\n\n\t\t    ";
textcolor(GREEN);
cprintf("You can send me your feedback at");
textcolor(YELLOW);
cout<<"\n\t\t    ";
cprintf("<< www.shubham.mahajan@hotmail.com >>");
textcolor(GREEN);
cout<<"\n\t\t    ";
cprintf("So that changes can be made in future versions.");
cout<<"\n\n\t\t    ";
textcolor(RED);
delay(5000);
cprintf("Thank You for playing");
delay(10000);
clrscr();
cout<<endl;
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
for(a=1;a<=21;a++)
{
textcolor(BLUE);
textbackground(BLUE);
delay(25);
cprintf("XXXXXXXXXX");
cout<<"\t\t\t\t\t\t             ";
cprintf("XXXXXXXXXX");
cout<<endl;
}
for(a=1;a<=80;a++)
{
textcolor(BLUE);
textbackground(BLUE);
cprintf("X");
}
gotoxy(27,10);
textbackground(BLACK);
textcolor(GREEN);
cprintf("Your game is shutting down");
gotoxy(34,11);
textcolor(WHITE+BLINK);
cprintf("Please Wait.");
delay(5000);
gotoxy(11,23);
for(i=1;i<=59;i++)
{
delay(100);
textcolor(RED);
textbackground(RED);
cprintf("X");
}
textcolor(BLACK);
textbackground(BLACK);
gotoxy(32,12);
textcolor(GREEN);
cprintf("You can quit now");
end1:
clrscr();
getch();
}