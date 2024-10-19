
#include "gpio.h"
#include "tim.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    if (htim->Instance == htim6.Instance) {
        HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_14);
    }
}
