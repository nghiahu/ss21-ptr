#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    char *ptr1, *ptr2;
    int len1, len2;
    printf("Nhap chuoi a: ");
    gets(a);
    printf("Nhap chuoi b: ");
    gets(b);
    
    ptr1 = a;
    ptr2 = b;
    len1 = 0;
    while (*ptr1 != '\0') {
        len1++;
        ptr1++;
    }
 
    len2 = 0;
    while (*ptr2 != '\0') {
        len2++;
        ptr2++;
    }
    printf("Do dai cua chuoi a la: %d\n", len1);
    printf("Do dai cua chuoi b la: %d\n", len2);
    if (len1 > len2) {
        printf("Chuoi a co do dai lon hon chuoi b\n");
    } else if (len1 < len2) {
        printf("Chuoi b co do dai lon hon chuoi a\n");
    } else {
        printf("Hai chuoi co do dai bang nhau\n");
    }
    return 0;
}
