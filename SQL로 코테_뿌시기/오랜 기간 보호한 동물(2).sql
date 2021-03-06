-- WHERE 문을 사용 (둘다 id 일치시 걸러냄)
# SELECT A.ANIMAL_ID, A.NAME
# FROM ANIMAL_INS A, ANIMAL_OUTS B
# WHERE A.ANIMAL_ID=B.ANIMAL_ID
# ORDER BY B.DATETIME-A.DATETIME DESC
# LIMIT 2;

-- INNER JOIN 사용
SELECT A.ANIMAL_ID, A.NAME
FROM ANIMAL_INS A INNER JOIN ANIMAL_OUTS B
ON A.ANIMAL_ID = B.ANIMAL_ID
ORDER BY B.DATETIME - A.DATETIME DESC
LIMIT 2;