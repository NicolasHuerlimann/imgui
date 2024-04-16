#include "imgui_setup.h"

ImFont* openSansS;
ImFont* openSansBoldS;
ImFont* openSansM;
ImFont* openSansBoldM;
ImFont* openSansL;
ImFont* openSansBoldL;

void ImGui::SetupImGui()
{
    openSansS = ImGui::GetIO().Fonts->AddFontFromFileTTF(".\\fonts\\OpenSans-Regular.ttf",
        20.0f, NULL, ImGui::GetIO().Fonts->GetGlyphRangesDefault());

    openSansM = ImGui::GetIO().Fonts->AddFontFromFileTTF(".\\fonts\\OpenSans-Regular.ttf",
        30.0f, NULL, ImGui::GetIO().Fonts->GetGlyphRangesDefault());

    openSansL = ImGui::GetIO().Fonts->AddFontFromFileTTF(".\\fonts\\OpenSans-Regular.ttf",
        40.0f, NULL, ImGui::GetIO().Fonts->GetGlyphRangesDefault());

    openSansBoldS = ImGui::GetIO().Fonts->AddFontFromFileTTF(".\\fonts\\OpenSans-Bold.ttf",
        20.0f, NULL, ImGui::GetIO().Fonts->GetGlyphRangesDefault());

    openSansBoldM = ImGui::GetIO().Fonts->AddFontFromFileTTF(".\\fonts\\OpenSans-Bold.ttf",
        30.0f, NULL, ImGui::GetIO().Fonts->GetGlyphRangesDefault());

    openSansBoldL = ImGui::GetIO().Fonts->AddFontFromFileTTF(".\\fonts\\OpenSans-Bold.ttf",
        40.0f, NULL, ImGui::GetIO().Fonts->GetGlyphRangesDefault());


    ImGui::GetIO().Fonts->Build();
}
