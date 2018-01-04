
#ifndef STRUCTURES_H__
#define STRUCTURES_H__

#include <stdint.h>

#define MAX_LOGIN_SIZE            10
#define MAX_PASSWORD_SIZE         10
#define MAX_DOOR_ACCESS_SIZE      2
#define MAX_USER_STRING_SIZE      MAX_LOGIN_SIZE + MAX_DOOR_ACCESS_SIZE + 4     // 2: 2x':' char to divide strings,prefix 'd', '\0'


typedef struct 
{
         char *data_login;
         char *data_password;
         char *data_action;
         char *data_doorId;
         char *data_access;

} app_message_t;


#define USER_NAME_SIZE                  10
#define USER_PASSWORD_SIZE              10
#define USER_ACCESS_SIZE                2

#define USER_DISPLAY_MAX_SIZE            USER_NAME_SIZE + USER_ACCESS_SIZE + 5

typedef struct 
{

         char data_login[USER_NAME_SIZE];
         char data_password[USER_PASSWORD_SIZE];
         char door_access[USER_ACCESS_SIZE];

} user_t;

enum replay_message_type {ADMIN_LOGGED, USER_LOGGED, ERROR, USER_SAVED, WRONG_PASSWORD, LOGIN_EXISTS};

enum message_action {LOGIN_AS_ADMIN, LOGIN_AS_USER, SAVE_USER, OPEN_DOOR, CLOSE_DOOR, DISPLAY_USERS, MESSAGE_ERROR};

#endif