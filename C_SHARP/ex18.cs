using System;
using System.Globalization;

// Define a cultura padrão para garantir o ponto como separador decimal
CultureInfo.DefaultThreadCurrentCulture = CultureInfo.InvariantCulture;

// Declaração de variáveis (com nomes em CamelCase/Padrão)
string nome = "Ana";
string cargo = "Desenvolvedora";
int idade = 20;
double salario = 3500.00;

// Exibição dos dados formatados
Console.WriteLine("APRESENTAÇÃO DE FUNCIONÁRIO");
Console.WriteLine($"Nome: {nome}");
Console.WriteLine($"Cargo: {cargo}");
Console.WriteLine($"Idade: {idade}");
Console.WriteLine($"Salário: R$ {salario:F2}");
