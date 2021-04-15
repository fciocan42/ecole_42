INSERT INTO ft_table(login, date_de_creation, groupe) SELECT nom AS login, date_naissance AS date_de_creation, 'other' AS groupe FROM fiche_personne WHERE CHAR_LENGTH(nom) < 9 AND nom LIKE '%a%' ORDER BY nom ASC LIMIT 10;