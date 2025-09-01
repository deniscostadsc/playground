SELECT
    doctors.name,
    ROUND(SUM(attendances.hours * 150 * (1 + work_shifts.bonus / 100)), 1) as salary
FROM attendances
JOIN doctors ON doctors.id = attendances.id_doctor
JOIN work_shifts ON work_shifts.id = attendances.id_work_shift
GROUP BY doctors.name
ORDER BY salary DESC;