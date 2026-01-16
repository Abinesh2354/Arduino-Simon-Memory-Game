# 🎮 Simon Memory Game using Arduino

A classic **Simon Memory Game** implemented using **Arduino Uno** and **Embedded C**.  
The game tests the player's memory by generating an increasing sequence of LED flashes and tones, which the player must repeat using push buttons.

---

## 🔧 Hardware Components Used

- Arduino Uno R3
- Breadboard
- 4 × LEDs (Green, Blue, Yellow, Red)
- 4 × Push Buttons
- 4 × 220Ω Resistors (LED current limiting)
- 4 × 10kΩ Resistors (Pull-up / Pull-down for buttons)
- Piezo Buzzer
- Jumper Wires

---

## ⚙️ Pin Configuration

### LEDs
| Color  | Arduino Pin |
|------|-------------|
| Green | 13 |
| Blue  | 12 |
| Yellow| 11 |
| Red   | 10 |

### Push Buttons
| Color  | Arduino Pin |
|------|-------------|
| Green | 7 |
| Blue  | 6 |
| Yellow| 5 |
| Red   | 4 |

### Buzzer
| Component | Arduino Pin |
|---------|-------------|
| Buzzer  | 3 |

---

## 🧠 Game Logic

1. The Arduino generates a random sequence of colors.
2. Each color corresponds to:
   - An LED
   - A specific tone from the buzzer
3. The sequence is shown to the player using LEDs and sounds.
4. The player must repeat the sequence using push buttons.
5. If the input is correct:
   - The sequence length increases.
6. If the input is wrong:
   - The game resets.

---

## 💻 Software Used

- Arduino IDE
- Embedded C
- Tinkercad (for circuit simulation)

