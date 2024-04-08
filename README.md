# I2C-Protocol
In this, I have used two Arduinos, one as a master and the other as a slave to study and test the I2C protocol

Hardware used:
- Arduino Uno R3

Communication Protocol:
- I2C

Software used:
- Arduino Uno R3

## SDL and SCL
In Arduino, "SDL" and "SCL" commonly refer to the Serial Data Line and Serial Clock Line used in the I2C communication protocol. 
SCL is the clock line, synchronized by the master device, which controls the timing of data transmission. 
SDL, on the other hand, is the data line used for transmitting and receiving data between the master and slave devices. 
In Arduino Uno, Nano, or Mega boards, these pins are labeled as A4 (SDA) and A5 (SCL), also known as Analog Pins 4 and 5 respectively. 
They are crucial for connecting Arduino to various sensors, displays, and peripherals supporting I2C communication.

## I2C Protocol
The I2C (Inter-Integrated Circuit) protocol is a widely used serial communication protocol that allows multiple devices to communicate with each other using only two wires: Serial Data Line (SDA) and Serial Clock Line (SCL). It employs a master-slave architecture where the master device initiates communication and controls the bus, while slave devices respond to commands from the master. In I2C communication, data is transferred in packets known as "frames," typically consisting of a start condition, address byte (to specify the target device), read/write bit, data bytes, and stop condition. Each device on the bus has a unique 7-bit or 10-bit address, allowing multiple devices to be connected to the same bus without conflicts. I2C is commonly used in embedded systems, sensors, displays, and other peripherals due to its simplicity and efficiency in interconnecting devices.

