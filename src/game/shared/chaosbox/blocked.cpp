#include "cbase.h"
#include "../client/clientsteamcontext.h"
#define elif else if // I write in shell so this'll be good

const tchar* GetProcessorArchName()
{
#if defined( __x86_64__) || defined(_M_X64)
    return "amd64";
#elif defined(__i386__) || defined(_X86_) || defined(_M_IX86)
    return "i386";
#elif defined __aarch64__
    return "aarch64";
#elif defined __arm__ || defined _M_ARM
    return "arm";
#else
    return "Unknown architecture";
#endif
}

const tchar* GetPlatformName()
{
#ifdef LINUX	
    return "Linux";
#elif WIN32
    return "Windows";
#elif OSX
    return "MacOS";
#else
    return "Unknown Platform"
#endif
}

void hoebag(void)
{
    Color orange(128, 0, 128, 255); // L, not orange

    ConColorMsg(orange, "        @@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    ConColorMsg(orange, "  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    ConColorMsg(orange, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    ConColorMsg(orange, "@@@@@@@        @@@@@@@@@@@@@@@@@@@@@@@@\n");
    ConColorMsg(orange, " @@                @@@@@@@@@@@@@@@@@@@@\n");
    ConColorMsg(orange, "                      @@@@@@@@@@@@@@@@@\n");
    Msg("   @@@@@@@@@@@@@");
    ConColorMsg(orange, "        @@@@@@@@@@@@@@ \n");
    Msg("  @@@@@@@@@@@@@@@@");
    ConColorMsg(orange, "       @@@@@@@@@@@@@ \n");
    Msg(" @@@@@@@   @@@@@@@@");
    ConColorMsg(orange, "       @@@@@@@@@@@  \n");
    Msg(" @@@@@@@     @@@@@@");
    ConColorMsg(orange, "        @@@@@@@@@   \n");
    Msg(" @@@@@@@@@@@@@@@");
    ConColorMsg(orange, "           @@@@@@@@    \n");
    Msg("  @@@@@@@@@@@@@@@@");
    ConColorMsg(orange, "          @@@@@@     \n");
    Msg("     @@@@@@@@@@@@@@");
    ConColorMsg(orange, "         @@@@@@     \n");
    Msg("@@@@@@      @@@@@@@@");
    ConColorMsg(orange, "       @@@@@@      \n");
    Msg(" @@@@@@      @@@@@@");
    ConColorMsg(orange, "        @@@@@       \n");
    Msg(" @@@@@@@@@@@@@@@@@@");
    ConColorMsg(orange, "       @@@@@        \n");
    Msg("   @@@@@@@@@@@@@@");
    ConColorMsg(orange, "        @@@@@@        \n");
    Msg("       @@@@@@");
    ConColorMsg(orange, "           @@@@@@         \n");
    ConColorMsg(orange, "                      @@@@@@           \n");
    ConColorMsg(orange, "                     @@@@@@            \n");
    ConColorMsg(orange, "                       @@@             \n\n");
    Msg("Engine: Source (2013)\n");
    Msg("Platform: %s\n", GetPlatformName());
    Msg("Architecture: %s\n", GetProcessorArchName()), "(if its i386 its because steam runs on x86 iirc)";
    Msg("Game: Chaos Sandbox\n");
}

ConCommand neofetch("neofetch", hoebag, "");

// Blocking's begin
void fucker(uint64 steamid)
{
    if (steamapicontext->SteamUser()->GetSteamID().ConvertToUint64() == 76561199194575485)
    {
        Error("Engine Error: STOP TALKING");
    }

    elif(steamapicontext->SteamUser()->GetSteamID().ConvertToUint64() == 76561199507821217)
    {
        Error("STOP TALKING SHIT ABOUT MY MOD");
    }

    elif(steamapicontext->SteamUser()->GetSteamID().ConvertToUint64() == 76561199500159028)
   {
       Error("STOP TALKING SHIT ABOUT MY MOD");
    }

    elif(steamapicontext->SteamUser()->GetSteamID().ConvertToUint64() == 76561199560025992)
    {
        Error("STOP TALKING SHIT ABOUT MY MOD");
    }

    elif(steamapicontext->SteamUser()->GetSteamID().ConvertToUint64() == 76561198181186429)
    {
        Error("STOP TALKING SHIT ABOUT MY MOD");
    }

    elif(steamapicontext->SteamUser()->GetSteamID().ConvertToUint64() == 76561198439239233)
    {
        for (int i = 0; i < 200000000000000000; ++i) {
            Error("FUCK OFF YOU FAGGOT WITH NO FUCKING LIFE I HOPE YOUR COUNTRY FAILS #FREEPALESTINE YOU GAY FAGGOT");
        }
    }
}