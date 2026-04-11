#include <stdio.h>
#include <string.h>
#include <time.h>

// space length for empty row
#define DEFAULT_LENGTH 23

// get remain space length
int get_space_length(char length[])
{
    // Remaining length
    int remain_length;
    remain_length = DEFAULT_LENGTH-strlen(length);
    return remain_length;
}

// ask data from user function
int ask_data(char message[], char data_var[])
{
    printf("%s > ", message);
    fgets(data_var, 100, stdin);
    // remove new line from fgets
    data_var[strcspn(data_var, "\n")] = '\0';
}

// main function
int main()
{
    char full_name[100], nickname[100], gender[10];
    char date[10], month[10], year[10];
    char country[100], city[100], hobby[100];
    char line[] = "_______________________________________________________________";
    char big_line[] = "+=========================+";
    char space = ' ';
    char spc_multiply[100];

    printf("%s\n|________WELCOME_TO_______|\n", big_line);
	printf("| Ascii ID Card Generator |\n%s\n\n", big_line);

    printf("  ______________\n");	
	printf(" /o\\ Quick tips!\\______________________________________________________________________\n");
	printf("/_|_\\Use capital letters at the beginning of the input, so that the results are neater.|\n\n");

    // full name input
    ask_data("1. Enter your full name     ", full_name);
    // nickname input
    ask_data("2. Enter your Nickname      ", nickname);
    // gender input
    ask_data("3. Enter your gender (F/M)  ", gender);
    // date birth input
    ask_data("4. Enter your date of birth ", date);
    // month birth input
    ask_data("5. Enter your month of birth", month);
    // year birth input
    ask_data("6. Enter your year of birth ", year);
    // country input
    ask_data("7. Enter your country       ", country);
    // city input
    ask_data("8. Enter your city          ", city);
    // hobby input
    ask_data("9. Enter your hobby         ", hobby);

    printf("\n\nGenerate your id card...\n\n");
    printf(" %s\n", line);
    printf("|       _______       |-----------------------------------------|\n");
    printf("|    ,###########,    |");
    printf("===(ID CARD)=============================|\n");                         
    printf("|  ,#*''\\\\\\\\\\\\\\\\'*#,  |-----------------------------------------|\n");

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

    // gender line
    printf("| |#: /~~~' '~~~\\ :#| |");
    for ( int u = 0; u < get_space_length(gender); ++u )
        spc_multiply[u] = space;
    spc_multiply[get_space_length(gender)] = '\0';
    printf("  Gender        : %s%s|\n", gender, spc_multiply);

    // date of birth line
    printf("| :(|  <o> | <o>  |): |");
    // define variables to store the length of date, month, year, and combine that store full date
    int date_l, month_l, year_l, combine_l;
    date_l = ("%zu\n", strlen(date));
    month_l = ("%zu\n", strlen(month));
    year_l = ("%zu\n", strlen(year));
    combine_l = (date_l+month_l+year_l+2);
    int spc_length;
    spc_length = (DEFAULT_LENGTH-combine_l);
    for ( size_t u = 0; u < spc_length; ++u )
        spc_multiply[u] = space;
    spc_multiply[spc_length] = '\0';
    printf("  Date of birth : %s/%s/%s%s|\n", date, month, year, spc_multiply);

    // country line
    printf("| ;#|     / \\     |#; |");
    for ( int u = 0; u < get_space_length(country); ++u )
        spc_multiply[u] = space;
    spc_multiply[get_space_length(country)] = '\0';
    printf("  Country       : %s%s|\n", country, spc_multiply);

    // city line
    printf("|  #|    (. .)    |#  |");
    for ( int u = 0; u < get_space_length(city); ++u )
        spc_multiply[u] = space;
    spc_multiply[get_space_length(city)] = '\0';
    printf("  City          : %s%s|\n", city, spc_multiply);

    // hobby line
        printf("|   \\\\   _____   //   |");
    for ( int u = 0; u < get_space_length(hobby); ++u )
        spc_multiply[u] = space;
    spc_multiply[get_space_length(hobby)] = '\0';
    printf("  Hobby         : %s%s|\n", hobby, spc_multiply);

    printf("|    '\\   ---   /'    |                                         |\n");
    printf("|     |'-.___.-'|     |                                         |\n");

    // Show the id card creation date
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    printf("| _,--\\.       ./--._ |  Valid from : %d/%d/%d                 |\n", t->tm_mday, t->tm_mon + 1, t->tm_year + 1900);
    printf("|      '._____.'      |  Expired    : %d/%d/%d                 |\n", t->tm_mday, t->tm_mon + 1, t->tm_year + 1905);
    printf("|_____________________|_________________________________________|\n\n");
    // printf("|%s|\n\n", line);
}