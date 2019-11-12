#include<stdio.h>
int main() {
	int num, i;
	
	char name[100][20], id[100][20];
	int cj[101];
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%s %s %d",name[i],id[i],&cj[i]);
	}
	
	int max = 0, min = 0;
	for(i = 0; i < num; i++) {
		if(cj[i] > cj[max]) {
			max = i;
		}
		if(cj[i] < cj[min]) {
			min = i;
		}
	}
	printf("%s %s\n",name[max],id[max]);
	printf("%s %s",name[min],id[min]);
	return 0;
} 
