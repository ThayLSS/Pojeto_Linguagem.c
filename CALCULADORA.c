int main()
{
float num1, num2, resultado;
char operacao;

printf("Digite o primeiro numero: \n");
scanf ("%f", &num1);

printf("Digite o segundo numero: \n");
scanf ("%f", &num2);

printf("Digite a operacao (+,-,*,/): \n");
scanf ("%s", &operacao);

if (operacao == '+')
{
    resultado = num1 + num2;
    printf ("O resultado e : %f \n" , resultado);
}
else if (operacao == '-')
{
    resultado = num1 - num2;
    printf ("O resultado e : %f \n" , resultado);
}

else if (operacao == '*')
    {
    resultado = num1 * num2;
    printf ("O resultado e : %f \n" , resultado);
    }

else if (operacao == '/')
        {
            if (num2 =! 0)
            resultado = num1 / num2;
            printf ("O resultado e : %f \n" , resultado);
        }

            else
        {
            printf ("Divisao por 0 e indeterminada matematicamente, tente uma divisao com outro numero! ");
        }
            return 0;
        }
