// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cacatua.h"
#include "Modules/ModuleManager.h"

#include "CacatuaLogChannels.h"

class FCacatuaModule : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
		//UE_LOG(LogTemp, Log, TEXT("Hello World"));
		UE_LOG(LogCacatua, Log, TEXT("Hello World"));
	}

	virtual void ShutdownModule() override
	{

	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FCacatuaModule, Cacatua, "Cacatua" );
