#include <unistd.h>

void    rush(int x, int y);

int main(){
    rush(5,5);
}

void    rush(int x, int y){
    int i;
    int j;

    i = 0;

    while (i < y){
        j = 0;
        while (j < x){
            if(i == 0 || i == y-1){
                if (j == 0 || j == x-1){
					if (i==j){
						write(1, "/", 1);
					}
					else{
						write(1, "\\", 1);
					}
                }
                else{
                    write(1, "*", 1);
                }
            }
            else{
                if (j == 0 || j == x-1){
                    write(1, "*", 1);
                }
                else{
                    write(1, " ", 1);
                }
            }
            j++;
        }
		write(1, "\n", 1);
        i++;
    }
}
