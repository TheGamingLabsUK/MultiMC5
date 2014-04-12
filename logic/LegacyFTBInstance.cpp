#include "LegacyFTBInstance.h"

LegacyFTBInstance::LegacyFTBInstance(const QString &rootDir, SettingsObject *settings, QObject *parent) :
	LegacyInstance(rootDir, settings, parent)
{
}

QString LegacyFTBInstance::getStatusbarDescription()
{
	if (flags().contains(VersionBrokenFlag))
	{
		return "Legacy FTB: " + intendedVersionId() + " (broken)";
	}
	return "Legacy FTB: " + intendedVersionId();
}

bool LegacyFTBInstance::menuActionEnabled(QString action_name) const
{
	Q_UNUSED(action_name);

	return false;
}

QString LegacyFTBInstance::id() const
{
	return "FTB/" + BaseInstance::id();
}
