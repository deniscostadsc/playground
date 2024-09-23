SELECT empregados.cpf, empregados.enome, departamentos.dnome
FROM empregados
JOIN departamentos ON empregados.dnumero = departamentos.dnumero
WHERE NOT EXISTS (
    SELECT 1
    FROM trabalha
    WHERE trabalha.cpf_emp = empregados.cpf
)
ORDER BY empregados.cpf;