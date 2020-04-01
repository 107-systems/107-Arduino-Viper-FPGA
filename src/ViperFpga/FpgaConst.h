/**
 * @brief   Arduino library containing FPGA configuration and MCU interface code for the MKR VIDOR 4000 based Viper quadcopter.
 * @license LGPL 3.0
 */

/**************************************************************************************
 * INCLUDE
 **************************************************************************************/

#include <stdint.h>

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

namespace ViperFpga
{

/**************************************************************************************
 * TYPEDEF
 **************************************************************************************/

enum class Register : uint8_t
{
  FPGA_REV_NUM            = 0x00,
  RGB_LED_RED_INTENSITY   = 0x01,
  RGB_LED_GREEN_INTENSITY = 0x02,
  RGB_LED_BLUE_INTENSITY  = 0x03
};

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

} /* namespace ViperFpga */
