int
main (void)
{
  int arreglo[5] = { 8, 4, 6, 1, 9 };
  int contador1 = 0;
  int contador2 = 0;
  int cambio = 0;
  for (contador1 = 1; contador1 < 5; contador1++)
    {
      for (contador2 = 0; contador2 < 4; contador2++)
	{
	  if (arreglo[contador2] < arreglo[contador2 + 1])
	    {
	      cambio = arreglo[contador2];
	      arreglo[contador2] = arreglo[contador2 + 1];
	      arreglo[contador2 + 1] = cambio;
	    }
	}
    }
  return 0;
}
