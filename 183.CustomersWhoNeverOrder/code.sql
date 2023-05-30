# pupular expected query
SELECT name AS Customers
FROM Customers
WHERE id NOT IN (
    SELECT customerId
    FROM Orders
)

# another pupular query 
SELECT name AS Customers
FROM Customers c
WHERE NOT EXISTS (
    SELECT customerId
    FROM Orders o
    WHERE c.id = o.customerId
)

# this run a little bit faster (about 900ms on leetcode.com test cases)
SELECT name AS Customers
FROM Customers c
    LEFT JOIN Orders o ON c.id = o.customerId
WHERE o.id IS NULL

# this run a little bit slower but more readable
SELECT t.name AS Customers 
FROM (
    SELECT c.name, o.id 
    FROM Customers c LEFT JOIN Orders o ON c.id = o.customerId
) AS t
WHERE t.id IS NULL
