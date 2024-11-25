#include <stdio.h>

typedef enum {
  VOLTAGE = 1,
  CURRENT = 2,
  RESISTANCE = 3
} Mode;

// calculations
double calculate_voltage(double current, double resistance);
double calculate_current(double voltage, double resistance);
double calculate_resistance(double current, double voltage);

// main workflow, does all the input handling and result output
void run_calculation_workflow(Mode mode);

// get the corresponding mode string from mode
char* get_mode_string(Mode mode);

int main() {

  int mode_input;

  while (1) {

    printf("Was möchtest du ausrechnen? (1. Spannung, 2. Strom, 3. Widerstand, 4. Quit): ");
    scanf("%d", &mode_input);

    if (mode_input > 4 || mode_input < 1) {
      continue;
    }

    if (mode_input == 4) {
      break;
    }

    run_calculation_workflow(mode_input);
  }

  printf("Bye bye!\n");
}

double calculate_voltage(double current, double resistance) {
  // voltage = current * resistance
  return current * resistance;
}

double calculate_current(double voltage, double resistance) {
  // current = voltage / resistance
  return voltage / resistance;
}

double calculate_resistance(double voltage, double current) {
  // resistance = voltage / current
  return voltage / current;
}

char* get_mode_string(Mode mode) {
  switch (mode) {
    case 1: return "Spannung (Volt)";
    case 2: return "Strom (Ampere)";
    case 3: return "Widerstand (Ohm)";
    default: return "n/a";
  }
}

void run_calculation_workflow(Mode mode) {

  double a, b, result;

  switch (mode) {
    case VOLTAGE:
      printf("Strom (Ampere): ");
      scanf("%lf", &a);
      printf("Widerstand (Ohm): ");
      scanf("%lf", &b);
      result = calculate_voltage(a, b);
      break;
    case CURRENT:
      printf("Spannung (Volt): ");
      scanf("%lf", &a);
      printf("Widerstand (Ohm): ");
      scanf("%lf", &b);
      result = calculate_current(a, b);
      break;
    case RESISTANCE:
      printf("Spannung (Volt): ");
      scanf("%lf", &a);
      printf("Strom (Ampere): ");
      scanf("%lf", &b);
      result = calculate_resistance(a, b);
      break;
  }

  printf("%s: %lf\n\n", get_mode_string(mode), result);
}