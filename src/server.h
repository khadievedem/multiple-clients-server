/* Copyright 2022 Khadiev Edem
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include "init.h"

void* client_connection(void* vargp);
void* start_user_thread(void* vargp);
void client_close(SERVER *serv, int sockfd);
void server_run(SERVER *serv, int sockfd);
SERVER *create_server(int sockfd);

void sendtoroom(SERVER *serv, char* message, char* sendername, int room_number, int sendersfd);

void ask_username(int sockfd, char username[20]);
int ask_limit(SERVER *serv, int room, int sockfd);
int create_room(SERVER *serv, unsigned long long room_number, int sockfd);

int have_places(SERVER *serv, int room_id);
int get_room_id(SERVER *serv, int room_number);
int get_client_id(SERVER *serv, int sockfd);
