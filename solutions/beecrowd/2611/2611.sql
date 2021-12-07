SELECT movies.id, movies.name FROM movies
    JOIN genres on genres.id = movies.id_genres
    WHERE genres.description = 'Action';
