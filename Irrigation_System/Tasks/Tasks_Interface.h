/*
 * Tasks_Interface.h
 *
 *  Created on: Jan 17, 2023
 *      Author: Windows 10
 */

#ifndef TASKS_TASKS_INTERFACE_H_
#define TASKS_TASKS_INTERFACE_H_


/******************************************************************/
/****************  		Global Variable			 ******************/
/******************************************************************/
extern u16 Global_SoilMoisture_Data;
extern u16 Global_WaterLevel_Data;
extern u8 Global_Soil_percent;
extern u8 Global_WaterLevel_percent;

/*	Define Semaphore */
extern xSemaphoreHandle Sem;

/******************************************************************/
/************  		Functions Prototypes			 **************/
/******************************************************************/
void soil_moisture_sensor_ISR(void);
void soil_moisture_sensor(void);
void water_level_sensor_ISR(void);
void water_level_sensor(void);
void Pump(void);
void Buzzer(void);

#endif /* TASKS_TASKS_INTERFACE_H_ */
