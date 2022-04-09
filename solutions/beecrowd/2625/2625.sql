SELECT concat(
    substring(cpf,1,3), '.',
    substring(cpf,4,3), '.',
    substring(cpf,7,3), '-',
    substring(cpf,10,2)) AS "CPF"
FROM natural_person;