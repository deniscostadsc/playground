SELECT name, CAST(EXTRACT( DAY FROM payday) AS INT) AS "day"
FROM loan;