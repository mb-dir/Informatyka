#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int tab[200][320];

int maximum = 0, minimum = 250;
int main()
{
    fstream pixele;

    pixele.open("./dane.txt", ios::in);

    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 320; j++){
            pixele>>tab[i][j];

            if(tab[i][j] > maximum){
                maximum = tab[i][j];
            }

            if(tab[i][j] < minimum){
                minimum = tab[i][j];
            }
        }
    }
    pixele.close();

    //Zad 6.2
    int a = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 320; j++){
            if(tab[i][j] != tab[i][319-j]){
                //cout<<"Wiersz: "<<i<<" nie jest symetryczny"<<endl;
                a++;
                break;
            }
        }
    }
    //cout<<a;

    //Zad 6.3

    int b = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 320; j++){
            if(i>0 && abs(tab[i-1][j] - tab[i][j])>128) {
                b++;
            }
            //czy kontrasruje z prawej - wszedzie musza byc elsy zeby nie naliczac podwojnie
            else if(i<199 && abs(tab[i+1][j] - tab[i][j])>128) {
                b++;
            }
            //czy kontrasruje z góry
            else if(j>0 && abs(tab[i][j-1] - tab[i][j])>128) {
                b++;
            }
            //czy kontrasruje z do³u
            else if(j<319 && abs(tab[i][j+1] - tab[i][j])>128) {
                b++;
            }
        }
    }
    //cout<<b;

    //Zad 6.4
    int longestLine = 1;
    for(int i = 0;i<320;i++) {
        int longestInColumn = 1;
        int actLongestInColumn = 1;
        for(int j = 0;j<199;j++) {
            if(tab[j][i]==tab[j+1][i]) actLongestInColumn++;
            else {
                if(longestInColumn<actLongestInColumn) {
                    longestInColumn = actLongestInColumn;
                }
                actLongestInColumn = 1;
            }
        }
        if(longestLine<longestInColumn) {
            longestLine = longestInColumn;
            longestInColumn = 1;
        }
    }
    cout<<longestLine;

    return 0;
}
