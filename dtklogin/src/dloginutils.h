// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#pragma once
#include "namespace.h"
#include <qstring.h>
#include "dlogintypes_p.h"
#include "dlogintypes.h"
#include <ostream>

DLOGIN_BEGIN_NAMESPACE

namespace Utils {
QString decodeBehavior(int behavior);
int encodeBehavior(const QString &behavior);
QString modeToString(const InhibitMode &mode);
InhibitMode stringToMode(const QString &strMode);
DBusInhibitor inhibitorToDBus(const Inhibitor &inhibitor);
Inhibitor inhibitorFromDBus(const DBusInhibitor &inhibitorDBus);
QString statusToString(const ExecuteStatus &status);
ExecuteStatus stringToStatus(const QString &strStatus);
QString sessionRoleToString(const SessionRole &sessionRole);
SessionRole stringToSessionRole(const QString &strSessionRole);
PowerAction stringToAction(const QString &strAction);
QString actionToString(const PowerAction &action);
QString shutdownTypeToString(const ShutdownType &type);
ShutdownType stringToShutdownType(const QString &strType);
QString sessionClassToString(const SessionClass &sessionClass);
SessionClass stringToSessionClass(const QString &strClass);
QString sessionTypeToString(const SessionType &sessionType);
SessionType stringToSessionType(const QString &strType);
QString sessionStateToString(const SessionState &sessionState);
SessionState stringToSessionState(const QString &strState);
QString userStateToString(const UserState &userState);
UserState stringToUserState(const QString &strState);

}  // namespace Utils

std::ostream &operator<<(std::ostream &os, const QString &str);
std::ostream &operator<<(std::ostream &os, const QStringList &strList);
DLOGIN_END_NAMESPACE
