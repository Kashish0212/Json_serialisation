#ifndef ROBOT_VEL_H
#define ROBOT_VEL_H

typedef struct robot_vel_t{
    float linear_vel;
    float angular_vel;
};

void init_robot_vel(struct robot_vel_t *vel, float linear_vel_t, float angular_vel_t);
void serialize(struct robot_vel_t *vel, char *vel_serialized);
void deserialize(char *vel_serialized,struct robot_vel_t *deserialized_vel);


#endif

