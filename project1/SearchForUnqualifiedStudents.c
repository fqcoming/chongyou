
/** 搜索有一门及以上成绩不合格的学生并打印出来 */

#include <stdio.h>

#define M 4
#define N 3

void search(double (*p)[N]){
    for(int j=0; j<M; j++){
        int i;
        int flag = 0;
        for(i=0; i<N; i++)
            if(*((*p+j)+i)<60){
                flag = 1;
                break;
            }
        if(flag==1){
            printf("No.%d不及格，其各门成绩：\n",j+1);
            for(i=0; i<N; i++)
                printf("%5.1f",*((*p+j)+i));
            printf("\n");
        }
    }
    return;
}

int main(){
    void search(double (*p)[N]);
    double stu[M][N];
    printf("请输入%d个学生的%d门成绩：\n", M, N);
    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++)
            scanf("%lf", &stu[i][j]);   // %lf按double型数据类型输入
    
    search(stu);
    return 0;
}



