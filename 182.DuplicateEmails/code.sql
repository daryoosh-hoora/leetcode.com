# regular method
SELECT email
FROM Person
GROUP BY email
HAVING COUNT(email) > 1

# this run a litle bit faster
SELECT t.email
FROM (
    SELECT email, COUNT(email) rep
    FROM Person
    GROUP BY email
) t
WHERE t.rep > 1
