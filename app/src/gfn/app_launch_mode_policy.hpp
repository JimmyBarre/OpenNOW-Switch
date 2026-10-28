#pragma once

namespace opennow::gfn
{

// CloudMatch launch mode sent with the web-client identity. The browser
// client sends 1; 2 (gamepad-friendly console experience) was only ever
// validated with the legacy NATIVE identity that CloudMatch now maps to a
// classic RTSP streamer.
inline constexpr int ConsoleAppLaunchModeWireValue()
{
    return 1;
}

} // namespace opennow::gfn
