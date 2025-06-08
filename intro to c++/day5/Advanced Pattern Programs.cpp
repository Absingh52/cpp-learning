# 📅 Day 5 – Advanced Pattern Programs in C++

This folder contains two classic and visually appealing C++ pattern programs:

1. **Hollow Diamond Pattern**
2. **Butterfly Pattern**

These patterns are useful for understanding nested loops, symmetry, and space control in console output.

---

## 🧩 Pattern 1: Hollow Diamond

### 🔸 Description:
This program prints a **hollow diamond** using `*` characters, where only the borders are drawn and the inside is empty.

### 🔸 Sample Output (for `n = 5`):

### 🔸 Logic Breakdown:
- Uses two halves: upper and lower.
- Leading spaces decrease in the upper half and increase in the lower half.
- For each line, print:
  - Spaces → 1 star → (only if not the first or last line) spaces → 1 star

---

## 🦋 Pattern 2: Butterfly Pattern

### 🔸 Description:
Prints a **butterfly** shape with stars forming symmetrical wings on both sides.

### 🔸 Sample Output (for `n = 5`):

### 🔸 Logic Breakdown:
- Two main parts: upper wings and lower wings.
- Each line consists of:
  - Left wing stars
  - Middle spaces
  - Right wing stars (mirrored)
- Bottom half is just the reverse of the top.

---

## 🛠 How to Run the Program

1. Compile the C++ file:
   ```bash
   g++ main.cpp -o main.exe
