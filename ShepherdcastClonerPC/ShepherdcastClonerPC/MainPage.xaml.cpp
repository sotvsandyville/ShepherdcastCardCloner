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
	std::wstring numCardsTemp(Cards->Text->Begin());
	std::string numString(numCardsTemp.begin(), numCardsTemp.end());
	std::stringstream numStream(numString);
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
		Run->IsEnabled = false;
	}
	else if (numCards % 3 == 0)
	{
		DriveA->IsEnabled = true;
		DriveB->IsEnabled = true;
		DriveC->IsEnabled = true;
	}
	else if (numCards % 2 == 0)
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

void ShepherdcastClonerPC::MainPage::Run_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	// TODO: get file names and drives and verify
	std::wstring toCopyTemp(FilePath->Text->Begin());
	std::string toCopy(toCopyTemp.begin(), toCopyTemp.end());
	if ((toCopy[1] != ':') ||
		(toCopy[2] != '/') ||
		(toCopy.substr(toCopy.length() - 4, 4) != ".wav"))
	{
		// TODO: dialog on bad filename
		ContentDialog^ youGiveFilesABadName = ref new ContentDialog();
		youGiveFilesABadName->Content = "Your specified file path is incorrect.  Please use the full file path, including the drive letter and file extension.  Note that only *.wav files are supported by this program.";
		youGiveFilesABadName->Title = "Redo your file path to continue.";
		youGiveFilesABadName->PrimaryButtonText = "OK";
		youGiveFilesABadName->ShowAsync();
		return;
	}
	int driveASelection = DriveA->SelectedIndex;
	int driveBSelection = DriveB->SelectedIndex;
	int driveCSelection = DriveC->SelectedIndex;
	if ((DriveA->SelectedIndex == DriveB->SelectedIndex) ||
		(DriveA->SelectedIndex == DriveC->SelectedIndex) ||
		(DriveB->SelectedIndex == DriveC->SelectedIndex))
	{
		// TODO: dialog on how drives cannot match
		ContentDialog^ youGiveFilesABadName = ref new ContentDialog();
		youGiveFilesABadName->Content = "You cannot use two drives of the same letter, nor can you use the C drive on Windows.  Please check your drive letters for duplicates.  If you have more drives available to select than you need, please respecify the number of drives.";
		youGiveFilesABadName->Title = "Check your drive selections.";
		youGiveFilesABadName->PrimaryButtonText = "OK";
		youGiveFilesABadName->ShowAsync();
		return;
	}
	// TODO: rename the files
	// TODO: copy the new file
	// TODO: return a success flag if worked!
}


void ShepherdcastClonerPC::MainPage::FilePath_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e)
{
	if (FilePath->Text == "")
		Run->IsEnabled = false;
	else
		Run->IsEnabled = true;
}


void ShepherdcastClonerPC::MainPage::DriveA_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e)
{
	if (DriveB->IsEnabled == false && DriveC->IsEnabled == false)
		FilePath->IsEnabled = true;
}


void ShepherdcastClonerPC::MainPage::DriveB_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e)
{
	if (DriveC->IsEnabled == false)
		FilePath->IsEnabled = true;
}


void ShepherdcastClonerPC::MainPage::DriveC_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e)
{
	FilePath->IsEnabled = true;
}


void ShepherdcastClonerPC::MainPage::TextBlock_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	// TODO: figure out how to remove this
}
