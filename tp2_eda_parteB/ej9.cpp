/* Hacer un programa en C++ que muestre en pantalla un tablero de ajedrez con:
1. - Los peones con la letra P.
2. - Las torres con la letra T.
3. - Los caballos con la letra C.
4. - Los alfiles con la letra A.
5. - El rey con la letra K.
6. - La reina con letra Q.
• Mover el peón en la casilla diagonal al alfil Tablero [1][4], y mostrar el tablero resultante.
• Repetir esto, para el alfil en [0][5], solo podría salir si el peón se ha movido, sino informarlo. */
#include<stdio.h>

#include<conio.h>

#include<windows.h>

#include<locale.h>



int main(){

	

	int a,b;

	

	for(a=0;a<8;a++)

	{

		for(b=0;b<8;b++)

		{

			if(a==1||a==6) 

			{

				printf("P");

			}

			else if((a==0&&b==0)||(a==7&&b==0)||(a==0&&b==7)||(a==7&&b==7))

			{

				printf("T");

			}

			else if((a==0&&b==1)||(a==7&&b==1)||(a==0&&b==6)||(a==7&&b==6))

			{

				printf("C");

			}

			else if((a==0&&b==2)||(a==7&&b==2)||(a==0&&b==5)||(a==7&&b==5))

			{

				printf("A");

			}

			else if((a==0&&b==3)||(a==7&&b==3))

			{

				printf("M");

			}

			else if((a==0&&b==4)||(a==7&&b==4))

			{

				printf("R");

			}

			else

			{

				printf(" ");

			}

		}

		printf("\n");

	}

	

}