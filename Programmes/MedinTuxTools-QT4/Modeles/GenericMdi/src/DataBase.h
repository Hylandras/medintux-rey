#define m_VERSION_NUMBER             "2.16.000"                             // --------  Numero de version de la base de donnee --------
//........................ IndexNomPrenom ....................................
#define m_DOSS_INDEX_TBL_NAME        "IndexNomPrenom"                       // --------  nom de la table de l'index des  patients  --------
#define m_DOSS_INDEX_GUID            "FchGnrl_IDDos"                        // GUID identificateur unique du N de Dossier du patient
#define m_DOSS_INDEX_NOM             "FchGnrl_NomDos"                       // Nom habituel et usuel du patient
#define m_DOSS_INDEX_PRENOM          "FchGnrl_Prenom"                       // Prenom habituel et usuel du patient
#define m_DOSS_INDEX_PRIM_KEY        "ID_PrimKey"                           // clef primaire
//........................ fchpat ............................................
#define m_DOSS_IDENT_TBL_NAME        "fchpat"                               // --------  nom de la table des fiches identitaires des  patients  --------
#define m_DOSS_IDENT_GUID            "FchPat_GUID_Doss"                     // GUID identificateur unique du N de Dossier du patient (le meme que celui de l"index)
#define m_DOSS_IDENT_JFNOM           "FchPat_NomFille"                      // nom de naissance du patient
#define m_DOSS_IDENT_NSS             "FchPat_Nee"                           // date de naissance
#define m_DOSS_IDENT_SEX             "FchPat_Sexe"                          // sexe "F" ou "M"
#define m_DOSS_IDENT_NB_ENF          "FchPat_NbEnfant"                      // nombre d"enfants
#define m_DOSS_IDENT_RUE             "FchPat_Adresse"                       // adresse (nom de la rue du quartier etc ...)
#define m_DOSS_IDENT_CODE_POST       "FchPat_CP"                            // Code postal
#define m_DOSS_IDENT_VILLE           "FchPat_Ville"                         // Ville
#define m_DOSS_IDENT_CEDEX           "FchPat_Cdx"                           // cedex
#define m_DOSS_IDENT_PAYS            "FchPat_Pays"                          // pays
#define m_DOSS_IDENT_TEL1            "FchPat_Tel1"                          // Telephone 1
#define m_DOSS_IDENT_TEL1_TYP        "FchPat_Tel1_Typ"                      // Telephone 1  type (parent amis etc...)
#define m_DOSS_IDENT_TEL2            "FchPat_Tel2"                          // Telephone 2
#define m_DOSS_IDENT_TEL2_TYP        "FchPat_Tel2_Typ"                      // Telephone 2
#define m_DOSS_IDENT_TEL3            "FchPat_Tel3"                          // Telephone 3
#define m_DOSS_IDENT_TEL3_TYP        "FchPat_Tel3_Typ"                      // Telephone 3
#define m_DOSS_IDENT_EMAIL           "FchPat_Email"                         // Email
#define m_DOSS_IDENT_NUMSS           "FchPat_NumSS"                         // Numero de secu
#define m_DOSS_IDENT_IS_ASS          "FchPat_PatientAss"                    // le patient est il l'assure
#define m_DOSS_IDENT_GEME            "FchPat_Geme"                          // rang gemellaire
#define m_DOSS_IDENT_NOM_ASS         "FchPat_NomAss"                        // nom de l'assure
#define m_DOSS_IDENT_PRENOM_ASS      "FchPat_PrenomAss"                     // prenom de l'assure
#define m_DOSS_IDENT_NSS_ASS         "FchPat_AssNee"                        // date de naissance de l'assure
#define m_DOSS_IDENT_PROF            "FchPat_Profession"                    // profession
#define m_DOSS_IDENT_TITRE           "FchPat_Titre"                         // Titre( Dr Mr Md Pr ...)
#define m_DOSS_IDENT_REF_PK          "FchPat_RefPk"                         // reference a la primary key: DOSS_INDEX_PRIM_KEY de la table: DOSS_INDEX
//........................ fchpat_Note .......................................
#define m_DOSS_NOTE_TBL_NAME         "fchpat_Note"                          // --------  nom de la table de Notes patient --------
#define m_DOSS_NOTE_PK               "fchpat_Note_PK"                       // clef primaire de cet enregistrement
#define m_DOSS_NOTE_PAT_GUID         "fchpat_Note_PatGUID"                  // GUID du dossier auquel l'enregistrement fait reference
#define m_DOSS_NOTE_PAT_PK           "fchpat_Note_PatPK"                    // Clef primaire du dossier auquel fait reference cette note
#define m_DOSS_NOTE_HTML             "fchpat_Note_Html"                     // Donnees HTML de la note
//........................ fchpat_Intervenants ...............................
#define m_DOSS_INTERVENANTS_TBL_NAME "fchpat_Intervenants"                  // --------  nom de la table des intervenants patient --------
#define m_DOSS_INTERVENANTS_PK       "fchpat_Intervenants_PK"               // Clef primaire de cet enregistrement
#define m_DOSS_INTERVENANTS_PAT_GUID "fchpat_Intervenants_PatGUID"          // GUID du dossier auquel l'enregistrement fait reference
#define m_DOSS_INTERVENANTS_PAT_PK   "fchpat_Intervenants_PatPK"            // Clef primaire du dossier: DOSS_INDEX_PRIM_KEY de la table: DOSS_INDEX auquel fait reference cet intervenant
#define m_DOSS_INTERVENANTS_INTERVPK "fchpat_Intervenants_IntervPK"         // Clef primaire de l'intervenant de la table: INTERVENANTS_TBL_NAME  auquel fait reference cet enregistrement
#define m_DOSS_INTERVENANTS_TYPE     "fchpat_Intervenants_Type"             // type d"intervenant
//........................ INTERVENANTS ......................................
#define m_INTERVENANTS_TBL_NAME      "Personnes"                            // --------  nom de la table de l"annuaire des intervenants ( meme que USER_IDENT_TBL_NAME ) --------
#define m_INTERVENANTS_PK            "ID_PrimKey"                           // primary key
#define m_INTERVENANTS_NOM           "Nom"                                  // nom de l'intervenant
#define m_INTERVENANTS_PRENOM        "Prenom"                               // prenom de l'intervenant
#define m_INTERVENANTS_SPEC          "Qualite"                              // specialite de l'intervenant
#define m_INTERVENANTS_TITRE         "Titre"                                // titre de l'intervenant (Dr Pr Mr Mm etc...)
#define m_INTERVENANTS_RUE           "Adresse"                              // rue de l'intervenant
#define m_INTERVENANTS_CODE_POST     "CodePostal"                           // Code postal de l'intervenant
#define m_INTERVENANTS_VILLE         "Ville"                                // Ville de l'intervenant
//........................ cim10_user_favoris ................................
#define m_CIM10_USER_FAV_TBL_NAME    "cim10_user_favoris"                   // nom de la table de l"header des FAVORIS CIM 10
#define m_CIM10_USER_FAV_PK          "PrimKey"                              // clef primaire de l"enregistrement
#define m_CIM10_USER_FAV_USER        "User"                                 // login de l"utilisateur auquel appartiennent les favoris
#define m_CIM10_USER_FAV_DATA        "Data"                                 // donnee des favoris (BLOB)
//........................ RubriquesHead .....................................
#define m_DOSS_RUB_HEAD_TBL_NAME     "RubriquesHead"                        // --------  nom de la table de l"header des RUBRIQUES --------
#define m_DOSS_RUB_HEAD_PRIMKEY      "RbDate_PrimKey"                       // clef primaire de cet enregistrement
#define m_DOSS_RUB_HEAD_GUID         "RbDate_IDDos"                         // GUID du dossier auquel l"enregistrement fait reference
#define m_DOSS_RUB_HEAD_TYPE         "RbDate_TypeRub"                       // Type de rubrique
#define m_DOSS_RUB_HEAD_SUBTYPE      "RbDate_SubTypeRub"                    // sous Type de rubrique (sert notamment pour choisir le modele d"impression)
#define m_DOSS_RUB_HEAD_NOM_DATE     "RbDate_NomDate"                       // Court texte descriptif de l"enregistrement exemple: Entorse de la cheville.
#define m_DOSS_RUB_HEAD_DATE         "RbDate_Date"                          // date de l"enregistrement
#define m_DOSS_RUB_HEAD_USER         "RbDate_CreateUser"                    // utilisateur associe a cette rubrique
#define m_DOSS_RUB_HEAD_SIGN_USER    "RbDate_CreateSignUser"                // utilisateur associe a ce signataire de la rubrique
#define m_DOSS_RUB_HEAD_REF_BLOBS_PK "RbDate_RefBlobs_PrimKey"              // Primary key du blobs rattache a cet enregistrement
#define m_DOSS_RUB_HEAD_FIN          "RbDate_Fin"                           // date de fin de l"enregistrement
#define m_DOSS_RUB_HEAD_DUREE_MOD    "RbDate_DureeMod"                      // duree de vie en modification
#define m_DOSS_RUB_HEAD_REF_DOSS_PK  "RbDate_Ref_NumDoss"                   // Clef primaire du dossier auquel l"enregistrement fait reference (doublon avec m_DOSS_RUB_HEAD_GUID)
#define m_DOSS_RUB_HEAD_PROP_0       "RbDate_Prop_0"                        // Propriete n 0   pour le classement de l"enregistrement dans l"organiseur
#define m_DOSS_RUB_HEAD_PROP_1       "RbDate_Prop_1"                        // Propriete n 1   pour le classement de l"enregistrement dans l"organiseur
#define m_DOSS_RUB_HEAD_PROP_2       "RbDate_Prop_2"                        // Propriete n 2   pour le classement de l"enregistrement dans l"organiseur
#define m_DOSS_RUB_HEAD_PROP_3       "RbDate_Prop_3"                        // Propriete n 3   pour le classement de l"enregistrement dans l"organiseur
#define m_DOSS_RUB_HEAD_PROP_4       "RbDate_Prop_4"                        // Propriete n 4   pour le classement de l"enregistrement dans l"organiseur
//........................ RubriquesBlobs ....................................
#define m_DOSS_RUB_DATA_TBL_NAME     "RubriquesBlobs"                       // --------  nom de la table des donnees des RUBRIQUES ----------------
#define m_DOSS_RUB_DATA_GUID         "RbDate_IDDos"                         // GUID du dossier auquel l"enregistrement fait reference
#define m_DOSS_RUB_DATA_PRIMKEY      "RbDate_PrimKey"                       // clef primaire de cet enregistrement  (le meme que le header)
#define m_DOSS_RUB_DATA_BLOB         "RbDate_DataRub"                       // donnees binaires
//........................ Evnmt_Liens .......................................
#define m_EVNT_LIST_TBL_NAME         "Evnmt_Liens"                          // --------  nom de la table des liens entre documents ----------------
#define m_EVNT_LIST_PK               "Evnmt_Liens_PrimKey"                  // clef primaire
#define m_EVNT_DOSS_PK               "Evnmt_Liens_DossPk"                   // clef primaire du dossier patient duquel depend ce patient
#define m_EVNT_LIST_PERE             "Evnmt_Liens_Pere"                     // clef primaire d"un enr pere de la table DOSS_RUB_HEAD_TBL_NAME
#define m_EVNT_LIST_PKDOC            "Evnmt_Liens_Fils"                     // clef primaire d"un enr fils de la table EVNT_LIST_TBL_NAME
//........................ Evnmt_Liens .......................................
#define m_USER_IDENT_TBL_NAME        "Personnes"                            // --------  nom de la table des utilisateurs du programme ( meme que INTERVENANTS_TBL_NAME )--------
#define m_USER_IDENT_NOM             "Nom"                                  // Nom
#define m_USER_IDENT_PRENOM          "Prenom"                               // Prenom
#define m_USER_IDENT_TITRE           "Titre"                                // Titre( Dr Mr Md Pr ...)
#define m_USER_IDENT_LOGIN           "Login"                                // Identifiant d'utilisateur
#define m_USER_IDENT_PASSWORD        "Password"                             // mot de passe
#define m_USER_IDENT_DROITS          "Droits"                               // Droits de cet utilisateur
#define m_USER_IDENT_SEXE            "Sexe"                                 // Sexe de l'utilisateur (si il y en a un)
#define m_USER_IDENT_NUM_ORDRE       "NumOrdre"                             // Numero d"ordre (si il y en a un)
#define m_USER_IDENT_NUM_RPPS        "NumRPPS"                              // Numero RPPS (si il y en a un)
#define m_USER_IDENT_CLEF_RPPS       "ClefRPPS"                             // Clef RPPS (si il y en a une)
#define m_USER_IDENT_PRIMKEY         "ID_PrimKey"                           // clef primaire de cet enregistrement
#define m_USER_IDENT_GUID            "GUID"                                 // Identifiant unique de cet utilisateur
#define m_USER_IDENT_CONVENTION      "Convention"                           // convention exple "01 MEDECINE GENERALE"
#define m_USER_IDENT_CODE_POST       "CodePostal"                           // Code postal
#define m_USER_IDENT_VILLE           "Ville"                                // Ville d'exercice
#define m_USER_IDENT_RUE             "Adresse"                              // Rue d'exercice
#define m_USER_IDENT_QUALITE         "Qualite"                              // Type d'intervenant (exple: Medecin Urgentiste)
#define m_USER_IDENT_TEL_1               "Tel_1"                            // Tel_1 de cet intervenant
#define m_USER_IDENT_TEL_2               "Tel_2"                            // Tel_2 de cet intervenant
#define m_USER_IDENT_TEL_3               "Tel_3"                            // Tel_3 de cet intervenant
#define m_USER_IDENT_EMAIL               "Email"                            // Email de cet intervenant
#define m_USER_IDENT_NOTE                "Note"                             // note de l'intervenant
#define m_USER_IDENT_CODE_REGIME         "CodeRegime"                       // code regime de l'intervenant
#define m_USER_IDENT_CHER                "Cher"                             // Mention familliere de l'intervenant Cher Ami Cher confrere
#define m_USER_IDENT_TEL_TYPE_1          "Tel_Type1"                        // Tel_1 de cet intervenant
#define m_USER_IDENT_TEL_TYPE_2          "Tel_Type2"                        // Tel_2 de cet intervenant
#define m_USER_IDENT_TEL_TYPE_3          "Tel_Type3"                        // Tel_3 de cet intervenant
#define m_USER_IDENT_TEL_ABR_1           "Tel_Abr_1"                        // Tel_1 de cet intervenant
#define m_USER_IDENT_TEL_ABR_2           "Tel_Abr_2"                        // Tel_2 de cet intervenant
#define m_USER_IDENT_TEL_ABR_3           "Tel_Abr_3"                        // Tel_3 de cet intervenant
//........................ UserDoc ...........................................
#define m_USER_DATA_TBL_NAME         "UserDoc"                              // --------  nom de la table des donnees des documents de parametrage Utilisateur --------
#define m_USER_DATA_PK               "ID_PrimKey"                           // clef primaire de cet enregistrement
#define m_USER_DATA_REF_PK           "ID_PrimKeyFromUser"                   // Ref e la clef primaire de l'utilisateur auquel appartiennent les donnees
#define m_USER_DATA_NAMEDOC          "NameDoc"                              // nom des donnees
#define m_USER_DATA_TYPE             "TypeDocuments"                        // type de donnees
#define m_USER_DATA_BLOB             "DataDocuments"                        // donnees proprement dites
//................. VERROU ...................................................
#define m_VERROU_TBL_NAME        "Verrous"                                  // nom de la table des donnees des verrous
#define m_VERROU_PK              "Pk"                                       // clef primaire de cet enregistrement
#define m_VERROU_DOSS_PK         "DossPk"                                   // Ref e la clef primaire du dosssier verrouille
#define m_VERROU_DOSS_GUID       "DossGUID"                                 // GUID du dossier verrouille
#define m_VERROU_RUB_NAME        "RubName"                                  // Nom de la rubrique verrouillee
#define m_VERROU_RUB_PK          "RubPk"                                    // PK du header de rubrique verrouille
#define m_VERROU_USER_NAME       "UserName"                                 // utilisateur ayant verrouille les donnees
#define m_VERROU_SIGN_USER_NAME  "SignUserName"                             // utilisateur ayant verrouille les donnees
#define m_VERROU_DATE_TIME       "StartTime"          // date de verrouillage des donnees
//................. USER_PERMS ............................
#define m_USER_PERMS_TBL_NAME      "user_perms"              // nom de la table des droits des utilisateurs non prescripteurs
#define m_USER_PERMS_PK            "PrimKey"                 // clef primaire de cet enregistrement
#define m_USER_PERMS_SIGN_GUID     "SignataireGUID"          // Ref au GUID du signataire autorisant cet utilisateur
#define m_USER_PERMS_FRIEND_GUID   "FriendUserGUID"          // GUID de cet utilisateur
#define m_USER_PERMS_FRIEND_DROITS "FriendUserDroits"        // Droits que le signataire attribue à cet utilisateur
#define m_USER_PERMS_FRIEND_BLOBS  "FriendUserBlobs"         // Configuration des autorisations fines (liste des fichiers autorisés avec les droits)
//.................  CODES_POSTAUX_TBL_NAME ..........................
#define m_CODES_POSTAUX_TBL_NAME           "codes_postaux"           // nom de la table des codes postaux
#define m_AGENDA_MASK_TBL_NAME             "Agenda_Mask"             // table des masques agenda
#define m_AGENDA_TBL_NAME                  "agenda"                  // table de l"agenda
#define m_AGENDA_COLOR_PROFILS_TBL_NAME    "color_profils"           // table des couleurs de profils agenda
#define m_VERSION_TBL_NAME                 "version"                 // table des versions du programme
//.................  GLOBAL_SETTINGS ..........................
#define m_GLOBAL_SETTINGS_TBL_NAME       "global_settings"           // nom de la table parametres globaux
#define m_GLOBAL_SETTINGS_PK             "global_settings_Pk"        // clef primaire
#define m_GLOBAL_SETTINGS_SECTION        "global_settings_Section"   // chapms des sections
#define m_GLOBAL_SETTINGS_KEY            "global_settings_Key"       // champs des clefs
#define m_GLOBAL_SETTINGS_VALUE          "global_settings_Value"     // champs des valeurs

