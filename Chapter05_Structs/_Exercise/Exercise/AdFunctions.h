#ifndef AD_FUNC_H
#define AD_FUNC_H

#include "AdTypes.h"

float kph_to_mps(const float kph);

void init_ego_vehicle(VehicleType *const ego_vehicle);

void init_vehicle(VehicleType *const vehicle,
                  const int32_t id,
                  const float speed_kph,
                  const float distance_m,
                  const LaneAssociationType lane);

void init_vehicles(NeighborVehiclesType *const vehicles);

void print_vehicle(const VehicleType *const vehicle);

void print_neighbor_vehicles(NeighborVehiclesType *const vehicles);

#endif
