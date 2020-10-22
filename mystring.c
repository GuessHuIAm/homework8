#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"

int mystrlen(char *s){
	int sum = 0;
	while (*s){
		sum++;
		s++;
	}
	return sum;
}

char * mystrcpy(char *s1, char *s2){
	int l = mystrlen(s2);
	int i;
	for (i = 0; i < l; i++){
		s2[i] = s1[i];
	}
	return s1;
}

char * mystrncat(char *s1, char *s2, int size){
	int l = mystrlen(s1);
	int i;
	for (i = 0; i < size && s2[i]; i++){
		s1[l + i] = s2[i];
	}
	return s1;
}

char * mystrchr(char * s, char c){
	int l = mystrlen(s);
	for (int i = 0; i < l + 1; i++){
		if (s[i] == c){
			return s + i;
		}
	}
	return NULL;
}

int mystrcmp(char *s1, char *s2){
	int i = 0;
	while(s1[i] && s2[i]){
		if(s1[i] > s2[i]){
			return 1;
		}
		else if (s1[i] < s2[i]){
			return -1;
		}
		i++;
	}
	if (s1[i]) return 1; // did they both end already? if not, which one ended first?
	if (s2[i]) return -1;

	return 0;
}
