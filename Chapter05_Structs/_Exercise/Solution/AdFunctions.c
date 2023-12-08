#include <math.h>
#include <stdint.h>
#include <stdio.h>

#include "AdFunctions.h"

float kph_to_mps(const float kph)
{
    return kph / 3.6F;
}

void init_ego_vehicle(VehicleType *const ego_vehicle)
{
    ego_vehicle->id = -1;
    ego_vehicle->speed_mps = kph_to_mps(135.0F);
    ego_vehicle->distance_m = 0.0F;
    ego_vehicle->lane = LANE_ASSOCIATION_CENTER;
}

void init_vehicle(VehicleType *const vehicle,
                  const int32_t id,
                  const float speed_kph,
                  const float distance_m,
                  const LaneAssociationType lane)
{
    vehicle->id = id;
    vehicle->speed_mps = kph_to_mps(speed_kph);
    vehicle->distance_m = distance_m;
    vehicle->lane = lane;
}

void init_vehicles(NeighborVehiclesType *const vehicles)
{
    init_vehicle(&vehicles->vehicles_left_lane[0],
                 0,
                 130.0F,
                 80.0F,
                 LANE_ASSOCIATION_LEFT);
    init_vehicle(&vehicles->vehicles_left_lane[1],
                 1,
                 80.0F,
                 -20.0F,
                 LANE_ASSOCIATION_LEFT);
    init_vehicle(&vehicles->vehicles_center_lane[0],
                 2,
                 80.0F,
                 50.0F,
                 LANE_ASSOCIATION_CENTER);
    init_vehicle(&vehicles->vehicles_center_lane[1],
                 3,
                 120.0F,
                 -50.0F,
                 LANE_ASSOCIATION_CENTER);
    init_vehicle(&vehicles->vehicles_right_lane[0],
                 4,
                 110.0F,
                 30.0F,
                 LANE_ASSOCIATION_RIGHT);
    init_vehicle(&vehicles->vehicles_right_lane[1],
                 5,
                 90.0F,
                 -30.0F,
                 LANE_ASSOCIATION_RIGHT);
}

void print_vehicle(const VehicleType *const vehicle)
{
    printf("ID: %d\n", vehicle->id);
    printf("Speed (m/s): %f\n", vehicle->speed_mps);
    printf("Distance (m): %f\n", vehicle->distance_m);
    printf("Lane: %d\n\n", (uint32_t)(vehicle->lane));
}

void print_neighbor_vehicles(NeighborVehiclesType *const vehicles)
{
    print_vehicle(&vehicles->vehicles_left_lane[0]);
    print_vehicle(&vehicles->vehicles_left_lane[1]);
    print_vehicle(&vehicles->vehicles_center_lane[0]);
    print_vehicle(&vehicles->vehicles_center_lane[1]);
    print_vehicle(&vehicles->vehicles_right_lane[0]);
    print_vehicle(&vehicles->vehicles_right_lane[1]);
}
