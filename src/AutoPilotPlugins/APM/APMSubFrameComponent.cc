/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/


/// @file
///     @author Don Gagne <don@thegagnes.com>
///     @author Jacob Walser <jwalser90@gmail.com>

#include "APMSubFrameComponent.h"
#include "QGCQmlWidgetHolder.h"
#include "APMAutoPilotPlugin.h"
#include "APMAirframeComponent.h"

APMSubFrameComponent::APMSubFrameComponent(Vehicle* vehicle, AutoPilotPlugin* autopilot, QObject* parent)
    : VehicleComponent(vehicle, autopilot, parent)
    , _name(tr("Frame"))
{
}

QString APMSubFrameComponent::name(void) const
{
    return _name;
}

QString APMSubFrameComponent::description(void) const
{
    return tr("Frame setup allows you to choose your vehicle's motor configuration. Install clockwise" \
              "\npropellers on the green thrusters and counter-clockwise propellers on the blue thrusters" \
              "\n(or vice-versa). The flight controller will need to be rebooted to apply changes.");
}

QString APMSubFrameComponent::iconResource(void) const
{
    return QStringLiteral("/qmlimages/BROV2FrameIcon.svg");
}

bool APMSubFrameComponent::requiresSetup(void) const
{
    return false;
}

bool APMSubFrameComponent::setupComplete(void) const
{
    return true;
}

QStringList APMSubFrameComponent::setupCompleteChangedTriggerList(void) const
{
    return QStringList();
}

QUrl APMSubFrameComponent::setupSource(void) const
{
    return QUrl::fromUserInput(QStringLiteral("qrc:/qml/APMSubFrameComponent.qml"));
}

QUrl APMSubFrameComponent::summaryQmlSource(void) const
{
    return QUrl::fromUserInput(QStringLiteral("qrc:/qml/APMSubFrameComponentSummary.qml"));
}
