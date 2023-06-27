// Hello world
#include <stdio.h>
int main() {
    printf("HELLO WORLD");
        return(0);
}

// Star Patterns
// 1
#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter number here ");
    scanf ("%d",&n);
    for (i = 1; i <= n; ++i){
        for (j = 1; j <= i; ++j){
            printf("*");
        }
        printf("\n");
    }
        return(0);
}

// 2
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
    int n,i,j,k,m,a,b;
    printf("Enter Number Of Rows \n");
    scanf("%d",&n);
    for (i = 1; i <= n; ++i){
        for (j = 0; j <= n-i; ++j){
            printf(" ");
        }
        for (k = 1; k <= (2*i)-1; ++k){
            printf("*");
        }
        printf("\n");
    }
    for (m = (n-1) ; m >= 1 ; --m){
        for (a = 0; a <= (n-m); ++a){
            printf(" ");
        }
        for (b = ((2*m)-1); b >= 1; --b){
            printf("*");
        }
        printf("\n");
    }
        return(0);
}

// 3
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
    int n,i,j,m,l,z,p,k;
    printf("Leaves of tree --> ");
    scanf("%d",&n);
    printf("Stem of tree --> ");
    scanf ("%d",&m);
    for (i = 1; i <= n; ++i){
        for (j = 0; j <= n-i; ++j){
            printf(" ");
        }
        for (k = 1; k <= (2*i)-1; ++k){
            printf("*");
        }
        printf("\n");
    }

    for (l = 1; l <= m; ++l){
        for (z = 1; z <= (n-1); z = z + 1){
            printf(" ");
        }
        printf("|| \n");
    }
        return(0);
}

// 4
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
    int n,j,k,i;
    printf("Enter Rows Here ");
    scanf("%d",&n);
    for (i = 1; i <= n; ++i){
        for (j = 0; j < (n-i); ++j){
            printf(" ");
        }
        for (k = 1; k <= i; ++k){
            printf("*");
        }
        printf("\n");
    }
        return(0);
}
// 5 star pattern with function
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void pyramid(int n);

int main() {
    int a;
    printf("Enter number of rows here :- ");
    scanf("%d",&a);
    pyramid(a);
        return(0);
}
void pyramid (int n){
    int i,j,k;
    for (i = 1; i <= n; ++i){
        for (j = 0; j <= (n-i); ++j){
            printf(" ");
        }
        for (k = 1; k <= ((2*i)-1); ++k){
            printf("*");
        }
        printf("\n");
    }
}

// 6
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n,i,j,k;
    printf("Enter number of rows here : \n");
    scanf("%d",&n);
    for (i = 1; i <= n; ++i){
        for (j = 0; j < (n-i+1)/2; ++j){
            printf(" ");
        }
        for (k = 1; k <= i; ++k){
            printf("*");
        }
        printf("\n");
    }
        return(0);
}

// Prime Number
#include <stdio.h>
int main() {
    int n,i,j,flag = 0;
    printf("Enter number here ");
    scanf ("%d",&n);
    for (i = 1; i < n; ++i){
        for (j = 2; j < n; ++j){
            if (n%j == 0){
                flag = 1;
            }
        }
    }
    if (flag == 1){
        printf("%d is not a prime number",n);
    }
    else {
        printf("%d is a prime number",n);
    }
        return(0);
}

// Prime Again
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, c = 0, d;
    printf("Number ");
    scanf("%d", &a);
    for (d = 2; d <= (a / 2); ++d)
    {
        if (a % d == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 1)
    {
        printf("Not Prime\n");
    }
    else
    {
        printf("Prime\n");
    }
    return (0);
}

// Prime Number again
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n,prime = 1,i;
    printf("Enter number here :- ");
    scanf("%d",&n);
    for (i = 2; i < n; ++i){
        if (n % i == 0){
            prime = 0;
            break;
        }
    }
    if (prime == 1){
        printf("%d is a prime number.",n);
    }
    else if (prime == 0  && i != 2){
        printf("%d is not a prime number.",n);
    }
        return(0);
}

// perfect number
#include <stdio.h>
int main() {
    int n,i,sum = 0;
    printf("Enter number here ");
    scanf ("%d",&n);
    for (i = 1; i < n; ++i){
        if (n%i == 0){
            sum = sum + i;
        }
    }
    if (sum == n){
        printf("%d is a perfect number",n);
    }
    else {
        printf("%d is not a perfect number",n);
    }
        return(0);
}

// Reverse a number
#include <stdio.h>
#include <math.h>
int main() {
    int n,i,temp,j,rev = 0,rem;
    printf("Enter number here ");
    scanf("%d",&n);
    temp = n;
    j = log10(n)+1;
    for (i = 1; i<= j; ++i) {
        rem = temp % 10;
        rev = 10*rev + rem;
        temp = temp / 10;
    }
    printf("%d is the reverse of %d",rev,n);
        return(0);
}

// palindrome
#include <stdio.h>
#include <math.h>
int main() {
    int n,i,rev = 0,rem,j,temp;
    printf("Enter number here ");
    scanf ("%d",&n);
    j = log10(n)+1;
    temp = n;
    for (i = 1; i <= j; ++i){
        rem = temp % 10;
        rev = 10*rev + rem;
        temp /= 10;
    }
    if (rev == n){
        printf("%d is a palindrome number",n);
    }
    else {
        printf("%d is not a palindrome number",n);
    }
        return(0);
}

// Armstrong Number
#include <stdio.h>
#include<math.h>
int main() {
    int n,sum = 0,j,temp,i;
    printf("Enter number here ");
    scanf ("%d",&n);
    temp = n;
    j = log10(n)+1;
    for (i = 1; i <= j; ++i){
        int rem = temp % 10;
        sum = sum + pow (rem,j);
        temp = temp / 10;
    }
    if (sum == n){
        printf("The number is Armstrong number %d",n);
    }
    else {
        printf("The number is not Armstrong number %d",n);
    }
        return(0);
}

// Binary to deciaml Number
#include <stdio.h>
#include <math.h>
int main() {
    int pos = 0,dec = 0,n,i,j,temp, dig;
    printf("Enter the binary number ");
    scanf ("%d",&n);
    j = log10(n)+1;
    temp = n;
    for (i = 1; i <= j; ++i){
        dig = temp % 10;
        dec = dec + dig * pow(2,pos);
        temp = temp / 10;
        pos = pos + 1;
    }

    printf("%d is the decimal of %d",dec,n);
        return(0);
}

// LCM
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main() {
    int m,n,big;
    printf("Enter two numbers ");
    scanf ("%d %d",&n,&m);
    if (n > m){
        big = n;
    }
    else {
        big = m;
    }
    while (true) {
        if ((big % n == 0) && (big % m == 0 )){
            printf("LCM of %d and %d is %d",n,m,big);
            break;
        }
        ++big;
    }
       return(0);
}

// Krishnamut=rthy Number
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int fact(int n);

int main() {
    int n,dig,sum = 0,i,j,temp;
    printf("Enter number here : ");
    scanf("%d",&n);
    temp = n;
    j = log10(n)+1;
    for (i = 1; i <= j; ++i){
        dig = temp % 10;
        sum = fact(dig) + sum;
        temp = temp / 10;
    }
    if (sum == n){
        printf("%d is a Krishnamurthy number",n);
    }
    else {
        printf("%d is not a krishnamurthy number",n);
    }
        return(0);
}

int fact (int n) {
    int i,mul=1,res;
    for (i = n; i >= 1; --i){
        mul = mul * i;
    }
    return mul;
}

// SUBHA NABA BORSO Star pattern
#include <stdio.h>
int height = 5;
int width = 9;
int abs(int d)
{
    return d < 0 ? -1 * d : d;
}

int main()

{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2
                || i == height - 1))
                printf("*");
            else if (i < height / 2
                    && j == 0)
                printf("*");
            else if (i > height / 2
                    && j == height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
        printf("\n");
    int a, b;
    for (a = 0; a < height; a++) {
        if (a != 0 && a != height - 1)
            printf("*");
        else
            printf(" ");
        for (b = 0; b < height; b++) {
            if (((a == height - 1)
                && b >= 0
                && b < height - 1))
                printf("*");
            else if (b == height - 1 && a != 0
                    && a != height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
        printf("\n");

int c, d, half = (height / 2);
    for (c = 0; c< height; c++) {
        printf("*");
        for (d = 0; d < width; d++) {
            if ((c == 0 || c == height - 1 || c== half)
                && d < (width - 2))
                printf("*");
            else if (d == (width - 2)
                    && !(c == 0 || c == height - 1
                        || c == half))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    int q,w;
    for (q = 0; q < height; q++) {
        printf("*");
        for (w = 0; w < height; w++) {
            if ((w == height - 1)
                || (q == height / 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
        printf("\n");

    int n = width / 2, e, r;
    for (e = 0; e< height; e++) {
        for (r = 0; r <= width; r++) {
            if (r == n || r == (width - n)
                || (e == height / 2 && r > n
                    && r < (width - n)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        n--;
    }
    printf("\n");
    printf("\n");

    int t, y, counter = 0;
    for (t = 0; t < height; t++) {
        printf("*");
        for (y = 0; y <= height; y++) {
            if (y == height)
                printf("*");
            else if (y == counter)
                printf("*");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
    printf("\n");
    int u = width / 2, p, o;
    for (p = 0; p< height; p++) {
        for (o = 0; o <= width; o++) {
            if (o == u || o == (width - u)
                || (p == height / 2 && o > u
                    && o < (width - u)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        u--;
    }
    printf("\n");

    int g, h, halfh = (height / 2);
    for (g = 0; g < height; g++) {
        printf("*");
        for (h = 0; h < width; h++) {
            if ((g == 0 || g == height - 1 || g == halfh)
                && h < (width - 2))
                printf("*");
            else if (h == (width - 2)
                    && !(g == 0 || g == height - 1
                        || g == halfh))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    int v = width / 2, s, f;
    for (s = 0; s < height; s++) {
        for (f = 0; f <= width; f++) {
            if (f == v || f == (width - v)
                || (s == height / 2 && d > v
                    && f < (width - v)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        v--;
    }
printf("\n");
printf("\n");

  int R, U, halft = (height / 2);
    for (R = 0; R < height; R++) {
        printf("*");
        for (U = 0; U < width; U++) {
            if ((R == 0 || R == height - 1 || R == halft)
                && U < (width - 2))
                printf("*");
            else if (U == (width - 2)
                    && !(R == 0 || R == height - 1
                        || R == halft))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
printf("\n");
    int iq, jq, spaceq = (height / 3);
    int width = height / 2 + height / 5 + spaceq + spaceq;
    for (iq = 0; iq < height; iq++) {
        for (jq = 0; jq <= width; jq++) {
            if (jq == width - abs(spaceq)
                || jq == abs(spaceq))
                printf("*");
            else if ((iq == 0
                    || iq == height - 1)
                    && jq > abs(spaceq)
                    && jq < width - abs(spaceq))
                printf("*");
            else
                printf(" ");
        }
        if (spaceq != 0
            && iq < height / 2) {
            spaceq--;
        }
        else if (iq >= (height / 2 + height / 5))
            spaceq--;
        printf("\n");
    }
printf("\n");
    int ij, jj, halfj = (height / 2);
    for (ij = 0; ij < height; ij++) {
        printf("*");
        for (jj = 0; jj < width; jj++) {
            if ((ij == 0 || ij == halfj)
                && jj < (width - 2))
                printf("*");
            else if (jj == (width - 2)
                    && !(ij == 0 || ij == halfj))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
printf("\n");
    int ii, ji;
    for (ii = 0; ii < height; ii++) {
        for (ji = 0; ji < height; ji++) {
            if ((ii == 0 || ii == height / 2
                || ii == height - 1))
                printf("*");
            else if (ii < height / 2
                    && ji == 0)
                printf("*");
            else if (ii > height / 2
                    && ji == height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
printf("\n");
    int iqw, jqw, spaceqw = (height / 3);
    int widthw = height / 2 + height / 5 + spaceqw + spaceqw;
    for (iqw = 0; iqw < height; iqw++) {
        for (jqw = 0; jqw <= widthw; jqw++) {
            if (jqw == widthw - abs(spaceqw)
                || jqw == abs(spaceqw))
                printf("*");
            else if ((iqw == 0
                    || iqw == height - 1)
                    && jqw > abs(spaceqw)
                    && jqw < widthw - abs(spaceqw))
                printf("*");
            else
                printf(" ");
        }
        if (spaceqw != 0
            && iqw < height / 2) {
            spaceqw--;
        }
        else if (iqw >= (height / 2 + height / 5))
            spaceqw--;
        printf("\n");
    }
}

// GCD USING RECURSION
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int gcdans(int a, int b);
int main() {
    int n, k;
    printf("Enter Numbers : \n");
    scanf("%d %d", &n, &k);
    printf("GCD of %d and %d is %d.", n, k, gcdans(n, k));
    return 0;
}

int gcdans(int a, int b) {
    if (b != 0)
        return gcdans(b, (a%b));
    else
        return a;
}

// // // // Linear Search
#include <stdio.h>
int linsearch (int array[], int size, int element);
int main() {
int arr[] = {12,23,45,56,67,78,89,34,89};
int size = sizeof(arr)/sizeof(int);
int element = 90;
int index = linsearch (arr,size,element);
if (index == -1){
    printf("%d element not found in array,",element);
}
else {
    printf("%d element was found on index %d in array",element,index);
}
    return 0;
}

// function of linear search
int linsearch (int array[], int size, int element){
    int i;
    for (i = 0; i < size; ++i){
        if (array[i] == element){
            return i;
        }
    }
    return -1;
}

// Bubble Sort with binary search
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int arr[],int size);
//for sorted arrays only
int BinarySearch(int arr[],int size, int element);

int main() {
    int arr[] = {21,12,7,13,8,34,56,78,90,9,98,87,76,65};
    int size = sizeof(arr)/sizeof(int);
    BubbleSort(arr,size);
    for (int k = 0; k < size ; ++k){
        printf(" %d ",arr[k]);
    }
    int element = 21;
    int index = BinarySearch(arr,size,element);
    printf("\n\nElement %d was found on %d index",element,index);
        return(0);
}

void BubbleSort(int arr[],int size){
    int i,j,k,temp;
    for (i = 0; i < size-1 ; ++i){
        for (j = 0; j < size-1 ; ++j){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int BinarySearch(int arr[],int size, int element){
    int mid,low = 0,high;
    while (low <= high){
    mid = (low + high)/2;
        if (arr[mid] == element){
            return mid;
        }
        if (arr[mid] > element){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}
    
// // Insertion Sort
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void InsetionSort(int arr[], int size);

int main() {
    int array[] = {23,12,45,67,88,5,76,98,34};
    int length = sizeof(array)/sizeof(int);
    InsetionSort(array,length);
    for (int k = 0; k < length; ++k){
        printf(" %d ",array[k]);
    }
        return(0);
}

void InsetionSort(int arr[], int size){
    int i, j, temp;
    for (i = 1; i < size; ++i){
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = temp; 
    }
}

// Selection Sort
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void SelectionSort(int arr[], int size);

int main() {
    int array[] = {21,34,56,32,67,98,345};
    int len = sizeof(array)/sizeof(int);
    SelectionSort(array,len);
    for (int k = 0; k < len; ++k){
        printf(" %d ",array[k]);
    }
        return(0);
}

void SelectionSort(int arr[], int size){
    int i,j,temp,min;
    for (i = 0; i < (size-1); ++i){
        min = i;
        for (j = i+1; j < size; ++j){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        if (min != i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

// String Comparision
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void StringCompare(char str1[100], char str2[100]);

int main() {
    char a[100],b[100];
    printf("Enter first string here - ");
    gets(a);
    printf("Enter second string here - ");
    gets(b);
    printf("Two Strings are \n");
    printf("%s\n",a);
    printf("%s\n",b);
    printf("Comparing ...\n ");
    StringCompare(a,b);
        return(0);
}

void StringCompare(char str1[100], char str2[100]){
    if (strcmp(str1,str2)==0){
        printf("They are equal");
    }
    else {
        printf("They are not equal");
    }
}

// // Matrix Multiplications
#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int r,c,i,j,k,A[200][200],B[200][200],R[200][200];
    printf("Enter Number Of Rows : \n");
    scanf("%d",&r);
    printf("Enter Number Of Coloumns : \n");
    scanf("%d",&c);
    printf("'A' MATRIX ELEMENTS \n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){
            printf("Enter Element A%d%d - ",(i+1),(j+1));
            scanf("%d",&A[i][j]);
        }
    }
    printf("'B' MATRIX ELEMENTS \n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){
            printf("Enter Element A%d%d - ",(i+1),(j+1));
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n MULTIPLICATION \n\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){
            R[200][200] = 0;
            for (k = 0; k < c; ++k){
                R[i][j] += A[i][j]*B[i][j];
            }
        }
    }
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){
            printf("%d\t",R[i][j]);
        }
        if (j-c == 0){
            printf("\n\n");
        }
    }
        return(0);
}

// // Transpose Of Matrix
#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int r,c,i,j,k,A[200][200],R[200][200];
    printf("Enter Number Of Rows : \n");
    scanf("%d",&r);
    printf("Enter Number Of Coloumns : \n");
    scanf("%d",&c);
    printf("'A' MATRIX ELEMENTS \n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){
            printf("Enter Element A%d%d - ",(i+1),(j+1));
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nMATRIX\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){
            printf("%d\t",A[i][j]);
        if (j - c == -1){
            printf("\n\n");
            }
        }
    }
    printf("\n TRANSPOSE \n\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){
             R[j][i] = A[i][j];
        }
    }
    for (int i = 0; i < c; ++i){
        for (int j = 0; j < r; ++j) {
        printf("%d  ", R[i][j]);
        if (j == r - 1){
            printf("\n");
            }
        }
    }
        return(0);
}


// // ADDITION OF MATRIX
#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int r,c,i,j,k,A[200][200],B[200][200],R[200][200];
    printf("Enter Number Of Rows : \n");
    scanf("%d",&r);
    printf("Enter Number Of Coloumns : \n");
    scanf("%d",&c);
    printf("'A' MATRIX ELEMENTS \n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){
            printf("Enter Element A%d%d - ",(i+1),(j+1));
            scanf("%d",&A[i][j]);
        }
    }
    printf("'B' MATRIX ELEMENTS \n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){
            printf("Enter Element A%d%d - ",(i+1),(j+1));
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n ADDITION \n\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j){
             R[j][i] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < c; ++i){
        for (int j = 0; j < r; ++j) {
        printf("%d  ", R[i][j]);
        if (j == c - 1){
            printf("\n");
            }
        }
    }
        return(0);
}


// // 1D ARRAY REVERSE
#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i,n;
    printf("Enter Length Of Array : - \n"); // if length not given have 'len = sizeof(arr)/sizeof(int)'
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; ++i){
        printf("Element %d - ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("\nNormal array - \n");
    for (i = 0; i < n; ++i){
        printf("%d\t",arr[i]);
    }
    printf("\nReversed Array is - \n");
    for (i = (n-1); i >= 0; --i){
        printf("%d\t",arr[i]);
    }
        return(0);
}

// // // // Find Sum Of Even Integers From 1D Array
#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i,n,sum = 0;
    printf("Enter Length Of Array : - \n"); // if length not given have 'len = sizeof(arr)/sizeof(int)'
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; ++i){
        printf("Element %d - ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("\nNormal array - \n");
    for (i = 0; i < n; ++i){
        printf("%d\t",arr[i]);
    }
    for (i = 0; i < n; ++i){
        if (arr[i] % 2 == 0){
            sum = sum + arr[i];
        }
    }
    printf("\nRequired Sum Of Even Numbers From An 1D Arrays Is %d",sum);
        return(0);
}

// // // // Find Sum Of Odd Integers From 1D Array
#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i,n,sum = 0;
    printf("Enter Length Of Array : - \n"); // if length not given have 'len = sizeof(arr)/sizeof(int)'
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; ++i){
        printf("Element %d - ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("\nNormal array - \n");
    for (i = 0; i < n; ++i){
        printf("%d\t",arr[i]);
    }
    for (i = 0; i < n; ++i){
        if (arr[i] % 2 != 0){
            sum = sum + arr[i];
        }
    }
    printf("\nRequired Sum Of Odd Numbers From An 1D Arrays Is %d",sum);
        return(0);
}

// // Point on straight line or not
#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x1,x2,x3,y1,y2,y3;
    float m1,m2,m3;
    printf("Enter Your x1 y1 - ");
    scanf("%d %d",&x1,&y1);
    printf("Enter Your x2 y2 - ");
    scanf("%d %d",&x2,&y2);
    printf("Enter Your x1 y1 - ");
    scanf("%d %d",&x3,&y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if (m1 == m2){
        printf("Lies on Straight line");
    }
    else {
        printf("Not on straight line");
    }
        return(0);
}

// // // ACKERMAN WITH RECURSION
#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// Function Declaration
int ack(int m, int n);

int main() {
    int x,y;
    double result;
    printf("Enter X and Y here - \n");
    scanf("%d %d",&x,&y);
    result = ack(x,y);
    printf("Result of Ackerman(%d,%d) is %d",x,y,result);
        return(0);
}

int ack(int m, int n){
    if (m == 0){
        return (n+1);
    }
    else if (m > 0 && n == 0){
        return ack((m-1),1);
    }
    else if (m > 0 && n > 0){
        return ack((m-1),ack(m,n-1));
    }
}

// // // HACKERRANK DIAGONAL DIFFERENCE (EASY BUT WAS IN HACKERRANK SO ... )
#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// Function Declaration
int diagonalDifference(int arr_rows, int arr_columns,int arr[200][200]);

int main() {
    int rac,i,j,arr[200][200];
    printf("Enter Number of rows and coloumns ");
    scanf("%d",&rac);
    for (i = 0; i < rac; ++i){
        for (j = 0; j < rac; ++j){
            printf("Element %d%d ",(i+1),(j+1));
            scanf("%d",&arr[i][j]);
        }
    }
    int x = diagonalDifference(rac , rac, arr);
    printf("%d",x);
    return(0);
}

int diagonalDifference(int arr_rows, int arr_columns,int arr[200][200]) {
    int i,j,k,sum = 0,sumr = 0;
    for (i = 0; i < arr_rows; ++i){
        for (j = 0; j <arr_columns; ++j){
            if (i == j){
                sum = sum + arr[i][j];
            }
        }
    }
    for (int i1 = (arr_rows-1); i1 >= 0; --i1){
        for (int j1 = 0; j1 < arr_columns; ++j1){
            if (i1 + j1 == (arr_columns-1)){
                sumr = sumr + arr[i1][j1];
            }
        }
    }
    int x = abs(sumr-sum);
    return (x);
}

// // // // ARRAY PRINT USING POINTER
#include <stdio.h>

int main()
{
    int n;
    printf("Number of elements : ");
    scanf("%d",&n);
	int arr[n] ;
    for (int i = 0; i < n; ++i){
        printf("Element %d ",i+1);
        scanf("%d",&arr[i]);
    }

	int *pntr = arr;

	for (int i = 0; i < n; i++)
	{
		printf("%d  ", *(pntr + i));
	}
	printf("\n");
    return 0;
}

// // Count Number of odd digits in an array with function
#include <stdio.h>
int oddCount(int arr[200],int m);
int main() {
    int array[200],i,j,n;
    printf("Enter array size here : - ");
    scanf("%d",&n);
    for (i = 0; i < n; ++i){
        printf("Enter element %d :- ",(i+1));
        scanf("%d",&array[i]);
    }
    printf("ARRAY - \n");
    for (j = 0; j <  n; ++j){
        printf("%d  ",array[j]);
    }
    int odd = oddCount(array,n);
    printf("\nTotal odd numbers in array are %d",odd);
    return 0;
}

int oddCount(int arr[200],int m){
    int k,l,odd = 0;
    for (k = 0; k < m; ++k){
        if (arr[k] % 2 != 0){
            odd += 1;
        }
    }
    return (odd);
}
