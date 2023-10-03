#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

//binomial coefficient (n k) = n!/(k!*(n-k)!)
double binom (int n, int k);

// product of n*(n-1)*...*k
double fact (int n, int k);

int main()
{
    int i;
    int j;
    
    int n=10; // rows' number by default
    
    int lastStrLenght=0;
    int spcNum=0;
    printf("Enter a number of rows: "); //10 rows by default
    //scanf("%d", &n);
    std::cin >> n;
    printf("%d\nPascal's Triangle for %d rows\n", n, n);
    char prstr[100];
    *prstr = '\0';

    //dynamic allocation memory for rows
    double ** ptri;
    ptri = (double**) malloc(n*sizeof(double));
    for (i=0; i<n; i++) {
        ptri[i] = (double*) malloc((i+1)*sizeof(double));
    }

    //calculating of binomial coefficients and adding it to dynamic array
    for (i=0; i<n; i++) {
        for(j=0; j<i+1; j++) {
            ptri[i][j] = binom(i, j);
        }
    }
    
    //calculating of max row lenght
    for (j=0; j<n; j++) {
        sprintf (prstr, "%.0f ", ptri[n-1][j]);
        lastStrLenght += strlen(prstr);
    }
    char str[lastStrLenght];
    *str='\0';

    //printing of dynamic array
    for (i=0; i<n; i++) {
        for (j=0; j<i+1; j++) {
            sprintf (prstr, "%.0f ", ptri[i][j]);
            strcat (str, prstr);
        }

        //printing spaces to align current row about last row
        spcNum = (lastStrLenght - strlen(str))/2;
        for (j=1; j<=spcNum; j++) {
            printf (" ");
        } //

        printf ("%s\n", str); //printing of current row
        *str='\0';
    }
    
    //free the array memory
    for (i=0; i<n; i++){
        free(ptri[i]);
    }
    free(ptri); //
    
   return 0;
}

//binomial coefficient (n k) = n!/(k!*(n-k)!)
double binom (int n, int k)
{
    double res = 1;
    if (k>(n-k)) {                       // which bigger k or n-k
        res = fact(n, k+1)/fact(n-k, 1); // n! / k!*(n-k)! = n*(n-1)*...*(k+1)/(n-k)*(n-k-1)*...*1
    }
    else {
        res = fact(n, n-k+1)/fact(k, 1); // n! / k!*(n-k)! = n*(n-1)*...*(n-k+1)/k*(k-1)*...*1
    }
    return res;
}

// product of n*(n-1)*...*k
double fact (int n, int k)
{
    int i;
    double res = 1;
    for (i=k; i<=n; i++) {
        res*=i;
    }
    return res;
}
