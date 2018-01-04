
#ifndef MAIN_FUNCTIONS_H__
#define MAIN_FUNCTIONS_H__

#include <stdint.h>
#include "simple_on_off_client.h"
#include "locks_controller.h"
#include "main_structures.h"



static void message_handler(enum action_type action, uint8_t door_id);

static void set_client_state(enum lock_state state);

uint32_t send_open(simple_on_off_client_t * p_client, uint8_t destination_id);
uint32_t send_close(simple_on_off_client_t * p_client, uint8_t destination_id);
enum action_type set_enum (uint8_t action);

#endif
