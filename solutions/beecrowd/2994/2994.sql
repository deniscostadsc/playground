SELECT doctor.name, ( ( 1 * 150 ) + 1 ) + ( ( 2 * 150 ) + 15 ) FROM attendances
JOIN doctors ON doctors.id = attendances.id_doctor
JOIN work_shifts ON work_shifts.id = attendances.id_work_shift
GROUP BY attendances.id
ORDER BY doctors.name;