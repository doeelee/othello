#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#define N 6
int gameboard[N][N];
int main(int argc, char *argv[]) {
	
	int i;
	int_othello();
	
	while (isGameEnd() == 0) { //game ���� ���� Ȯ��
	    print_othello("STATUS - WHILE : 2, BLACK : 2"); //��ġ ���� ��� ��
	    printf("put a new white othello : %d %d");
	    
		if(��ġ�� ������ ĭ �մ��� Ȯ��)
		    continue; //�� player ��� ��ġ �Ұ����ϸ� �ݺ��� ��������
		��ġ�� ��ǥ �Է�;
		
		if (�Է� ��ǥ�� �������� üũ)
		    if (������ �õ�){
		       printf("reverse (%d) !");
			   change turn; 
			} 
		else
		    printf("this is invalid!"); 
	} 
	check_result();
	printf("");
	
	
	
	
	return 0;
}
