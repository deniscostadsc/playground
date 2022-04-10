SELECT candidate.name, ROUND((score.math * 2 + score.SPECIFIC * 3 + score.project_plan * 5) / 10, 2) AS AVG
FROM candidate
JOIN score ON candidate.id = score.candidate_id
ORDER BY AVG DESC;