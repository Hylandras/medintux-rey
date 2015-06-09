# Etat de l'esclave de la base locale
SHOW SLAVE STATUS \G

# Par s�curit� for�age de l'arr�t de l'Esclave
# avant de le red�marrer

STOP SLAVE;

# Positionnement des param�tres de l'Esclave
# par rapport � son Ma�tre principal
CHANGE MASTER TO MASTER_HOST='{{Master_Host}}',
MASTER_PORT='{{Master_Port}}',
MASTER_USER='{{Master_User}}',
MASTER_PASSWORD='{{MasterKey}}',
MASTER_LOG_FILE='{{Master_Log_File}}',
MASTER_LOG_POS='{{Read_Master_Log_Pos}}';

# D�marrage de l'Esclave locale pour qu'il
# se connecte � son Ma�tre de r�plication
# et y r�cup�re les logs binaires pour les
# �x�cuter sur la base locale

START SLAVE;
