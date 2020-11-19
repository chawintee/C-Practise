// https://morsecode.world/international/morse2.html

/*

A	.-
B	-...
C	-.-.
D	-..
E	.
F	..-.
G	--.
H	....
I	..
J	.---
K	-.-
L	.-..
M	--
N	-.
O	---
P	.--.
Q	--.-
R	.-.
S	...
T	-
U	..-
V	...-
W	.--
X	-..-
Y	-.--
Z	--..
0	-----
1	.----
2	..---
3	...--
4	....-
5	.....
6	-....
7	--...
8	---..
9	----.





*/





#include<stdio.h>
#include<string.h>
#include<ctype.h>

int indexOf(char *haystack, char c){
    for(int i = 0 ;i < strlen(haystack);i++){
        if( c == haystack[i]){
            // printf("%d ",i)
            return i;
        }
    }
    return -1;
}


void test2morse(char *msg){
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *m[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",
".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",
".....","-....","--...","---..","----.", };
for (int i = 0; i < strlen(msg); i++){
    int pos = indexOf(a,(char)toupper(msg[i]));
    if (pos != -1){
        printf("%s ",m[pos]);
    }
}

    
}


int main(){
    char msg[] = "SOS";
    test2morse(msg);


    return 0;

}