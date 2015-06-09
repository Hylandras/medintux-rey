# Etat de l'esclave de la base locale
SHOW SLAVE STATUS \G

# Par s�curit� for�age de l'arr�t de l'Esclave
# avant de le red�marrer

STOP SLAVE;


# Positionnement des param�tres de l'Esclave
# par rapport � son Ma�tre principal
CHANGE MASTER TO MASTER_HOST='{{reverse host}}',
MASTER_PORT={{reverse port}},
MASTER_USER='{{reverse user}}',
MASTER_PASSWORD='{{reverse pass}}',
MASTER_LOG_FILE='{{reverse logbin}}',
MASTER_LOG_POS=98;

# D�marrage de l'Esclave locale pour qu'il
# se connecte � son Ma�tre de r�plication
# et y r�cup�re les logs binaires pour les
# �x�cuter sur la base locale

START SLAVE;
