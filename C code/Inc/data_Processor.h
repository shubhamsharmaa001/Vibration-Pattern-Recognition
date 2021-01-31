
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _DATA_PROCESSING_H_
#define _DATA_PROCESSING_H_


/* Includes ------------------------------------------------------------------*/
#include <stdint.h>


/* Exported define ------------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
 typedef struct
{
  float AccX;           /*  acc x axes [g]  */
  float AccY;           /*  acc y axes [g]  */
  float AccZ;           /*  acc z axes [g]  */
} DATA_input_t;


/* Exported constants --------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/


#define ID_FAULT4      (uint8_t)(0x02)
#define ID_FAULT3      (uint8_t)(0x03)
#define ID_FAULT2      (uint8_t)(0x01)
#define ID_FAULT1      (uint8_t)(0x00)
#define ID_NONE        (uint8_t)(0xFF)



/* Exported functions ------------------------------------------------------- */


/* Initialize the AI Network and enable the CRC clock for using AI library on stm32*/
int8_t  DATA_InitProcesser(void);

/* ----Run inference on the data collected ----------------------------------*/
uint8_t DATA_Infer(DATA_input_t ACC_Value_Raw);

/* -----Return the final result ---------------------------------------------*/
uint8_t DATA_get_Result(void);



#endif /* DATA_PROCESSING */


