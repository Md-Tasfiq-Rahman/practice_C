#include<stdio.h>

int main(){
    ///This will create a 2d array with 3 rows and 2 columns
    /// 1 2     --> arr[0][0] arr[0][1]
    /// 3 4     --> arr[1][0] arr[1][1]
    /// 5 6     --> arr[2][0] arr[2][1]
    int arr[3][2]={{1,2},{3,4},{5,6}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    printf("\n");
    ///The following will initialize 2d array same as previous
    ///1st 2 elements in row 0, 2nd 2 element in row 1, final 2 element in row 2
    int arr1[3][2]={1,2,3,4,5,6};
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
            printf("%d ",arr1[i][j]);
        printf("\n");
    }
    printf("\n");
    ///The following will also create the same array
    ///Number of rows can be unspecified
    ///But number of columns must be specified
    int arr2[][3]={1,2,3,4,5,6};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            printf("%d ",arr2[i][j]);
        printf("\n");
    }
    printf("\n");

    int m,n;
    m=3;n=2;
    int arr3[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr3[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
            printf("%d ",arr3[i][j]);
        printf("\n");
    }

    return 0;
}
