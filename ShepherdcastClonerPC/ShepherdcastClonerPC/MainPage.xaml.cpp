//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

#include <iostream>
#include <sstream>

using namespace ShepherdcastClonerPC;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
	char add = 'A';
	for (int i = 0; i < 26; ++i)
	{
		DriveA->Items->Add(add);  //TODO: fix this
		++add;
	}
	char add = 'A';
	for (int i = 0; i < 26; ++i)
	{
		DriveA->Items->Add(add);  //TODO: fix this
		++add;
	}
}


void ShepherdcastClonerPC::MainPage::Optimized_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	std::wstring wString(Cards->Text->Begin());
	std::string standardString(wString.begin(), wString.end());
	std::stringstream numStream(standardString);
	int numCards = 0;
	numStream >> numCards;
	if (numCards == 0)
	{
		// TODO: dialog saying bad input
		DriveA->IsEnabled = false;
		DriveB->IsEnabled = false;
		DriveC->IsEnabled = false;
	}
	else if (numCards >= 3)
	{
		DriveA->IsEnabled = true;
		DriveB->IsEnabled = true;
		DriveC->IsEnabled = true;
	}
	else if (numCards == 2)
	{
		DriveA->IsEnabled = true;
		DriveB->IsEnabled = true;
		DriveC->IsEnabled = false;
	}
	else
	{
		DriveA->IsEnabled = true;
		DriveB->IsEnabled = false;
		DriveC->IsEnabled = false;
	}
}