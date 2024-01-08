// // HACKERRANK // //

// HACKERRANK HELLO WORLD
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf("%s",s);
      
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

// HACKERRANK CHARACTER PLAY
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
        
    char ch,s[100],sen[100];
    scanf("%c\n",&ch);
    scanf("%[^\n]%*c", &s);
    scanf("%[^\n]%*c", &sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);   
    return 0;
}

// HACKERRANK SUM DIFFERENCE
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,e,f;
    float c,d,g,h;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    e = a+b;
    f = a-b;
    g = c+d;
    h = c-d;
    printf("%d %d\n",e,f);
    printf("%.1f %.1f",g,h);

    
    return 0;
}

// HACKERRANK FUNCTION IN C
#include <stdio.h>

int max_of_four (int a,int b,int c,int d){
    int f1,f2,ans;
    if (a>b){
        f1 = a;
    }
    else {
        f1 = b;
    }
    if (c>d){
        f2 = c;
    }
    else {
        f2 = d;
    }
    if (f1>f2){
        ans = f1;
    }
    else {
        ans = f2;
    }
    return ans;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

// HACKERRANK POINTERS IN C
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    if (b>a){
    printf("%d\n%d", a+b, b-a);
    }
    else if (a>b){
        printf("%d\n%d", a+b, a-b);
    }
    return 0;
}

// HACKERRANK CONDITIONALS
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    if (n == 1){
        printf("one");
    }
    else if (n == 2){
        printf("two");
    }
    else if (n == 3){
    printf("three");
}
    else if (n == 4){
    printf("four");
}
    else if (n == 5){
    printf("five");
}
    else if (n == 6){
    printf("six");
}
    else if (n == 7){
    printf("seven");
}
    else if (n == 8){
    printf("eight");
}
    else if (n == 9){
    printf("nine");
}
    else if (n > 9){
    printf("Greater than 9");
}

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

// HACKERRANK FOR LOOP IN C
#include<stdio.h>
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
for (int i =a; i <=b; ++i){
        if (i <= 9 && a<b){
            if (i == 1){
                printf("one\n");
            }
            else if (i == 2){
                printf("two\n");
            }
            else if (i == 3){
                printf("three\n");
            }
            else if (i == 4){
                printf("four\n");
            }
            else if (i == 5){
                printf("five\n");
            }
            else if (i == 6){
                printf("six\n");
            }
            else if (i == 7){
                printf("seven\n");
            }
            else if (i == 8){
                printf("eight\n");
            }
            else if (i == 9){
                printf("nine\n");
            }
        }

        else  {
            if ( i % 2 ==0){
                printf("even\n");
            }
            else if (i%2 != 0){
                printf("odd\n");
            }
        }
    }
    return 0;
}

// HACKERRANK SUM OF FIVE DIGIT
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,rem,sum = 0;
    scanf("%d",&n);
    for (i=0;i<5;++i){
        rem = n % 10;
        sum = sum + rem;
        n = n/10;
    }
    printf("%d",sum);
        return(0);
}

// // HACKERRANK SUM OF 1D ARRAY
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; ++i){
        scanf("%d",&arr[i]);
    }    
    for (int k =0;k<n;++k){
        sum = sum+arr[k];
    }
    printf("%d",sum);
    return 0;
}

// // // HACKERRANK ARRAY REVERSAL

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for(i = num-1; i >= 0; i--)
        printf("%d ", *(arr + i));
    return 0;
}

// // // HACKERRANK PRINTING TOKENS

// // // HACKERRANK DIAGONAL DIFFERENCE
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

// // // // HACKERRANK PRINTING TOKENS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (int i = 0; i < strlen(s); ++i){
        if (s[i] == ' '){
            printf("\n");
        }
        else {
            printf("%c",s[i]);
        }
    }
    return 0;
}

// // // // HACKERRANK FIND Nth TERM
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int find_nth_term(int n, int a, int b, int c);



int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

int find_nth_term(int n, int a, int b, int c) {
    if (n == 1){
        return (a);
    }
    else if (n == 2){
        return (b);
    }
    else if (n == 3){
        return (c);
    }
    else {
        return find_nth_term(n-1,b,c,a+b+c);
    }
}

// // // // HACKERRANK STUDENTS MARKS SUM
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    int sumb = 0,sumg = 0,i,j;
    if (gender == 'b'){
        for (i = 0; i < number_of_students; ++i){
            if (i % 2 == 0){
                sumb = sumb + marks[i];
            }
    }
    }
    if (gender == 'g'){
        for (j = 1; j < number_of_students; ++j){
            if (j % 2 != 0){
                sumg = sumg + marks[j] ;
            }
    }
    }
    if (gender == 'b'){
        return sumb;
    }
    if (gender == 'g'){
        return sumg;
    }
    return 0;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}

// // // HACKERRANK DIGIT FREQUENCY IN STRINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char num[1001],j;
    scanf("%s",&num);
    for (int i = 48; i <= 57; ++i){
        int count = 0;
        for (j = 0; j < 200; ++j){
            if (i == (int)num[j]){
                count++;
            }
        }
    printf("%d ",count);
    }
    return 0;
}

// // Boxes through tunnel
#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// Function Declaration


int main() {
    printf("%d",(10& 11));
    return(0);
}

int convbin (int n){
    int i,j,k,l;
    
}

#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
 int length,width,height;
};

typedef struct box box;

int get_volume(box b) {
    return (b.height * b.width * b.length);
}

int is_lower_than_max_height(box b) {
    if (b.height < 41){
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
