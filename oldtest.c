void aboveBelow(int value, int data[],int size, 
					int* above, int* below, int* equal){

	int i;
	*above = *below = *equal = 0;
	for(i=0;i<size;i++){
		if(value < data[i]){
			*above = *above + 1;
		}
		else if(value > data[i]){
			(*below)++;
		}
		else{
			*equal += 1;
		}
	}
}
int countChar(const char string[], char letter){
	int rc=0;
	char other='\0';
	if(letter >= 'A'  && letter <='Z') ||
		other = letter + 'a'-'A';
	}
	else if(letter >= 'a' && letter <= 'z'){
		other = letter - ('a' - 'A');
	}
	for(i =0;string[i] != '\0';i++){
		if(letter == string[i]  || string[i] == other){
			rc++;
		}

	}
	return rc;
}
/*this function returns the lower case version of c if
c is an upper case alphabetic character.  If it isn't,
function returns c*/
char toLower(char ch){
	int diff= 'a'-'A';
	char rc=ch;
	if(ch >='A' && ch <='Z'){
		rc = ch + diff;
	}
	return rc;
}

int countChar(const char string[], char letter){
	int size=strlen(string);
	int rc=0;
	for(i =0;i<size;i++){
		if(toLower(string[i]) == toLower(letter)){
			rc++;
		}
	}
	return rc;
}

#include <ctype.h>
int countChar(const char string[], char letter){
	int size=strlen(string);
	int rc=0;
	for(i =0;i<size;i++){
		if(tolower(string[i]) == tolower(letter)){
			rc++;
		}
	}
	return rc;
}


int main(void){

}