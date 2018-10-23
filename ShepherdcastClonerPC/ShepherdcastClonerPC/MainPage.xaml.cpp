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
}


void ShepherdcastClonerPC::MainPage::Optimized_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	// convert text input to an integer from a System::String
	std::wstring wString(Cards->Text->Begin());
	std::string standardString(wString.begin(), wString.end());
	std::stringstream numStream(standardString);
	int numCards = 0;
	numStream >> numCards;
	// do the math, mod operator used for ease of use
	// Logic: You do 5 cards.  Put 3 in, then 2.  Which two do you yank?  Easy for a tech person,
	//        but likely harder for an average computer user.
	if (numCards == 0)
	{
		// TODO: dialog saying bad input
		DriveA->IsEnabled = false;
		DriveB->IsEnabled = false;
		DriveC->IsEnabled = false;
		FilePath->IsEnabled = false;
	}
	else if (numCards % 3 == 0)
	{
		DriveA->IsEnabled = true;
		DriveB->IsEnabled = true;
		DriveC->IsEnabled = true;
		FilePath->IsEnabled = true;
	}
	else if (numCards % 2 == 0)
	{
		DriveA->IsEnabled = true;
		DriveB->IsEnabled = true;
		DriveC->IsEnabled = false;
		FilePath->IsEnabled = true;
	}
	else
	{
		DriveA->IsEnabled = true;
		DriveB->IsEnabled = false;
		DriveC->IsEnabled = false;
		FilePath->IsEnabled = true;
	}
}

void ShepherdcastClonerPC::MainPage::Run_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	
}


void ShepherdcastClonerPC::MainPage::FilePath_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e)
{
	// TODO: read textbox content and enable only if there is content
	Run->IsEnabled = true;
}


void ShepherdcastClonerPC::MainPage::DriveA_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e)
{
	if
}
