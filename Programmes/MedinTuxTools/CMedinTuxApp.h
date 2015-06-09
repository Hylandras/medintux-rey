/************************************** CMedinTuxApp.h ****************************
 *                                                                                *
 *   #include "CMedinTuxApp.h"                                                    *
 *   Project: MedinTux                                                            *
 *   Copyright (C) 2003 2004 2005 by Sevin Roland  and Data Medical Design        *
 *   E-Mail: data.medical.design@club-internet.fr                                 *
 *                                                                                *
 *   This program is free software; you can redistribute it and/or modify         *
 *   it under the terms of the CeCILL Version 1 du 21/06/2004                     *
 *   License (GPL compatible)                                                     *
 *                              http://www.cecill.info/                           *
 *   as published by :                                                            *
 *                                                                                *
 *   Commissariat à l'Energie Atomique                                            *
 *   - CEA,                                                                       *
 *                            31-33 rue de la Fédération, 75752 PARIS cedex 15.   *
 *                            FRANCE                                              *
 *   Centre National de la Recherche Scientifique                                 *
 *   - CNRS,                                                                      *
 *                            3 rue Michel-Ange, 75794 Paris cedex 16.            *
 *                            FRANCE                                              *
 *   Institut National de Recherche en Informatique et en Automatique             *
 *   - INRIA,                                                                     *
 *                            Domaine de Voluceau, Rocquencourt, BP 105, 78153    *
 *                            FRANCE                                              *
 *                                                                                *
 *         This program is distributed in the hope that it will be useful,        *
 *         but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *         MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                   *
 *         CeCILL  License (GPL compatible) for more details.                     *
 *                                                                                *
 **********************************************************************************/
#ifndef MEDIN_TUX_APP_H
#define MEDIN_TUX_APP_H

#include <qapplication.h>
#include "CGestIni.h"


//............................................. quelques définitions ..........................................................
class QString;


//================================================= CMedinTuxApp ==============================================================
class CMedinTuxApp : public QApplication ,        public CGestIni
{

   Q_OBJECT

public:
    CMedinTuxApp(const QString &appName, int & argc, char ** argv);
    CMedinTuxApp(int & argc, char ** argv);
    int  GotoDebug();
    void initialize( bool activate = TRUE );

public slots:
    bool sendMessage( const QString &message, int timeout = 5000 );
    virtual void activateMainWidget();

signals:
    void messageReceived( const QString& message );

public:
    QString m_PathAppli;
    QString m_NameAppli;
    QString m_PathIni;         /*!< Chemin vers le fichier gest_user.ini */
    QString m_DataParam;       /*!< parametres de configuration de gest_user */

    //~CMedinTuxApp();
};



extern CMedinTuxApp* Global_pCMedinTuxApp;
#define G_pCMDTuxApp Global_pCMedinTuxApp
#endif

