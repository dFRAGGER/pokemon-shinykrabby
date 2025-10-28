#ifndef GUARD_FIELD_SPECIAL_SCENE_H
#define GUARD_FIELD_SPECIAL_SCENE_H

void Task_Truck1(u8 taskId);
void Task_Truck2(u8 taskId);
void Task_Truck3(u8 taskId);

void StartTruckDrivingScene(void);
void StartTruckSlowingDownScene(void);
void WaitForTruckToStop(void);

void ExecuteTruckSequence(void);
void EndTruckSequence(u8 taskId);
void FieldCB_ShowPortholeView(void);

#endif // GUARD_FIELD_SPECIAL_SCENE_H
