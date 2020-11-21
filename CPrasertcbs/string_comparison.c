#include<stdio.h>
#include<string.h>

void demo1(){
    char s1[] = "apple";
    char *s2 = "banana";
    char *s3 = "apple";
    char *s4 = "Apple";
    int v = strcmp(s1,s2);
    int v1 = strcmp(s1,s3);
    int v2 = strcasecmp(s3,s4);
    // int v2 = strcompare(s3,s1);
    printf("v = %d\n",v);
    printf("v1 = %d\n",v1);
    printf("v2 = %d\n",v2);
    printf("s1 = %s (%p)\n",s1,s1);
    printf("s2 = %s (%p)\n",s2,s2);
    printf("s3 = %s (%p)\n",s3,s3);
    printf("s4 = %s (%p)\n",s4,s4);
    // if(strcpy(s1,s2) == 0){ // if ส่งกลับมาเป็น (0) s1 = s2/ if ส่งกลับมาเป็น (-) s1 < s2 ในการเปลียบเทียบรหัส ascii / if ส่งกลับมาเป็น (+) s1 > s2 ในการเปลียบเทียบรหัส ascii
    if(v == 0){ // if ส่งกลับมาเป็น (0) s1 = s2/ if ส่งกลับมาเป็น (-) s1 < s2 ในการเปลียบเทียบรหัส ascii / if ส่งกลับมาเป็น (+) s1 > s2 ในการเปลียบเทียบรหัส ascii
        printf("contents: s1 == s2\n");
    } else {
        printf("contents: s1 != s2\n");
    }
    if (v1 == 0){
        printf("contents: s1 == s3\n");
    }
    if (v2 == 0){
        printf("contents(strcasecmp): s3 == s4\n");
    } 
    if(s1 == s2){
        printf("address : s1 == s2\n");
    } else {
        printf("address : s1 != s2\n");
    }
    if(s3 == s4){
        printf("address : s3 == s4\n");
    } else {
        printf("address : s3 != s4\n");
    }
}


int strcompare(const char *s1,const char *s2){
    int i;
    for(i = 0 ; s1[i] == s2[i];i++ ){
        if(s1[i] == '\0'){
            return 0;
        }
    }
    return s1[i] - s2[i];
}





int main(){
    demo1();
    return 0;
}