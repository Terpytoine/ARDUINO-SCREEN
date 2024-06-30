
### Pin Connections

| LCD Pin | Function         | Arduino Pin |
|---------|------------------|-------------|
| 1 (VSS) | Ground           | GND         |
| 2 (VCC) | Power            | 5V          |
| 3 (VO)  | Contrast Adjust  | Potentiometer middle pin |
| 4 (RS)  | Register Select  | 12          |
| 5 (RW)  | Read/Write       | GND         |
| 6 (E)   | Enable           | 11          |
| 11 (D4) | Data Pin 4       | 5           |
| 12 (D5) | Data Pin 5       | 4           |
| 13 (D6) | Data Pin 6       | 3           |
| 14 (D7) | Data Pin 7       | 2           |
| 15 (A)  | LED Backlight +  | 5V (through resistor or directly) |
| 16 (K)  | LED Backlight -  | GND         |

**Note:** Pin 15 (A) and Pin 16 (K) are for the backlight. Since you want to control the backlight brightness using PWM, Pin 15 will be connected to Arduino Pin 9.

### Components
1. **Arduino Uno**
2. **16x2 LCD**
3. **10kΩ Potentiometer** (for contrast adjustment)
4. **Resistor** (220Ω or similar for backlight, optional if you want to protect the LED)
5. **Connecting Wires**

### Step-by-Step Connections
1. **Power and Ground**:
   - Connect LCD pin 1 (VSS) to GND on Arduino.
   - Connect LCD pin 2 (VCC) to 5V on Arduino.
   - Connect LCD pin 16 (K) to GND on Arduino.
   - Connect LCD pin 15 (A) to Arduino pin 9 (through a 220Ω resistor if needed).

2. **Contrast Adjustment**:
   - Connect one end of the potentiometer to GND and the other end to 5V.
   - Connect the middle pin of the potentiometer to LCD pin 3 (VO).

3. **Control Pins**:
   - Connect LCD pin 4 (RS) to Arduino pin 12.
   - Connect LCD pin 5 (RW) to GND (always write mode).
   - Connect LCD pin 6 (E) to Arduino pin 11.

4. **Data Pins**:
   - Connect LCD pin 11 (D4) to Arduino pin 5.
   - Connect LCD pin 12 (D5) to Arduino pin 4.
   - Connect LCD pin 13 (D6) to Arduino pin 3.
   - Connect LCD pin 14 (D7) to Arduino pin 2.
