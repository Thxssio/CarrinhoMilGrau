void backward() {
  digitalWrite(motorIN1, !HIGH);
  digitalWrite(motorIN2, !LOW);
  digitalWrite(motorIN3, !HIGH);
  digitalWrite(motorIN4, !LOW);
    delay(100);
  stopcar();
}