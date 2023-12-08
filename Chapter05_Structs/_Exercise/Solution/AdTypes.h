#pragma once

#include <stdint.h>

typedef enum
{
    LANE_ASSOCIATION_NONE,
    LANE_ASSOCIATION_LEFT,
    LANE_ASSOCIATION_CENTER,
    LANE_ASSOCIATION_RIGHT,
} LaneAssociationType;

typedef struct
{
    int32_t id;
    LaneAssociationType lane;
    float speed_mps;
    float distance_m;
} VehicleType;

#define NUM_VEHICLES_ON_LANE (size_t)(2)

typedef struct
{
    VehicleType vehicles_left_lane[NUM_VEHICLES_ON_LANE];
    VehicleType vehicles_center_lane[NUM_VEHICLES_ON_LANE];
    VehicleType vehicles_right_lane[NUM_VEHICLES_ON_LANE];
} NeighborVehiclesType;
