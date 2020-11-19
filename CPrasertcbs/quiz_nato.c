// https://osric.com/phonetic/index.php?id=2
/*

"alpha",
"bravo",
"charlie",
"delta",
"echo",
"foxtrot",
"golf",
"hotel",
"india",
"juliet",
"kilo",
"lima",
"mike",
"november",
"oscar",
"papa",
"quebec",
"romeo",
"sierra",
"tango",
"uniform",
"victor",
"whiskey",
"x-ray",
"yankee",
"zulu"

*/



#include<stdio.h>
#include<string.h>

void nato(char *s);
void displayPhonetic();
static const char *phonetic[] = {"alpha","bravo","charlie","delta","echo","foxtrot","golf","hotel","india",
"juliet","kilo","lima","mike","november","oscar","papa","quebec","romeo","sierra","tango","uniform",
"victor","whiskey","x-ray","yankee","zulu" };

int main(){
    // nato("hello 2560");
    displayPhonetic();
    char word[30] = "";
    printf("Enter your word : ");
    scanf("%s",&word);
    nato(word);
    return 0;
}

void nato(char *s){
    
for (int i = 0; i < strlen(s);i++){
    if(isalpha(s[i])){
    printf("%s ",phonetic[toupper(s[i]) - 'A']);
    } else {
        printf("%c ", s[i]);
    }
}
 }

 void displayPhonetic(){
    //  printf("Hello\n");
    //  printf("This is display Phonetic\n");
    //  printf("Phonetic[0] = %s\n", phonetic[0]);
     int len1 = sizeof(phonetic);
     int len2 = sizeof(phonetic[0]);
     int len3 = sizeof(phonetic)/sizeof(phonetic[0]);
    //  printf("len1 = %d \n", len1);
    //  printf("len2 = %d \n", len2);
    //  printf("len3 = %d \n", len3);

     for (int i = 0; i < len3; i++){
         printf("| %c | %-8s |\n",phonetic[i][0],phonetic[i]);
     }
     
    //  int len = sizeof(phonetic)/sizeof(phonetic[0]);
    //  printf('len = %d \n',len);
    //  for (int i = 0 ; i < len; i++ ){
    //      printf("|%c| %s |\n", phonetic[i][0],phonetic[i]);
    //  }

 }