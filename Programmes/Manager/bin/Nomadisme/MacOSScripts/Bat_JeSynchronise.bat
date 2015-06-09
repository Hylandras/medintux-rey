Echo off

set workPath=%1

set AdresseM=%2
set LoginM=%3
set MPM=%4
set PortM=%5

set AdresseN=%6
set LoginN=%7
set MPN=%8
set PortN=%9

set LogPath=C:\OpenDevMedintux\trunk\Programmes\Manager\bin\Manager\bin\Nomadisme\FilesLogs
set NomMySQL=test du deuxieme parametre
set NomLogBin={{param 2}}

cd %workPath%

Echo Synchronisation du Nomade %AdresseN% - %PortN% sur le R�seau du Serveur : %date% %time% >>Out_JeReviens.txt

rem Etat du Ma�tre sur le Nomade (base locale)
Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Etat du Ma�tre sur le Nomade %AdresseN% - %PortN% : %date% %time% >>Out_JeReviens.txt
rem rem  mysql -h%AdresseN% -u%LoginN% -p%MPN% -P%PortN% <ScriptShowMaster.txt >>Out_JeReviens.txt

rem Insertion d'un drapeau � la fin du log binaire du Nomade
rem rem  mysql -h%AdresseN% -u%LoginN% -p%MPN% -P%PortN% <ScriptInsertFlag.txt

Echo Synchronisation des donnees saisies sur le Nomade %AdresseN% - %PortN%
Echo avec les donnees du Serveur : %AdresseM% - %PortM%
Echo ...

rem Connexion au serveur pour d�marrage de
rem l'Esclave pour r�plication des op�rations Nomades
Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo D�marrage de l'Esclave du Serveur r�cup�rer donn�es Nomade %AdresseM% - %PortM% : %date% %time% >>Out_JeReviens.txt
rem rem mysql -h%AdresseM% -u%LoginM% -p%MPM% -P%PortM% <ScriptJeReviens.txt >>Out_JeReviens.txt

echo off
:Delai1
set /a count = 0
:boucle
set /a count = count + 1
if %count%==30 goto finboucle
goto boucle
:finboucle
REM echo on

rem Test de l'arriv�e du drapeau sur la base r�f�rentielle du seveur
rem rem mysql -h%AdresseM% -u%LoginM% -p%MPM% -P%PortM% <ScriptTestFlag.txt >TestDrapeau.txt
call :TestTaille TestDrapeau.txt
REM Echo Taille = %Taille%
rem rem if %Taille%==0 goto Delai1

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Fin de la r�plication du Nomade vers le Serveur : %date% %time% >>Out_JeReviens.txt

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Nouvel �tat de l'Esclave du Serveur / au Nomade %AdresseM% - %PortM% : %date% %time% >>Out_JeReviens.txt
rem Etat de l'Esclave du serveur apr�s r�plication
rem rem mysql -h%AdresseM% -u%LoginM% -p%MPM% -P%PortM% <ScriptShowSlave.txt >>Out_JeReviens.txt

rem Suppression du drapeau
rem rem mysql -h%AdresseN% -u%LoginN% -p%MPN% -P%PortN% <ScriptDeleteFlag.txt

echo off
:Delai2
set /a count = 0
:boucleDelai2
set /a count = count + 1
if %count%==30 goto finboucleDelai2
goto boucleDelai2
:finboucleDelai2
REM echo on

rem Test de la suppression du drapeau sur la base r�f�rentielle du seveur
rem rem mysql -h%AdresseM% -u%LoginM% -p%MPM% -P%PortM% <ScriptTestFlag.txt >TestDrapeau.txt
call :TestTaille TestDrapeau.txt
REM Echo Taille = %Taille%
rem rem if not %Taille%==0 goto Delai2

Echo Deconnexion du Serveur : %AdresseM% - %PortM%
Echo ...

rem Arr�t de l'Esclave du Serveur
rem rem mysql -h%AdresseM% -u%LoginM% -p%MPM% -P%PortM% <ScriptStopSlave.txt >>Out_JeReviens.txt

echo off
set /a count = 0
:boucle2
set /a count = count + 1
if %count%==100 goto finboucle2
goto boucle2
:finboucle2
REM echo on

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Nouvel �tat de l'Esclave arr�t� du Serveur %AdresseM% - %PortM% : %date% %time% >>Out_JeReviens.txt
rem Etat de l'esclave apr�s arr�t
rem rem mysql -h%AdresseM% -u%LoginM% -p%MPM% -P%PortM% <ScriptShowSlave.txt >>Out_JeReviens.txt

Echo Synchronisation terminee
Echo ...

rem R�initialisation des logs du Nomade
rem Mais avant la r�initialisation, sauvegarde des fichiers logs binaires

Echo Sauvegarde des logs binaires du Nomade %AdresseN% - %PortN%
Echo avant initialisation et preparation du Nomade
Echo ...

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Arret du serveur MySQL du nomade %AdresseN% - %PortN% : %date% %time% >>Out_JeReviens.txt
rem rem NET STOP %NomMySQL% >>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Sauvegarde des fichiers logs binaires du nomade %AdresseN% - %PortN% : %date% %time% >>Out_JeReviens.txt
rem rem "C:\Program Files\7-Zip\7z.exe" a -t7z  "%LogPath%\LogBinSave%date:~6,4%%date:~3,2%%date:~0,2%%time:~0,2%%time:~3,2%%time:~6,2%" "%LogPath%\%NomLogBin%.*" >>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Red�marrage du serveur MySQL du nomade %AdresseN% - %PortN% : %date% %time% >>Out_JeReviens.txt
rem rem NET START %NomMySQL% >>Out_JeReviens.txt

Echo Reinitialisation des logs du Nomade %AdresseN% - %PortN%
Echo pour preparation en vue prochaine session nomade
Echo ...

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Connexion � la base locale du Nomade %AdresseN% - %PortN% pour r�init les logs : %date% %time% >>Out_JeReviens.txt
Echo Etat Avant / Apr�s >>Out_JeReviens.txt
rem rem mysql -h%AdresseN% -u%LoginN% -p%MPN% -P%PortN% <ScriptResetMaster.txt >>Out_JeReviens.txt

Echo Connexion du Nomade : %AdresseN% - %PortN%
Echo au Serveur : %AdresseM% - %PortM%
Echo ...

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Connexion base du Nomade %AdresseN% - %PortN% au Serveur pour r�plication Serveur->Nomade : %date% %time% >>Out_JeReviens.txt
Echo Etat Avant / Apr�s >>Out_JeReviens.txt
rem Il faut maintenant reconnecter l'Esclave du Nomade au Serveur
rem rem mysql -h%AdresseN% -u%LoginN% -p%MPN% -P%PortN% <ScriptStartSlave.txt >>Out_JeReviens.txt

rem Insertion d'un drapeau � la fin du log binaire du Serveur
rem rem mysql -h%AdresseM% -u%LoginM% -p%MPM% -P%PortM% <ScriptInsertFlag.txt

echo off
:Delai3
set /a count = 0
:boucleDelai3
set /a count = count + 1
if %count%==30 goto finboucleDelai3
goto boucleDelai3
:finboucleDelai3
REM echo on

rem Test de l'arriv�e du drapeau sur la base du Nomade
rem rem mysql -h%AdresseN% -u%LoginN% -p%MPN% -P%PortN% <ScriptTestFlag.txt >TestDrapeau.txt
call :TestTaille TestDrapeau.txt
REM Echo Taille = %Taille%
rem rem if %Taille%==0 goto Delai3

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Nouvel �tat de l'Esclave du Nomade %AdresseN% - %PortN% / au Serveur : %date% %time% >>Out_JeReviens.txt
rem Etat de l'Esclave du nomade
rem rem mysql -h%AdresseN% -u%LoginN% -p%MPN% -P%PortN% <ScriptShowSlave.txt >>Out_JeReviens.txt

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Fin de la r�plication du Serveur vers le Nomade : %date% %time% >>Out_JeReviens.txt

rem Suppression du drapeau
rem rem mysql -h%AdresseM% -u%LoginM% -p%MPM% -P%PortM% <ScriptDeleteFlag.txt

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Arr�t de la r�plication du Serveur vers le Nomade : %date% %time% >>Out_JeReviens.txt
rem rem mysql -h%AdresseN% -u%LoginN% -p%MPN% -P%PortN% <ScriptStopSlave.txt >>Out_JeReviens.txt

rem Il faut maintenant relancer la r�plication circulaire du R�seau Cabinet

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Relance de la R�plication circulaire du R�seau : %date% %time% >>Out_JeReviens.txt
rem rem mysql -h%AdresseM% -u%LoginM% -p%MPM% -P%PortM% <ScriptRelanceRepli.txt >>Out_JeReviens.txt

echo off
set /a count = 0
:boucle3
set /a count = count + 1
if %count%==100 goto finboucle3
goto boucle3
:finboucle3
REM echo on

Echo .>>Out_JeReviens.txt
Echo .>>Out_JeReviens.txt
Echo Nouvel �tat de l'Esclave du Serveur %AdresseM% - %PortM% : %date% %time% >>Out_JeReviens.txt
rem Etat de l'esclave apr�s relance de la r�plication circulaire
rem rem mysql -h%AdresseM% -u%LoginM% -p%MPM% -P%PortM% <ScriptShowSlave.txt >>Out_JeReviens.txt

Echo terminated >ScriptStatus.txt

Echo Fin de la procedure de Synchro du Nomade : %AdresseN% - %PortN%
Echo Avec le Serveur : %AdresseM% - %PortM%
Echo ###########################
Echo ###########################

Echo ############################################################################>>Out_JeReviens.txt
Echo *>>Out_JeReviens.txt
Echo *>>Out_JeReviens.txt
Echo on

EXIT

:TestTaille
Set Taille=%~z1
goto FinTestTaille
:FinTestTaille