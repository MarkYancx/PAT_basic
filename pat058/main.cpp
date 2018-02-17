#include <iostream>
#include<stdio.h>
using namespace std;

struct problem{
    int score;
    int sum;
    int anw;
    string right;
};
problem p[105];
int main()
{
    int N, M;
    cin >> N >> M;

    for(int i = 0; i < M; i ++){
        scanf("%d %d %d", &p[i].score, &p[i].sum, &p[i].anw);
        char s;
        for(int j = 0; j < p[i].anw; j ++){
            cin >> s;
            p[i].right += s;
        }
    }

    int wrong[M] = {0};
    for(int i = 0; i < N; i ++){
        int sco = 0;
        scanf("\n");
        for(int j = 0; j < M; j ++){
            if(j != 0) scanf(" ");
            string str;
            int k;
            char s;
            scanf("(%d", &k);
            for(int q = 0; q < k; q ++){
                scanf(" %c", &s);
                str += s;
            }
            scanf(")");
            if(str == p[j].right) sco += p[j].score;
            else wrong[j] ++;
        }
        printf("%d\n", sco);
    }

    int max = -1;
    for(int i = 0; i < M; i ++){
        if(max < wrong[i]) max = wrong[i];
    }
    if(max == 0) cout << "Too simple";
    else{
        cout << max;
        for(int i = 0; i < M; i ++){
            if(max == wrong[i]) cout << " " << i+1;
        }
    }
    return 0;
}
