#ifndef STRINGSS_H
#define STRINGSS_H

void stringinputdynamic(void);
void basicstringinput(void);
void input2strings(void);
int lenghtofstring(char str[]);
void copyastring(char source[],char dest[]);
void concatenatestrings(char str1[],char str2[]);
void comparestrings(char str1[],char str2[]);
void stringcopyy(char src[],char dest[],int n);
void stringconcat(char src[], char dest[], int n);
void firstoccuranceinstring(char str[],int c);
void firstoccurancesubstring(char str[],char str1[]);
void uppertolowercase(char str[]);
void countallthings(char str[]);
void countwords(char str[]);
char* reversestring(char str[]);
void palindromestring(char str[]);
char* removeallspaces(char str[]);
int frequencyofcharacters(char str[], char c);
void removeduplicatess(char str[]);
void reversewordinsentence(char str[]);
void firstnonrepeatingcharacter(char str[]);
void checkifanagram(char str1[], char str2[]);
void longestword(char str[]);

#endif