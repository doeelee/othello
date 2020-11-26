#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#define N 6
int gameboard[N][N];
int main(int argc, char *argv[]) {
	
	int i;
	int_othello();
	
	while (isGameEnd() == 0) { //game 종료 조건 확인
	    print_othello("STATUS - WHILE : 2, BLACK : 2"); //배치 상태 출력 등
	    printf("put a new white othello : %d %d");
	    
		if(배치가 가능한 칸 잇는지 확인)
		    continue; //두 player 모두 배치 불가능하면 반복문 빠져나감
		배치할 좌표 입력;
		
		if (입력 좌표가 적절한지 체크)
		    if (뒤집기 시도){
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
