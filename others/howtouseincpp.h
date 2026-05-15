#pragma once
#include <Windows.h>
#include <winhttp.h>
#include <string>
#include <unordered_map>
#include "../memory/memory.h"

#pragma comment(lib, "winhttp.lib")
// call offsets::fetch::load() and ur all good
// moon auto updater
namespace offsets {
    namespace Attribute {
        inline uintptr_t InstanceAttributePointer1 = 0x48;
        inline uintptr_t InstanceAttributePointer2 = 0x18;
        inline uintptr_t AttributeToNext = 0x58;
        inline uintptr_t AttributeToValue = 0x18;
    }

    namespace VisualEngine {
        inline uintptr_t ViewMatrix = 0x0;
        inline uintptr_t RenderView = 0x0;
        inline uintptr_t Pointer = 0x0;
        inline uintptr_t FakeDataModel = 0x0;
    }
    
    namespace DataModel {
        inline uintptr_t PlaceId = 0x0;
        inline uintptr_t GameId = 0x0;
        inline uintptr_t GameLoaded = 0x0;
        inline uintptr_t CreatorId = 0x0;
        inline uintptr_t Workspace = 0x0;
        inline uintptr_t ServerIP = 0x0;
        inline uintptr_t ScriptContext = 0x0;
        inline uintptr_t JobId = 0x0;
    }

    namespace Instance {
        inline uintptr_t Parent = 0x0;
        inline uintptr_t ClassDescriptor = 0x0;
        inline uintptr_t ChildrenStart = 0x0;
        inline uintptr_t ChildrenEnd = 0x0;
        inline uintptr_t Name = 0x0;
        inline uintptr_t ClassName = 0x0;
    }

    namespace Player {
        inline uintptr_t LocalPlayer = 0x0;
        inline uintptr_t ModelInstance = 0x0;
        inline uintptr_t UserId = 0x0;
        inline uintptr_t DisplayName = 0x0;
        inline uintptr_t TeamColor = 0x0;
        inline uintptr_t Team = 0x0;
        inline uintptr_t CameraMaxZoomDist = 0x0;
        inline uintptr_t CameraMinZoomDist = 0x0;
    }

    namespace BasePart {
        inline uintptr_t Primitive = 0x0;
        inline uintptr_t Reflectance = 0x0;
        inline uintptr_t Color3 = 0x0;
        inline uintptr_t Transparency = 0x0;
        inline uintptr_t CastShadow = 0x0;
        inline uintptr_t Locked = 0x0;
        inline uintptr_t Massless = 0x0;
    }

    namespace Primitive {
        inline uintptr_t Position = 0x0;
        inline uintptr_t CFrame = 0x0;
        inline uintptr_t Size = 0x0;
        inline uintptr_t AssemblyLinearVelocity = 0x0;
        inline uintptr_t AssemblyAngularVelocity = 0x0;
        inline uintptr_t Material = 0x0;
        inline uintptr_t Shape = 0x0;
        inline uintptr_t PrimitiveFlags = 0x0;
        inline uintptr_t Owner = 0x0;
    }

    namespace Humanoid {
        inline uintptr_t CameraOffset = 0x0;
        inline uintptr_t UseJumpPower = 0x0;
        inline uintptr_t AutoJumpEnabled = 0x0;
        inline uintptr_t Health = 0x0;
        inline uintptr_t MaxHealth = 0x0;
        inline uintptr_t WalkSpeed = 0x0;
        inline uintptr_t WalkSpeedCheck = 0x0;
        inline uintptr_t JumpPower = 0x0;
        inline uintptr_t JumpHeight = 0x0;
        inline uintptr_t HipHeight = 0x0;
        inline uintptr_t HealthDisplayDistance = 0x0;
        inline uintptr_t MaxSlopeAngle = 0x0;
        inline uintptr_t NameDisplayDistance = 0x0;
        inline uintptr_t WalkToPoint = 0x0;
        inline uintptr_t WalkTimer = 0x0;
        inline uintptr_t WalkToPart = 0x0;
        inline uintptr_t AutoRotate = 0x0;
        inline uintptr_t Sit = 0x0;
        inline uintptr_t BreakJointsOnDeath = 0x0;
        inline uintptr_t RequiresNeck = 0x0;
        inline uintptr_t EvaluateStateMachine = 0x0;
        inline uintptr_t RigType = 0x0;
        inline uintptr_t TargetPoint = 0x0;
        inline uintptr_t HumanoidState = 0x0;
        inline uintptr_t HumanoidStateID = 0x0;
    }

    namespace Lighting {
        inline uintptr_t ClockTime = 0x0;
        inline uintptr_t Brightness = 0x0;
        inline uintptr_t Ambient = 0x0;
        inline uintptr_t EnvironmentDiffuseScale = 0x0;
        inline uintptr_t EnvironmentSpecularScale = 0x0;
        inline uintptr_t OutdoorAmbient = 0x0;
        inline uintptr_t ColorShift_Bottom = 0x0;
        inline uintptr_t ColorShift_Top = 0x0;
        inline uintptr_t ShadowSoftness = 0x0;
    }

    namespace LightingParameters {
        inline uintptr_t GeographicLatitude = 0x0;
        inline uintptr_t LightColor = 0x0;
    }

    namespace World {
        inline uintptr_t FallenPartsDestroyHeight = 0x0;
        inline uintptr_t Gravity = 0x0;
        inline uintptr_t WorldStepPerSec = 0x0;
        inline uintptr_t Primitives = 0x0;
    }
    
    namespace Workspace {
        inline uintptr_t World = 0x0;
        inline uintptr_t ReadOnlyGravity = 0x0;
        inline uintptr_t CurrentCamera = 0x0;
    }

    namespace VectorForce {
        inline uintptr_t ApplyAtCenterOfMass = 0x0;
        inline uintptr_t Force = 0x0;
        inline uintptr_t RelativeTo = 0x0;
    }

    namespace DragDetector {
        inline uintptr_t Enabled = 0x0;
        inline uintptr_t RunLocally = 0x0;
        inline uintptr_t MaxDragTranslation = 0x0;
        inline uintptr_t MinDragTranslation = 0x0;
        inline uintptr_t MaxForce = 0x0;
        inline uintptr_t Responsiveness = 0x0;
        inline uintptr_t DragStyle = 0x0;
    }

    namespace Terrain {
        inline uintptr_t WaterColor = 0x0;
        inline uintptr_t WaterReflectance = 0x0;
        inline uintptr_t WaterTransparency = 0x0;
        inline uintptr_t WaterWaveSize = 0x0;
        inline uintptr_t WaterWaveSpeed = 0x0;
        inline uintptr_t GrassLength = 0x0;
    }

    namespace FFlag {
        inline uintptr_t PhysicsSenderMaxBandwidthBps = 0x0;
        inline uintptr_t TaskSchedulerTargetFps = 0x0;
        inline uintptr_t DebugDisableTimeoutDisconnect = 0x0;
        inline uintptr_t WebSocketServiceEnableClientCreation = 0x0;
        inline uintptr_t EnableLoadModule = 0x0;
        inline uintptr_t DebugSkyGray = 0x0;
        inline uintptr_t PartyPlayerInactivityTimeoutInSeconds = 0x0;
    }

    namespace Camera {
        inline uintptr_t DiagonalFieldOfView = 0x0;
        inline uintptr_t MaxAxisFieldOfView = 0x0;
        inline uintptr_t FieldOfView = 0x0;
        inline uintptr_t Position = 0x0;
        inline uintptr_t CFrame = 0x0;
        inline uintptr_t ViewportInt16 = 0x0;
        inline uintptr_t ViewportSize = 0x0;
        inline uintptr_t CameraSubject = 0x0;
        inline uintptr_t CameraType = 0x0;
    }
    
    namespace Script {
        inline uintptr_t RequireBypass = 0x0;
    }
    
    namespace Players {
        inline uintptr_t RespawnTime = 0x0;
    }

    namespace Model {
        inline uintptr_t PrimaryPart = 0x0;
        inline uintptr_t Scale = 0x0;
    }
    
    namespace Tool {
        inline uintptr_t CanBeDropped = 0x0;
        inline uintptr_t Enabled = 0x0;
        inline uintptr_t ManualActivationOnly = 0x0;
        inline uintptr_t RequiresHandle = 0x0;
        inline uintptr_t Tooltip = 0x0;
        inline uintptr_t Grip = 0x0;
        inline uintptr_t GripRight = 0x0;
        inline uintptr_t GripUp = 0x0;
        inline uintptr_t GripForward = 0x0;
        inline uintptr_t GripPos = 0x0;
    }

    namespace ProximityPrompt {
        inline uintptr_t ActionText = 0x0;
        inline uintptr_t ObjectText = 0x0;
        inline uintptr_t HoldDuration = 0x0;
        inline uintptr_t MaxActivationDistance = 0x0;
        inline uintptr_t KeyboardKeyCode = 0x0;
        inline uintptr_t Enabled = 0x0;
        inline uintptr_t RequiresLineOfSight = 0x0;
    }
    
    namespace ClickDetector {
        inline uintptr_t MaxActivationDistance = 0x0;
    }

    namespace Misc {
        inline uintptr_t Value = 0x0;
        inline uintptr_t StatsItemValue = 0x0;
    }

    namespace PrimitiveFlags {
        inline uintptr_t Anchored = 0x0;
        inline uintptr_t CanCollide = 0x0;
        inline uintptr_t CanTouch = 0x0;
        inline uintptr_t CanQuery = 0x0;
    }

    namespace FakeDataModel {
        inline uintptr_t Pointer = 0x0;
        inline uintptr_t RealDataModel = 0x0;
    }

    namespace GuiObject {
        inline uintptr_t Visible = 0x0;
        inline uintptr_t ZIndex = 0x0;
        inline uintptr_t BackgroundColor3 = 0x0;
        inline uintptr_t BackgroundTransparency = 0x0;
        inline uintptr_t BorderSizePixel = 0x0;
    }

    namespace TextLabel {
        inline uintptr_t Text = 0x0;
        inline uintptr_t TextColor3 = 0x0;
        inline uintptr_t TextSize = 0x0;
        inline uintptr_t TextTransparency = 0x0;
    }

    namespace Attachment {
        inline uintptr_t WorldCFrame = 0x0;
        inline uintptr_t WorldAxis = 0x0;
        inline uintptr_t WorldSecondaryAxis = 0x0;
        inline uintptr_t WorldPosition = 0x0;
    }

    namespace Sound {
        inline uintptr_t SoundId = 0x0;
        inline uintptr_t Volume = 0x0;
        inline uintptr_t PlaybackSpeed = 0x0;
        inline uintptr_t Looped = 0x0;
        inline uintptr_t LoopRegion = 0x0;
        inline uintptr_t PlaybackRegion = 0x0;
    }

    namespace BodyVelocity {
        inline uintptr_t MaxForce = 0x0;
        inline uintptr_t Velocity = 0x0;
        inline uintptr_t P = 0x0;
    }
    
    namespace LinearVelocity {
        inline uintptr_t MaxForce = 0x0;
        inline uintptr_t VectorVelocity = 0x0;
    }
    
    namespace ModuleScript {
        inline uintptr_t Bytecode = 0x0;
        inline uintptr_t Hash = 0x0;
    }
    
    namespace LocalScript {
        inline uintptr_t Bytecode = 0x0;
    }

    namespace Bytecode {
        inline uintptr_t Size = 0x0;
        inline uintptr_t Pointer = 0x0;
    }

    namespace fetch {
        using OffsetMap = std::unordered_map<std::string, std::unordered_map<std::string, uintptr_t*>>;

        inline OffsetMap buildMap() {
            return {
                { "VisualEngine", {
                    { "ViewMatrix",    &VisualEngine::ViewMatrix },
                    { "RenderView",    &VisualEngine::RenderView },
                    { "Pointer",       &VisualEngine::Pointer },
                    { "FakeDataModel", &VisualEngine::FakeDataModel },
                }},
                { "DataModel", {
                    { "PlaceId",       &DataModel::PlaceId },
                    { "GameId",        &DataModel::GameId },
                    { "GameLoaded",    &DataModel::GameLoaded },
                    { "CreatorId",     &DataModel::CreatorId },
                    { "Workspace",     &DataModel::Workspace },
                    { "ServerIP",      &DataModel::ServerIP },
                    { "ScriptContext", &DataModel::ScriptContext },
                    { "JobId",         &DataModel::JobId },
                }},
                { "Instance", {
                    { "Parent",          &Instance::Parent },
                    { "ClassDescriptor", &Instance::ClassDescriptor },
                    { "ChildrenStart",   &Instance::ChildrenStart },
                    { "ChildrenEnd",     &Instance::ChildrenEnd },
                    { "Name",            &Instance::Name },
                    { "ClassName",       &Instance::ClassName },
                }},
                { "Player", {
                    { "LocalPlayer",       &Player::LocalPlayer },
                    { "ModelInstance",     &Player::ModelInstance },
                    { "UserId",            &Player::UserId },
                    { "DisplayName",       &Player::DisplayName },
                    { "TeamColor",         &Player::TeamColor },
                    { "Team",              &Player::Team },
                    { "CameraMaxZoomDist", &Player::CameraMaxZoomDist },
                    { "CameraMinZoomDist", &Player::CameraMinZoomDist },
                }},
                { "BasePart", {
                    { "Primitive",    &BasePart::Primitive },
                    { "Reflectance",  &BasePart::Reflectance },
                    { "Color3",       &BasePart::Color3 },
                    { "Transparency", &BasePart::Transparency },
                    { "CastShadow",   &BasePart::CastShadow },
                    { "Locked",       &BasePart::Locked },
                    { "Massless",     &BasePart::Massless },
                }},
                { "Primitive", {
                    { "Position",                &Primitive::Position },
                    { "CFrame",                  &Primitive::CFrame },
                    { "Size",                    &Primitive::Size },
                    { "AssemblyLinearVelocity",  &Primitive::AssemblyLinearVelocity },
                    { "AssemblyAngularVelocity", &Primitive::AssemblyAngularVelocity },
                    { "Material",                &Primitive::Material },
                    { "Shape",                   &Primitive::Shape },
                    { "PrimitiveFlags",          &Primitive::PrimitiveFlags },
                    { "Owner",                   &Primitive::Owner },
                }},
                { "Humanoid", {
                    { "CameraOffset",          &Humanoid::CameraOffset },
                    { "UseJumpPower",          &Humanoid::UseJumpPower },
                    { "AutoJumpEnabled",       &Humanoid::AutoJumpEnabled },
                    { "Health",                &Humanoid::Health },
                    { "MaxHealth",             &Humanoid::MaxHealth },
                    { "WalkSpeed",             &Humanoid::WalkSpeed },
                    { "WalkSpeedCheck",        &Humanoid::WalkSpeedCheck },
                    { "JumpPower",             &Humanoid::JumpPower },
                    { "JumpHeight",            &Humanoid::JumpHeight },
                    { "HipHeight",             &Humanoid::HipHeight },
                    { "HealthDisplayDistance", &Humanoid::HealthDisplayDistance },
                    { "MaxSlopeAngle",         &Humanoid::MaxSlopeAngle },
                    { "NameDisplayDistance",   &Humanoid::NameDisplayDistance },
                    { "WalkToPoint",           &Humanoid::WalkToPoint },
                    { "WalkTimer",             &Humanoid::WalkTimer },
                    { "WalkToPart",            &Humanoid::WalkToPart },
                    { "AutoRotate",            &Humanoid::AutoRotate },
                    { "Sit",                   &Humanoid::Sit },
                    { "BreakJointsOnDeath",    &Humanoid::BreakJointsOnDeath },
                    { "RequiresNeck",          &Humanoid::RequiresNeck },
                    { "EvaluateStateMachine",  &Humanoid::EvaluateStateMachine },
                    { "RigType",               &Humanoid::RigType },
                    { "TargetPoint",           &Humanoid::TargetPoint },
                    { "HumanoidState",         &Humanoid::HumanoidState },
                    { "HumanoidStateID",       &Humanoid::HumanoidStateID },
                }},
                { "Lighting", {
                    { "ClockTime",                &Lighting::ClockTime },
                    { "Brightness",               &Lighting::Brightness },
                    { "Ambient",                  &Lighting::Ambient },
                    { "EnvironmentDiffuseScale",  &Lighting::EnvironmentDiffuseScale },
                    { "EnvironmentSpecularScale", &Lighting::EnvironmentSpecularScale },
                    { "OutdoorAmbient",           &Lighting::OutdoorAmbient },
                    { "ColorShift_Bottom",        &Lighting::ColorShift_Bottom },
                    { "ColorShift_Top",           &Lighting::ColorShift_Top },
                    { "ShadowSoftness",           &Lighting::ShadowSoftness },
                }},
                { "Camera", {
                    { "DiagonalFieldOfView", &Camera::DiagonalFieldOfView },
                    { "MaxAxisFieldOfView",  &Camera::MaxAxisFieldOfView },
                    { "FieldOfView",         &Camera::FieldOfView },
                    { "Position",            &Camera::Position },
                    { "CFrame",              &Camera::CFrame },
                    { "ViewportInt16",       &Camera::ViewportInt16 },
                    { "ViewportSize",        &Camera::ViewportSize },
                    { "CameraSubject",       &Camera::CameraSubject },
                    { "CameraType",          &Camera::CameraType },
                }},
                { "World", {
                    { "FallenPartsDestroyHeight", &World::FallenPartsDestroyHeight },
                    { "Gravity",                  &World::Gravity },
                    { "WorldStepPerSec",          &World::WorldStepPerSec },
                    { "Primitives",               &World::Primitives },
                }},
                { "Workspace", {
                    { "World",           &Workspace::World },
                    { "ReadOnlyGravity", &Workspace::ReadOnlyGravity },
                    { "CurrentCamera",   &Workspace::CurrentCamera },
                }},
                { "FakeDataModel", {
                    { "Pointer",       &FakeDataModel::Pointer },
                    { "RealDataModel", &FakeDataModel::RealDataModel },
                }},
                { "ModuleScript", {
                    { "Bytecode", &ModuleScript::Bytecode },
                    { "Hash",     &ModuleScript::Hash },
                }},
                { "LocalScript", {
                    { "Bytecode", &LocalScript::Bytecode },
                }},
                { "Bytecode", {
                    { "Size",    &Bytecode::Size },
                    { "Pointer", &Bytecode::Pointer },
                }},
            };
        }

        inline void skipWs(const std::string& j, size_t& p) {
            while (p < j.size() && isspace((unsigned char)j[p])) p++;
        }

        inline bool expectChar(const std::string& j, size_t& p, char c) {
            skipWs(j, p);
            if (p >= j.size() || j[p] != c) return false;
            p++;
            return true;
        }

        inline std::string parseStr(const std::string& j, size_t& p) {
            if (p >= j.size() || j[p] != '"') return {};
            p++;
            std::string r;
            while (p < j.size() && j[p] != '"') r += j[p++];
            if (p < j.size()) p++;
            return r;
        }

        inline uintptr_t parseNum(const std::string& j, size_t& p) {
            if (p >= j.size()) return 0;
            std::string n;
            bool hex = p + 1 < j.size() && j[p] == '0' && (j[p + 1] == 'x' || j[p + 1] == 'X');
            if (hex) { n = "0x"; p += 2; }
            while (p < j.size() && (isxdigit((unsigned char)j[p]) || j[p] == '-')) n += j[p++];
            return n.empty() ? 0 : (uintptr_t)strtoull(n.c_str(), nullptr, hex ? 16 : 10);
        }

        inline bool load() {
            std::string ver = memory::get_version();
            std::wstring path = L"/MoonArea3/roblox-offsets/refs/heads/main/offsets/" +
                std::wstring(ver.begin(), ver.end()) + L"/offsets.json";

            std::string json;
            HINTERNET session = WinHttpOpen(L"", WINHTTP_ACCESS_TYPE_DEFAULT_PROXY, nullptr, nullptr, 0);
            if (!session) return false;

            HINTERNET connect = WinHttpConnect(session, L"raw.githubusercontent.com", INTERNET_DEFAULT_HTTPS_PORT, 0);
            if (!connect) { WinHttpCloseHandle(session); return false; }

            HINTERNET request = WinHttpOpenRequest(connect, L"GET", path.c_str(), nullptr, nullptr, nullptr, WINHTTP_FLAG_SECURE);
            if (!request) { WinHttpCloseHandle(connect); WinHttpCloseHandle(session); return false; }

            if (!WinHttpSendRequest(request, nullptr, 0, nullptr, 0, 0, 0) || !WinHttpReceiveResponse(request, nullptr)) {
                WinHttpCloseHandle(request); WinHttpCloseHandle(connect); WinHttpCloseHandle(session);
                return false;
            }

            DWORD read = 0;
            char buf[4096];
            while (WinHttpReadData(request, buf, sizeof(buf), &read) && read)
                json.append(buf, read);

            WinHttpCloseHandle(request);
            WinHttpCloseHandle(connect);
            WinHttpCloseHandle(session);

            if (json.empty()) {
                printf("[-] your version %s is not supported! ask moon to add support for the version\n", ver.c_str());
                exit(0);
                return false;
            }

            auto map = buildMap();
            size_t pos = 0;
            int patched = 0;

            if (!expectChar(json, pos, '{')) {
                printf("[-] your version %s is not supported!\n", ver.c_str());
                printf("[+] ask moon to add support for the version!");
                exit(0);
                return false;
            }

            while (pos < json.size()) {
                skipWs(json, pos);
                if (pos >= json.size()) break;
                if (json[pos] == '}') break;
                if (json[pos] == ',') { pos++; continue; }
                if (json[pos] != '"') { pos++; continue; }

                auto ns = parseStr(json, pos);
                if (!expectChar(json, pos, ':')) continue;
                skipWs(json, pos);
                if (pos >= json.size()) break;

                if (json[pos] != '{') {
                    if (json[pos] == '"') parseStr(json, pos);
                    else while (pos < json.size() && json[pos] != ',' && json[pos] != '}') pos++;
                    continue;
                }
                pos++;

                auto nsIt = map.find(ns);

                while (pos < json.size()) {
                    skipWs(json, pos);
                    if (pos >= json.size()) break;
                    if (json[pos] == '}') { pos++; break; }
                    if (json[pos] == ',') { pos++; continue; }
                    if (json[pos] != '"') { pos++; continue; }

                    auto key = parseStr(json, pos);
                    if (!expectChar(json, pos, ':')) continue;
                    skipWs(json, pos);
                    auto val = parseNum(json, pos);

                    if (nsIt != map.end()) {
                        auto keyIt = nsIt->second.find(key);
                        if (keyIt != nsIt->second.end()) {
                            *keyIt->second = val;
                            patched++;
                        }
                    }
                }
            }

            return patched > 0;
        }
    }
}
