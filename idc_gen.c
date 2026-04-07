#include <stdio.h>
#include <string.h>

// space length for empty row
#define DEFAULT_LENGTH 28

int get_space_length(char length[])
{
    // Remaining length
    int remain_length;
    remain_length = DEFAULT_LENGTH-strlen(length);
    return remain_length;
}

// main function
int main()
{
    char full_name[100];
    char nickname[100];
    char date[10];
    char month[10];
    char year[10];
    char country[100];
    char city[100];
    char hobby[100];
    char line[] = "____________________________________________________________________";
    char big_line[] = "+=========================+";
    char space = ' ';
    char spc_multiply[100];

    printf("%s\n|________WELCOME_TO_______|\n", big_line);
	printf("| Ascii ID Card Generator |\n%s\n\n", big_line);

    printf("  ______________\n");	
	printf(" /o\\ Quick tips!\\______________________________________________________________________\n");
	printf("/_|_\\Use capital letters at the beginning of the input, so that the results are neater.|\n");

    printf("\n1. Enter your full name > ");
    fgets(full_name, 100, stdin);
    full_name[strcspn(full_name, "\n")] = '\0';

    printf("2. Enter your Nickname > ");
    fgets(nickname, 100, stdin);
    nickname[strcspn(nickname, "\n")] = '\0';

    printf("3. Enter your date of birth > ");
    fgets(date, 10, stdin);
    date[strcspn(date, "\n")] = '\0';

    printf("4. Enter your month of birth > ");
    fgets(month, 10, stdin);
    month[strcspn(month, "\n")] = '\0';

    printf("5. Enter your year of birth > ");
    fgets(year, 10, stdin);
    year[strcspn(year, "\n")] = '\0';

    printf("6. Enter your country > ");
    fgets(country, 100, stdin);
    country[strcspn(country, "\n")] = '\0';

    printf("7. Enter your city > ");
    fgets(city, 100, stdin);
    city[strcspn(city, "\n")] = '\0';

    printf("8. Enter your hobby > ");
    fgets(hobby, 100, stdin);
    hobby[strcspn(hobby, "\n")] = '\0';

    printf("\n\nGenerate your id card...\n\n");

    printf(" %s\n", line);
    printf("|       _______       |                                              |\n");
    printf("|    ,###########,    |");
    printf("===(ID CARD)==================================|\n");
    printf("|  ,#*''\\\\\\\\\\\\\\\\'*#,  |                                              |\n");

    // full name line
    printf("|  ###    '\\\\\\\\\\\\\\##  |");
    for ( int u = 0; u < get_space_length(full_name); ++u )
        spc_multiply[u] = space;
    spc_multiply[get_space_length(full_name)] = '\0';
    printf("  Full Name     : %s%s|\n", full_name, spc_multiply);

    // nick name line
    printf("|  ##'        ''\\\\##  |");
    for ( int u = 0; u < get_space_length(nickname); ++u )
        spc_multiply[u] = space;
    spc_multiply[get_space_length(nickname)] = '\0';
    printf("  Nickname      : %s%s|\n", nickname, spc_multiply);

    // date of birth line
    printf("| |#: /~~~' '~~~\\ :#| |");
    strcat(date, month);
    strcat(date, year);
    for ( int u = 0; u < get_space_length(date); ++u )
        spc_multiply[u] = space;
    spc_multiply[get_space_length(date)] = '\0';
    printf("  Date of birth : %s/%s/%s%s|\n", date, month, year, spc_multiply);

    // country line
    printf("| :(|  <o> | <o>  |): |");
    for ( int u = 0; u < get_space_length(country); ++u )
        spc_multiply[u] = space;
    spc_multiply[get_space_length(country)] = '\0';
    printf("  Country       : %s%s|\n", country, spc_multiply);

    // city line
    printf("| ;#|     / \\     |#; |");
    for ( int u = 0; u < get_space_length(city); ++u )
        spc_multiply[u] = space;
    spc_multiply[get_space_length(city)] = '\0';
    printf("  City          : %s%s|\n", city, spc_multiply);

    // hobby line
    printf("|  #|    (. .)    |#  |");
    for ( int u = 0; u < get_space_length(hobby); ++u )
        spc_multiply[u] = space;
    spc_multiply[get_space_length(hobby)] = '\0';
    printf("  Hobby         : %s%s|\n", hobby, spc_multiply);


    printf("|   \\\\   _____   //   |                                              |\n");
    printf("|    '\\   ---   /'    |                                              |\n");
    printf("|     |'-.___.-'|     |                                              |\n");
    printf("| _,--\\.       ./--._ |                                              |\n");
    printf("|      '._____.'      |                                              |\n");
    printf("|_____________________|                                              |\n");
    printf("|%s|\n\n", line);
}