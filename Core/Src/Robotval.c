/*
 * Robotval.c
 *
 *  Created on: Feb 4, 2023
 *      Author: kashish
 */

#include <cJSON.h>
// #include<RobotVal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cJSON.c>

 //cJSON *velocity_json=NULL;
 cJSON *json_string=NULL;
 //char *json_string=NULL;

/*typedef struct robot_vel_t{
    float linear_vel;
    float angular_vel;
}V1;*/



 void init_robot_vel(struct robot_vel_t *vel, float linear_vel_t, float angular_vel_t){

	// struct robot_vel_t V1= {1,2};
	 typedef struct robot_vel_t{
	     float linear_vel;
	     float angular_vel;
	 };

 struct robot_vel_t V1= {1,2};
float linear_vel;
float angular_vel;
//cJSON *json_string=NULL;

 void serialize(struct robot_vel_t *vel, char *vel_serialized)
 {
cJSON *velocity_json = cJSON_CreateObject();
cJSON_AddNumberToObject(velocity_json,"linear velocity" ,V1.linear_vel) ;
cJSON_AddNumberToObject(velocity_json,"angular velocity",V1.angular_vel) ;
vel_serialized = cJSON_Print(velocity_json);
printf(" %s\n",vel_serialized);
//cJSON *json=cJSON_Parse(vel_serialized);
 }

 void deserialize(char *vel_serialized,struct robot_vel_t *deserialized_vel){
	 cJSON *json=cJSON_Parse(vel_serialized);
  cJSON *value1 = cJSON_GetObjectItemCaseSensitive(json, "linear velocity");
  cJSON *value2 = cJSON_GetObjectItemCaseSensitive(json, "angular velocity");
   printf("%f\n", V1.linear_vel);
  printf("%f",V1.angular_vel);
 }

return 0;
}

