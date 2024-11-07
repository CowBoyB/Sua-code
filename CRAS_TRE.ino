//Di chuyển
  if (ps2x.Button(PSB_PAD_UP)) {  // Tiến lên
    pwm.setPWM(AT, 0, speed);
    pwm.setPWM(DT, 0, 0);
    pwm.setPWM(AP, 0, speed);
    pwm.setPWM(DP, 0, 0);
    Serial.println("Đang tiến");
    delay(50); 
  }

  else if (ps2x.Button(PSB_PAD_DOWN)) {  // Lùi xuống
    pwm.setPWM(AT, 0, 0);
    pwm.setPWM(DT, 0, speed);
    pwm.setPWM(AP, 0, 0);
    pwm.setPWM(DP, 0, speed);
    Serial.println("Đang lùi");
    delay(50); 
  }

  else if (ps2x.Button(PSB_PAD_LEFT)) {  // Sang trái
    pwm.setPWM(AT, 0, 2048);
    pwm.setPWM(DT, 0, 0);
    pwm.setPWM(AP, 0, 0);
    pwm.setPWM(DP, 0, 0);
    Serial.println("Đang sang trái");
    delay(50); 
  }

  else if (ps2x.Button(PSB_PAD_RIGHT)) {  // Sang phải
    pwm.setPWM(DT, 0, 0);
    pwm.setPWM(AT, 0, 0);
    pwm.setPWM(DP, 0, 2048);
    pwm.setPWM(AP, 0, 0);
    Serial.println("Đang sang phải");
    delay(50); 
  }

  else if (ps2x.ButtonReleased(PSB_PAD_UP) || ps2x.ButtonReleased(PSB_PAD_DOWN) || ps2x.ButtonReleased(PSB_PAD_LEFT) || ps2x.ButtonReleased(PSB_PAD_RIGHT)) { //Dừng
    pwm.setPWM(DT, 0, 0);
    pwm.setPWM(AT, 0, 0);
    pwm.setPWM(DP, 0, 0);
    pwm.setPWM(AP, 0, 0);
    Serial.println("Đã dừng");
    delay(50);
  }
