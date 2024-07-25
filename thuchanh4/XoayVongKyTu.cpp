#include<stdio.h>
#include<string.h>

void rotateString(char str[]){
	char temp = str[0];
	int len = strlen(str);
	for (int i = 1; i < len; i++){
		str[i - 1] = str[i];
	}
	str[len - 1] = temp;
}

int main(){
	int n;
	scanf("%d", &n);
	char strings[55][55];
	for (int i = 0; i < n; i++) scanf("%s", strings[i]);
	char target[55];
	strcpy(target, strings[0]);
	char temp[55];
	int len = strlen(target);
	int valid = 1;
	int minRotation = 100000007;
	for (int i = 0; i < len; i++){						
		int totalRotation = 0;
		for (int j = 0; j < n; j++){
			int rotations;
			strcpy(temp, strings[j]);
			for (rotations = 0; rotations < len; rotations++){
				if (strcmp(target, temp) == 0){
					totalRotation += rotations;
					break;
				}
				rotateString(temp);
			}
			if (rotations == len){
				valid = 0; 
				break;
			}
		}
		if (totalRotation < minRotation) minRotation = totalRotation; 
		rotateString(target);
	}
	if (valid == 0) printf("-1");
	else printf("%d", minRotation);
}

