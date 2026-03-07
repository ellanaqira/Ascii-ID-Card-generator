#include <stdio.h>
#include <string.h>

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
    char big_line[] = "+===================+";
    char space = ' ';

    int default_length = 28;
    int spc_length;
    char spc_multiply[100];

    printf("%s\n|______WELCOME______|\n", big_line);
	printf("| Id card generator |\n%s\n\n", big_line);

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
    printf("|  ###    '\\\\\\\\\\\\\\##  |");
    spc_length = ("%zu\n", default_length-strlen(full_name));
    for ( size_t u = 0; u < spc_length; ++u )
        spc_multiply[u] = space;
    spc_multiply[spc_length] = '\0';
    printf("  Full Name     : %s%s|\n", full_name, spc_multiply);


    printf("|  ##'        ''\\\\##  |");
    spc_length = ("%zu\n", default_length-strlen(nickname));
    for ( size_t u = 0; u < spc_length; ++u )
        spc_multiply[u] = space;
    spc_multiply[spc_length] = '\0';
    printf("  Nickname      : %s%s|\n", nickname, spc_multiply);


    printf("| |#: /~~~' '~~~\\ :#| |");
    int date_l, month_l, year_l, combine_l;
    date_l = ("%zu\n", strlen(date));
    month_l = ("%zu\n", strlen(month));
    year_l = ("%zu\n", strlen(year));
    combine_l = (date_l+month_l+year_l+2);
    spc_length = (default_length-combine_l);
    for ( size_t u = 0; u < spc_length; ++u )
        spc_multiply[u] = space;
    spc_multiply[spc_length] = '\0';
    printf("  Date of birth : %s/%s/%s%s|\n", date, month, year, spc_multiply);


    printf("| :(|  <o> | <o>  |): |");
    spc_length = ("%zu\n", default_length-strlen(country));
    for ( size_t u = 0; u < spc_length; ++u )
        spc_multiply[u] = space;
    spc_multiply[spc_length] = '\0';
    printf("  Country       : %s%s|\n", country, spc_multiply);


    printf("| ;#|     / \\     |#; |");
    spc_length = ("%zu\n", default_length-strlen(city));
    for ( size_t u = 0; u < spc_length; ++u )
        spc_multiply[u] = space;
    spc_multiply[spc_length] = '\0';
    printf("  City          : %s%s|\n", city, spc_multiply);


    printf("|  #|    (. .)    |#  |");
    spc_length = ("%zu\n", default_length-strlen(hobby));
    for ( size_t u = 0; u < spc_length; ++u )
        spc_multiply[u] = space;
    spc_multiply[spc_length] = '\0';
    printf("  Hobby         : %s%s|\n", hobby, spc_multiply);


    printf("|   \\\\   _____   //   |                                              |\n");
    printf("|    '\\   ---   /'    |                                              |\n");
    printf("|     |'-.___.-'|     |                                              |\n");
    printf("| _,--\\.       ./--._ |                                              |\n");
    printf("|      '._____.'      |                                              |\n");
    printf("|_____________________|                                              |\n");
    printf("|%s|\n\n", line);

}