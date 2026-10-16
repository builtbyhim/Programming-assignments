An **H-Bridge** is an electronic circuit that allows a DC motor to spin in two directions (clockwise and counter-clockwise) by switching the direction of the voltage applied to it. 

I built this project to understand how basic bipolar junction transistors (BJTs) work together as switches to change motor direction using a simple SPDT toggle switch.

---

# Components Used (Proteus Library)

* **4x 2N2222 NPN Transistors** (Q1, Q2, Q3, Q4) — Used as solid-state switches.
* **4x 1kΩ Resistors** (R1, R2, R3, R4) — Placed at transistor bases to limit input current.
* **1x DC Motor** — The load being driven.
* **1x 9V Battery** (BAT1) — Main power supply.
* **1x SW-SPDT Switch** (SW1) — Controls which path current takes.

  ##  How It Works

The transistors form an **"H" pattern** around the motor:

* **Clockwise Direction:** When the switch activates **Q1** (top-left) and **Q4** (bottom-right), current flows from `(+) Battery -> Q1 -> Motor -> Q4 -> Ground`.
* **Counter-Clockwise Direction:** Toggling the switch activates **Q2** (top-right) and **Q3** (bottom-left). Current now flows in reverse: `(+) Battery -> Q2 -> Motor -> Q3 -> Ground`.

---
