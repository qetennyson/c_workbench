// never use a typecast with a variable on a line by itself unless 
// there is a specific reason.

// ex.
int age = 10;

float salaryBonus;

// this makes more sense than permanently declaring age to be float.
salaryBonus = salary * (float)age / 150.0;

int value;

// cast entire expression
value = (float)(number - 10 * yrsService);

