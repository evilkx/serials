/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp common.xml -c commonAdaptor -a commonAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "commonAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class commonAdaptor
 */

commonAdaptor::commonAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

commonAdaptor::~commonAdaptor()
{
    // destructor
}

void commonAdaptor::Dbus_wSettings(const QString &path)
{
    // handle method call org.freedesktop.common.Dbus_wSettings
    QMetaObject::invokeMethod(parent(), "Dbus_wSettings", Q_ARG(QString, path));
}

void commonAdaptor::Dbus_wSettings_setValue(const QString &key, const QDBusVariant &value)
{
    // handle method call org.freedesktop.common.Dbus_wSettings_setValue
    QMetaObject::invokeMethod(parent(), "Dbus_wSettings_setValue", Q_ARG(QString, key), Q_ARG(QDBusVariant, value));
}

QDBusVariant commonAdaptor::Dbus_wSettings_value(const QString &key)
{
    // handle method call org.freedesktop.common.Dbus_wSettings_value
    QDBusVariant value;
    QMetaObject::invokeMethod(parent(), "Dbus_wSettings_value", Q_RETURN_ARG(QDBusVariant, value), Q_ARG(QString, key));
    return value;
}

