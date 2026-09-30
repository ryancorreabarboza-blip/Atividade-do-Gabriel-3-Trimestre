<?php

echo "Nota final (0 a 10): ";
$entrada = trim(fgets(STDIN));

// Valida se é um número e se está no intervalo de 0 a 10
$nota = filter_var($entrada, FILTER_VALIDATE_FLOAT, [
    "options" => ["min_range" => 0.0, "max_range" => 10.0]
]);

// Classifica o resultado de forma limpa usando match
echo match (true) {
    $nota === false => "Nota inválida.\n",
    $nota >= 6.0    => "Aprovado!\n",
    default         => "Em recuperação.\n",
};
