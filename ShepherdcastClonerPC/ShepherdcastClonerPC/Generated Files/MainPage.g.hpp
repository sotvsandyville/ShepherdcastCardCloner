﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::ShepherdcastClonerPC::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::ShepherdcastClonerPC::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
    case 2:
        {
            this->Cards = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(__target);
        }
        break;
    case 3:
        {
            this->Optimized = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->Optimized))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::ShepherdcastClonerPC::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::Optimized_Click);
        }
        break;
    case 4:
        {
            ::Windows::UI::Xaml::Controls::TextBlock^ element4 = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(element4))->SelectionChanged += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::ShepherdcastClonerPC::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::TextBlock_SelectionChanged);
        }
        break;
    case 5:
        {
            this->FilePath = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(this->FilePath))->TextChanged += ref new ::Windows::UI::Xaml::Controls::TextChangedEventHandler(this, (void (::ShepherdcastClonerPC::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::Controls::TextChangedEventArgs^))&MainPage::FilePath_TextChanged);
        }
        break;
    case 6:
        {
            this->Run = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->Run))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::ShepherdcastClonerPC::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::Run_Click);
        }
        break;
    case 7:
        {
            this->DriveC = safe_cast<::Windows::UI::Xaml::Controls::ComboBox^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::ComboBox^>(this->DriveC))->SelectionChanged += ref new ::Windows::UI::Xaml::Controls::SelectionChangedEventHandler(this, (void (::ShepherdcastClonerPC::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::Controls::SelectionChangedEventArgs^))&MainPage::DriveC_SelectionChanged);
        }
        break;
    case 8:
        {
            this->Ca = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 9:
        {
            this->Cb = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 10:
        {
            this->Cc = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 11:
        {
            this->Cd = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 12:
        {
            this->Ce = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 13:
        {
            this->Cf = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 14:
        {
            this->Cg = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 15:
        {
            this->Ch = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 16:
        {
            this->Ci = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 17:
        {
            this->Cj = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 18:
        {
            this->Ck = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 19:
        {
            this->Cl = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 20:
        {
            this->Cm = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 21:
        {
            this->Cn = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 22:
        {
            this->Co = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 23:
        {
            this->Cp = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 24:
        {
            this->Cq = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 25:
        {
            this->Cr = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 26:
        {
            this->Cs = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 27:
        {
            this->Ct = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 28:
        {
            this->Cu = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 29:
        {
            this->Cv = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 30:
        {
            this->Cw = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 31:
        {
            this->Cx = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 32:
        {
            this->Cy = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 33:
        {
            this->Cz = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 34:
        {
            this->DriveB = safe_cast<::Windows::UI::Xaml::Controls::ComboBox^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::ComboBox^>(this->DriveB))->SelectionChanged += ref new ::Windows::UI::Xaml::Controls::SelectionChangedEventHandler(this, (void (::ShepherdcastClonerPC::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::Controls::SelectionChangedEventArgs^))&MainPage::DriveB_SelectionChanged);
        }
        break;
    case 35:
        {
            this->Ba = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 36:
        {
            this->Bb = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 37:
        {
            this->Bc = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 38:
        {
            this->Bd = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 39:
        {
            this->Be = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 40:
        {
            this->Bf = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 41:
        {
            this->Bg = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 42:
        {
            this->Bh = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 43:
        {
            this->Bi = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 44:
        {
            this->Bj = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 45:
        {
            this->Bk = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 46:
        {
            this->Bl = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 47:
        {
            this->Bm = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 48:
        {
            this->Bn = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 49:
        {
            this->Bo = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 50:
        {
            this->Bp = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 51:
        {
            this->Bq = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 52:
        {
            this->Br = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 53:
        {
            this->Bs = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 54:
        {
            this->Bt = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 55:
        {
            this->Bu = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 56:
        {
            this->Bv = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 57:
        {
            this->Bw = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 58:
        {
            this->Bx = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 59:
        {
            this->By = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 60:
        {
            this->Bz = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 61:
        {
            this->DriveA = safe_cast<::Windows::UI::Xaml::Controls::ComboBox^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::ComboBox^>(this->DriveA))->SelectionChanged += ref new ::Windows::UI::Xaml::Controls::SelectionChangedEventHandler(this, (void (::ShepherdcastClonerPC::MainPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::Controls::SelectionChangedEventArgs^))&MainPage::DriveA_SelectionChanged);
        }
        break;
    case 62:
        {
            this->Aa = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 63:
        {
            this->Ab = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 64:
        {
            this->Ac = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 65:
        {
            this->Ad = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 66:
        {
            this->Ae = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 67:
        {
            this->Af = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 68:
        {
            this->Ag = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 69:
        {
            this->Ah = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 70:
        {
            this->Ai = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 71:
        {
            this->Aj = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 72:
        {
            this->Ak = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 73:
        {
            this->Al = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 74:
        {
            this->Am = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 75:
        {
            this->An = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 76:
        {
            this->Ao = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 77:
        {
            this->Ap = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 78:
        {
            this->Aq = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 79:
        {
            this->Ar = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 80:
        {
            this->As = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 81:
        {
            this->At = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 82:
        {
            this->Au = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 83:
        {
            this->Av = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 84:
        {
            this->Aw = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 85:
        {
            this->Ax = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 86:
        {
            this->Ay = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    case 87:
        {
            this->Az = safe_cast<::Windows::UI::Xaml::Controls::ComboBoxItem^>(__target);
        }
        break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::ShepherdcastClonerPC::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

#pragma warning(pop)


