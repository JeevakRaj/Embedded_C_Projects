# Blinky Project In Action

|Condition 1|Condition 2|Condition 3| Condition 4|
|:--:|:--:|:--:|:--:|
| ![Condition1](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Activity1/simulation/Both%20swith%20are%20open.JPG) |![Condition2](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Activity1/simulation/One%20switch%20is%20open.JPG)|![Condition3](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Activity1/simulation/condition3.JPG)|![Condition4](https://github.com/JeevakRaj/Embedded_C_Projects/blob/main/Activity1/simulation/both%20are%20closed.JPG)|

## Code 
```
	while(1)
    {
        if(!(PINB&(1<<PB6))&&!(PINB&(1<<PB7)))
        {
           PORTB |=(1<<PB0);
        _delay_ms(20);
        }
        else{
            PORTB &=~(1<<PB0);
        _delay_ms(20);
        }
    }
```
