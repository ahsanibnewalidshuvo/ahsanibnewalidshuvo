#include<stdio.h>
#include <string.h>

int main(){
     char response1[7];

    printf("Do you love someone !! Do you want's to know about her feelings??? \n");
                                   printf("IF Yes then type Y/y,either type N/n \n");
     gets(response1);

                  if (strcmp(response1, "duffer") == 0 || strcmp(response1, "DUFFER") == 0 || strcmp(response1, "Duffer") == 0 || strcmp(response1, "crush") == 0 )
                  {
                    printf("walid,dst tui!!!! \n");
                   dufferx();
                  }
   else if(strcmp(response1, "y") == 0 || strcmp(response1, "Y") == 0 ){
        printf("Congratulations \n");
              printf("\U0001F60A\n");
                    printf("Lets have a deep dive \n");
        question1();
        
        }
else if(strcmp(response1, "n") == 0 || strcmp(response1, "N") == 0 ){
        printf("Thanks for your valuable time.Keep trying to get her attention \n");

    }
  else {
       printf("It's ok mate.take your time \n");
    }
    return 0;
    }






 
int question1(){
    char response2;


    printf("Do you  have an EX !\n");
    scanf("%c",&response2);
    if(response2 == 'y' || response2 == 'Y'){

                    printf("Lets have a deep dive \n");
                    question2();
    }
    else if(response2 == 'n' || response2 == 'N'){
        printf("first time huh!!! \n");
        

        printf("\U0001F60A");
        printf("\U0001F60A");
        printf("\U0001F60A");
        printf("\U0001F60A");
        question2();

    }
    else{
        printf("Hey mate, I told you to type only y/n.Your are giving invalid response.Repet it again.\n");
        question1();
    }

    return 0;
}






    int question2(){
            char responsec[3];
              char responsed[3];
                char response5[3];
                    char response6[3];




                    printf("having fun idiot!! \n");
                    printf("Do you ever recall your EX in your memory !!! \n");
                    scanf("%s",responsec);
                    getchar(); // clear input buffer
                    printf("Are you sure that you loved her? \n");
                    scanf("%s",responsed);
                    getchar(); // clear input buffer
                    printf("responsec is %s \n",responsec);

    return 0;
}




//human behaverious starts here when main funcion gets response answer as duffer/Duffer/DUFFER
int dufferx(){
    char dufferresponsea[100];
    char dufferresponseb[100];
    char dufferresponsec[100];

    printf("valo asos dst? \n");
    fgets(dufferresponsea, 100, stdin); // read up to 99 characters from standard input and store them in dufferresponsea
dufferresponsea[strcspn(dufferresponsea, "\n")] = '\0'; // remove the trailing newline character if present

    if(strcmp(dufferresponsea, "Ha") == 0 || strcmp(dufferresponsea, "ha") == 0 || strcmp(dufferresponsea, "hmm") == 0 ||strcmp(dufferresponsea, "Hmm") == 0 || strcmp(dufferresponsea, "HMM") == 0){
        printf("Valo thak r valo rakh. \n");

        kikortesosakkhon();
        
        }
        else if(strcmp(dufferresponsea, "NA") == 0 || strcmp(dufferresponsea, "Na") == 0 || strcmp(dufferresponsea, "na") == 0 ||strcmp(dufferresponsea, "khub akta valo nai") == 0 || strcmp(dufferresponsea, "jani na") == 0){
        printf("Valobashos akkhon o!!!!!. \n");
        printf("vuila ja shob \n");
        }


        else if(strcmp(dufferresponsea, "Ha") == 0 || strcmp(dufferresponsea, "ha") == 0 || strcmp(dufferresponsea, "hmm") == 0 ||strcmp(dufferresponsea, "Hmm") == 0 || strcmp(dufferresponsea, "HMM") == 0){
        printf("Valo thak r valo rakh. \n");
        printf("Ki krtesos akkhon \n");
        }
        
        else
        {
            printf("kire ki des!!1janos nan vulval typing amar pocondo na!111 \n");
            printf("jaah r kotha e bolmu na");

        }
        



    return 0;
}

int kikortesosakkhon(){
    char response7,response8,response9;
    printf("Ki krtesos akkhon \n");
    scanf("%s",response7);


    return 0;
}
int ammu(){

    
    return 0;
}
