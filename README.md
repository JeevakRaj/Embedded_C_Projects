# Embedded C Programming Activities with Continuous Integration and Code Quality

# Seat Heating App

### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/JeevakRaj/Embedded_C_Projects/actions/workflows/Compile.yml/badge.svg)](https://github.com/JeevakRaj/Embedded_C_Projects/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/JeevakRaj/Embedded_C_Projects/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/JeevakRaj/Embedded_C_Projects/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/748534476bd44955b64041a3571ae381)](https://www.codacy.com/gh/JeevakRaj/Embedded_C_Projects/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=JeevakRaj/Embedded_C_Projects&amp;utm_campaign=Badge_Grade)|

### Functionality

* The LED glows only if the seat is occupied and heater is turned on.
* Analog input from the temperature sensor is received and digitized.
* The digitized temperature value is compared to the threshold value and PWM is set accordingly.
* The temperature values is transmitted by the UART protocol whenever there is a change. Here the data is displayed on the serial monitor.

## In Action

### Activity1

|Seat is not occupied and heater is off |Seat is not occupied and heater is on |Seat is occupied and heater is off | Seat is occupied and heater is on |
|:--:|:--:|:--:|:--:|
| ![Condition1](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Outputs/condition1.JPG) |![Condition2](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Outputs/condition2.JPG)|![Condition3](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Outputs/condition3.JPG)|![Condition4](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Outputs/condition4.JPG)|

### Activity2
|Ram Table 1 |Ram Table 2 |
|:--:|:--:|
| ![Ram_table_1](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Outputs/activity2.JPG) |![Ram_table_2](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Outputs/activity2_1.JPG)|

#### Verifying the output

For RamTable1 : The ADCH value = 0000 0001 and ADCL value = 1110 1001 so decimal value of ADC = **489** 

We know that 5 volt corresponds to 1024 so 1 volt is **0.00488**

So The output voltage is 0.00488 x 489 = **2.38V**

Hence we can verify that the **same voltage** is displayed in the probe.

### Activity3

#### PWM Output

![PWM Output](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Outputs/activity3.JPG)

### Activity4

#### Temperature value in Serial Monitor Output

![temperature in serial monitor](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Outputs/activity4.JPG)
