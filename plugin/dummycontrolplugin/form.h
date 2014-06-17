/**
 * @licence app begin@
 * Copyright (C) 2011-2012  BMW AG
 *
 * This file is part of GENIVI Project Dlt Viewer.
 *
 * Contributions are licensed to the GENIVI Alliance under one or more
 * Contribution License Agreements.
 *
 * \copyright
 * This Source Code Form is subject to the terms of the
 * Mozilla Public License, v. 2.0. If a  copy of the MPL was not distributed with
 * this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * \file form.h
 * For further information see http://www.genivi.org/.
 * @licence end@
 */

#ifndef FORM_H
#define FORM_H

#include <QWidget>

class DummyControlPlugin;

namespace Ui {
    class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(DummyControlPlugin *_plugin, QWidget *parent = 0);
    ~Form();

    void setConnections(QStringList list);
    void autoscrollStateChanged(bool enabled);

private:
    Ui::Form *ui;
    DummyControlPlugin *plugin;

private slots:
    void on_pushButton_clicked();
    void on_pushButtonJumpTo_clicked();
    void on_pushButtonClearFile_clicked();
    void on_pushButtonNewFile_clicked();
    void on_pushButtonQuit_clicked();
    void on_pushButtonOpenFile_clicked();
    void on_pushButtonSaveAsFile_clicked();
    void on_pushButtonMarker_clicked();
    void on_pushButtonConnect_clicked();
    void on_pushButtonDisconnect_clicked();
};

#endif // FORM_H
