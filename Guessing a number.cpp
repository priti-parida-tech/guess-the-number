#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int random,guess;
	int no_of_guess = 0;
	srand(time(NULL));
	printf("Welcome to the world of guessing numbers\n");
	random=rand()%100+1;//generating between 0 to 100
	printf("please enter your guess between(1 to 100): ");
		scanf("%d", &guess);
		no_of_guess++;
		
		if(guess<random){
			printf("Guess a larger number.\n");
		}else if(guess>random){
			printf("guess a smaller number.\n");
		} else{
			printf("Congratulations!! You have succesfully guessed the number in %d attempts.",no_of_guess);
			
		}
	
	do{
		printf("enter your new guess: ");
		scanf("%d", &guess);
		no_of_guess++;
		
		if(guess<random){
			printf("Guess a larger number.\n");
		}else if(guess>random){
			printf("guess a smaller number.\n");
		} else{
			printf("Congratulations!! You have succesfully guessed the number in %d attempts.",no_of_guess);
			
		}
	}while(guess!=random);
	printf("\n bye bye,Thanks for playing.");
	printf("\n Developed by:nehaparida12625@gmail.com");
	
}
