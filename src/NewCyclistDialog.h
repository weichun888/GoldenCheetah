/*
 * Copyright (c) 2011 Mark Liversedge (liversedge@gmail.com)
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _NewCyclistDialog_h
#define _NewCyclistDialog_h

#include "GoldenCheetah.h"
#include "MainWindow.h"
#include "Units.h"
#include "Settings.h"

class NewCyclistDialog : public QDialog
{
    Q_OBJECT

    public:
        NewCyclistDialog(QDir);

        QDir home;
        QLineEdit *name;

    public slots:
        void chooseAvatar();
        void unitChanged(int);
        void saveClicked();
        void cancelClicked();

    private:
        MainWindow *mainWindow;
        bool useMetricUnits;
        QDateEdit *dob;
        QComboBox *sex;
        QLabel *weightlabel;
        QComboBox *unitCombo;
        QSpinBox *cp, *lthr, *resthr, *maxhr; // mandatory non-zero, default from age
        QDoubleSpinBox *weight;
        QTextEdit  *bio;
        QPushButton *avatarButton;
        QPixmap     avatar;

        QPushButton *cancel, *save;
};

#endif
