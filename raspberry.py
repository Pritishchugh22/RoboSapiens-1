with open('result.txt','r') as file:

    cart=file.read(1)
    # Import required modules
    import time
    import RPi.GPIO as GPIO

    # Declare the GPIO settings
    GPIO.setmode(GPIO.BOARD)

    # set up GPIO pins
    GPIO.setup(7, GPIO.OUT) # Connected to PWMR(pulse width modulation for right tyres)
    GPIO.setup(11, GPIO.OUT) # Connected to RIN2(input 1 for right tyres)
    GPIO.setup(12, GPIO.OUT) # Connected to RIN1(input 2 for right tyres)
    GPIO.setup(13, GPIO.OUT) # Connected to STBY
    GPIO.setup(15, GPIO.OUT) # Connected to LIN1(input 1 for left tyres)
    GPIO.setup(16, GPIO.OUT) # Connected to LIN2(input 2 for left tyres)
    GPIO.setup(18, GPIO.OUT) # Connected to PWML(pulse width modulation for left tyres)

    if cart=='A':
        #code for rotating  left 30 degree
        # Motor R1 and R2:
        GPIO.output(12, GPIO.HIGH) # Set RIN1
        GPIO.output(11, GPIO.LOW) # Set RIN2
        
        # Set the motor speed
        # Motor R1 and R2:
        GPIO.output(7, GPIO.HIGH) # Set PWMR
        
        # Disable STBY (standby)
        GPIO.output(13, GPIO.HIGH)
        
        # duration
        time.sleep((3.14*bot_width*60)/(6*c*200))
        
        #code for moving forward 50m
        
        # Motor R1 and R2:
        GPIO.output(12, GPIO.HIGH) # Set RIN1
        GPIO.output(11, GPIO.LOW) # Set RIN2
        
        # Motor L1 and L2:
        GPIO.output(15, GPIO.HIGH) # Set LIN1
        GPIO.output(16, GPIO.LOW) # Set LIN2
        
        # Set the motor speed
        # Motor R1 and R2:
        GPIO.output(7, GPIO.HIGH) # Set PWMR
        # Motor L1 and L2:
        GPIO.output(18, GPIO.HIGH) # Set PWML
        
        # Disable STBY (standby)
        GPIO.output(13, GPIO.HIGH)
        
        #duration
        time.sleep(50/(c*200/60))

        

    if cart=='B':
        #code for moving forward 50m
        # Motor R1 and R2:
        GPIO.output(12, GPIO.HIGH) # Set RIN1
        GPIO.output(11, GPIO.LOW) # Set RIN2
        
        # Motor L1 and L2:
        GPIO.output(15, GPIO.HIGH) # Set LIN1
        GPIO.output(16, GPIO.LOW) # Set LIN2
        
        # Set the motor speed
        # Motor R1 and R2:
        GPIO.output(7, GPIO.HIGH) # Set PWMR
        # Motor L1 and L2:
        GPIO.output(18, GPIO.HIGH) # Set PWML
        
        # Disable STBY (standby)
        GPIO.output(13, GPIO.HIGH)
        
        #duration
        time.sleep(50/(c*200/60))

    if cart=='C':
        #code for rotating right 30 degree
        # Motor L1 and L2:
        GPIO.output(15, GPIO.HIGH) # Set LIN1
        GPIO.output(16, GPIO.LOW) # Set LIN2
        
        # Set the motor speed
        # Motor L1 and L2:
        GPIO.output(18, GPIO.HIGH) # Set PWML
        
        # Disable STBY (standby)
        GPIO.output(13, GPIO.HIGH)
        
        # duration
        time.sleep((3.14*bot_width*60)/(6*c*200))
        
        #code for moving forward 50m
        
        # Motor R1 and R2:
        GPIO.output(12, GPIO.HIGH) # Set RIN1
        GPIO.output(11, GPIO.LOW) # Set RIN2
        
        # Motor B:
        GPIO.output(15, GPIO.HIGH) # Set LIN1
        GPIO.output(16, GPIO.LOW) # Set LIN2
        
        # Set the motor speed
        # Motor R1 and R2:
        GPIO.output(7, GPIO.HIGH) # Set PWMR
        # Motor L1 and L2:
        GPIO.output(18, GPIO.HIGH) # Set PWML
        
        # Disable STBY (standby)
        GPIO.output(13, GPIO.HIGH)
        
        #duration
        time.sleep(50/(c*200/60))
        
    # Reset all the GPIO pins by setting them to LOW
    GPIO.output(12, GPIO.LOW) # Set AIN1
    GPIO.output(11, GPIO.LOW) # Set AIN2
    GPIO.output(7, GPIO.LOW) # Set PWMA
    GPIO.output(13, GPIO.LOW) # Set STBY
    GPIO.output(15, GPIO.LOW) # Set BIN1
    GPIO.output(16, GPIO.LOW) # Set BIN2
    GPIO.output(18, GPIO.LOW) # Set PWMB

    
    
    