float
compute_gpa(char grade[], int n)
{
	int i, gpa;
	float sum = 0.0f;
	for (i = 0; i < n; i++)
	{
		switch (grade[i])
		{
			case A: case a: gpa = 4; break;
			case B: case b: gpa = 3; break;
			case C: case c: gpa = 2; break;
			case D: case d: gpa = 1; break;
			case F: case f: gpa = 0; break;
		}
		sum += gpa;
	}
	return sum / n;
}
