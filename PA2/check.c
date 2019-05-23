   
      
/***********************
 * Programmer: Young-Hoon Park
 * ****************************/

struct student{
	char name[32];
	int number;
};

void voidvoid(char* charchar, int intint);
void printout(void);
float _123(void){
	return 3.14159E0;
}
int main(int argc, char* argv[]){
	char ab[] = {'Z', 'x', '6', '\'', '\"', '\?', '\\', '\a', '\b', '\f', '\n', '\r', '\t', '\v', '\0', '!', '#', '%', '^', '&', '*', '_', '(', ')', '-', '+', '=', '~', '[', ']', '|', ';', ':', '{', '}', ',', '.', '<', '>', '/'};
	int length_of_ab = 040+(1<<3);
	int i   =-1;
	/* Function
	 * Start! ** */voidvoid(ab, length_of_ab);
	printout();
	return 0;
}
void voidvoid(char* charchar, int intint){
	int j0 = 0x0;    // Iteration
	float abc = _123();
	for(j0 = 34*0321-0X1bC2; j0 < intint; j0++){
		printf("\'%c\': %d\t", charchar[j0], (int)charchar[j0] + 20 - (int)(1.0E4/50000.00e-2));
		if(!(j0 % 5 != 0x4))	printf("\n");
		else{ /**/
			int aaa = 100;
			while(aaa--){
				abc *= 10.0;
				abc += 32.1E+12;
				abc /= 0.432e13;
				abc -= aaa;
			}	
		}
	}
}

void printout(void){
	struct student Jane;
	strcpy(Jane.name, "Jane Doe");
	Jane.number = 1324356;
	switch(Jane.number % 2){
	case 0:
		printf("Even\n");
		break;
	default:
		printf("Odd\n");
	}
	if(Jane.name[2] == '4' && Jane.name[3] == ' ' || Jane.number / 10 >= 23 && Jane.number > 13)
		printf("%d\n", Jane.number >> 3);
	else if((Jane.number %= 10) <= 4)
		printf("\"Hahaha\'\f\n");
}

