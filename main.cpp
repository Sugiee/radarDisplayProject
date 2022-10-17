#include <iostream>     // Necessary so that cout are available

using namespace std;    // Necessary so that cout are available

//------------------------------------------------------------------------------------------
class pixel;    // There exist these things called pixels
//--------------------------------------------------------
class icon;     // There exist these things called icons
//------------------------------------------------------------------------------------------
// Utility functions that exist and accept pixels or icons or an integer as arguments
//------------------------------------------------------------------------------------------
void showPixelDetail(const pixel& aPixel);
void showIconDetail(const icon& aIcon, int i);
void initialiseAsDefaultDiagonalLine(icon& aIconSeven);
void initialiseRedPlaneIcon(icon& anIcon);
void initialiseYellowHeliIcon (icon& anIcon);
//------------------------------------------------------------------------------------------

// Pixel encapsulates the concept of a location of a dot on the screen.
// Each instance has its own dimensions and brightness.

//------------------------------------------------------------------------------------------
class pixel
{
public:                         // The variables to set the horizontal and vertical
    float xCoord;               // coordinates
    float yCoord;
    unsigned int brightness;    // Controls the brightness of the pixel within a range of
};                              // 0 - 20
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------

// Icon encapsulates the concept of multiple pixels.
// Each instance has its own array of pixels and idNumber to correlate to the vehicle.

//------------------------------------------------------------------------------------------
class icon
{
public:
    unsigned int idNumber;      // It is the id number for the vehicle it represents

    pixel thePixel[15];         // Pixel array to store values for 16 individual pixels
};
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------

// displayobject encapsulates the concept of having either no icons to display or up to
// a 100 icons to display

//------------------------------------------------------------------------------------------
class displayObject
{
public:
    int noActiveIcons;

    icon* iconsToDisplay[100];
};

//------------------------------------------------------------------------------------------
// Function to display values belonging to a pixel
//------------------------------------------------------------------------------------------

// Copyright Satheyaseelan Sugieethan

// Input arguments: pixels xCoord, Ycoord and brightness values
// Return value   : None

// output: xCoord value, yCoord value, brightness value printed

// Required header files: iostream for cout

//-------------------------------------------------------------
void showPixelDetail(const pixel& aPixel)
{                                                           // Displays text and variable
    cout << "xCoord of icon:"<< aPixel.xCoord <<"\n"
         << "yCoord of icon:"<< aPixel.yCoord <<"\n"
         << "brightness of icon:"<< aPixel.brightness <<"\n\n";
}
//------------------------------------------------------------------------------------------
// Function to call display function named 'showPixelDetail'
//------------------------------------------------------------------------------------------

// Copyright Satheyaseelan Sugieethan

// Input arguments: pixels xCoord, Ycoord and brightness

// Return value         : None

// output               : None

// Required header files: None

//-------------------------------------------------------------
void showIconDetail(const icon& aIcon, int i)
{                                               // Inputs icons data and calls the display
    showPixelDetail(aIcon.thePixel[i]);         // function to display to the users radar
}                                               // system
//------------------------------------------------------------------------------------------
// Function to create multiple pixels
//------------------------------------------------------------------------------------------

// Copyright Satheyaseelan Sugieethan

// Input arguments: An array of input data

// Return value   : None

// output         : xCoord, yCoord, brightness values

// Required header files: None

//-------------------------------------------------------------
void initialiseAsDefaultDiagonalLine(icon& aIconSeven)
{
    aIconSeven.idNumber = 7;        // Equate 'IconSeven' to integer 7

    for (int i=0; i < 16; i++)                      // A for loop to create exactly 16 pixels
    {                                               // and no more which equates each pixel to
        aIconSeven.thePixel[i].xCoord = i+1;        // the desired value
        aIconSeven.thePixel[i].yCoord = i+1;
        aIconSeven.thePixel[i].brightness = 15;     // The 'i' integer allows to track how many
                                                    // pixels have been created and what value
        showIconDetail(aIconSeven, i);              // the variables need to be

        //cout << "xCoord of aIconSeven " <<i<<":"<< aIconSeven.thePixel[i].xCoord <<"\n"
        //     << "yCoord of aIconSeven " <<i<<":"<< aIconSeven.thePixel[i].yCoord <<"\n"
        //     << "brightness of aIconSeven " <<i<<":"<< aIconSeven.thePixel[i].brightness <<"\n\n";
    }
}
//------------------------------------------------------------------------------------------
// Function to create icons relevant for the red plane
//------------------------------------------------------------------------------------------

// Copyright Satheyaseelan Sugieethan

// Input arguments: An array of input data

// Return value   : xCoord, yCoord, brightness values

// output         : None

// Required header files: None

//-------------------------------------------------------------
void initialiseRedPlaneIcon(icon& anIcon)
{
    int i=0;
    anIcon.idNumber = 1;        // Equate 'anIcon' to integer 1

    anIcon.thePixel[0].xCoord = 0;           // Populate instances with some test data to make a 3 points
    anIcon.thePixel[0].yCoord =0;            // forming a triangle shape
    anIcon.thePixel[0].brightness = 15;

    anIcon.thePixel[1].xCoord = 5;
    anIcon.thePixel[1].yCoord = 0;
    anIcon.thePixel[1].brightness = 15;

    anIcon.thePixel[2].xCoord = 2.5;
    anIcon.thePixel[2].yCoord = 5;
    anIcon.thePixel[2].brightness = 15;
}
//------------------------------------------------------------------------------------------
// Function to create icons relevant for the yellow plane
//------------------------------------------------------------------------------------------

// Copyright Satheyaseelan Sugieethan

// Input arguments: An array of input data

// Return value   : xCoord, yCoord, brightness values

// output         : None

// Required header files: None

//-------------------------------------------------------------
void initialiseYellowHeliIcon (icon& anIcon)
{
    int i=0;
    anIcon.idNumber = 2;        // Equate 'anIcon' to integer 1

    anIcon.thePixel[0].xCoord = 5;          // Populate instances with some test data to make a 3 points
    anIcon.thePixel[0].yCoord =0;           // forming a triangle shape
    anIcon.thePixel[0].brightness = 15;

    anIcon.thePixel[1].xCoord = 10;
    anIcon.thePixel[1].yCoord = 0;
    anIcon.thePixel[1].brightness = 15;

    anIcon.thePixel[2].xCoord = 7.5;
    anIcon.thePixel[2].yCoord = 5;
    anIcon.thePixel[2].brightness = 15;
}
//------------------------------------------------------------------------------------------

//----------------------------------------------------------------
//
// Main program to demonstrate different subtasks and test codes
//
//----------------------------------------------------------------
int main()
{                           // Test code to instance of a pixel called aPixel and set x value as
    pixel aPixel;           // 3.9 and y value as 4.1 and brightness to 7 and to display the data

    aPixel.xCoord = 3.9;
    aPixel.yCoord = 4.1;
    aPixel.brightness = 7;

    showPixelDetail(aPixel);    // Calls function to display pixel values

    //cout << "xCoord:" << aPixel.xCoord <<"\n"             // Cout was used to test the outputs to
    //     << "yCoord:" << aPixel.yCoord <<"\n"             // display before the creation of the
    //     << "brightness:" << aPixel.brightness <<"\n";    // 'showPixelDetail' function

//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
    pixel pixelOne;             // Test code to create two instances. The first instance is given
    icon myIcon;                // values while the second instance gains its values by being equated
                                // to the first instance.
    pixelOne.xCoord = 3.9;
    pixelOne.yCoord = 4.1;
    pixelOne.brightness = 7;

    myIcon.idNumber = 0;                                    // Equates the two instances together
    myIcon.thePixel[0].xCoord = pixelOne.xCoord;
    myIcon.thePixel[0].yCoord = pixelOne.yCoord;
    myIcon.thePixel[0].brightness = pixelOne.brightness;

    cout << "xCoord of pixelOne:" << pixelOne.xCoord <<"\n"                 // When the values are
         << "yCoord of pixelOne:" << pixelOne.yCoord <<"\n"                 // outputted they are
         << "brightness of pixelOne:" << pixelOne.brightness <<"\n\n";      // the same value.

    cout << "xCoord of myIcon 0:" << myIcon.thePixel[0].xCoord <<"\n"
         << "yCoord of myIcon 0:" << myIcon.thePixel[0].yCoord <<"\n"
         << "brightness of myIcon 0:" << myIcon.thePixel[0].brightness <<"\n\n";
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
    icon iconSeven;                                 // Creates an instance that is passed on to a
                                                    // function that is designed to create a diagonal
    initialiseAsDefaultDiagonalLine(iconSeven);     // line

    icon allTheIcons[500];

    initialiseRedPlaneIcon(allTheIcons[0]);

    initialiseYellowHeliIcon(allTheIcons[1]);

    displayObject displayOne;

    displayObject displayTwo;

    displayOne.iconsToDisplay[0]=(&allTheIcons[0]);

    displayOne.noActiveIcons++;

    displayTwo.iconsToDisplay[0]=(&allTheIcons[0]);

    displayTwo.noActiveIcons++;

    for (int i=0; i<3;i++)
    {
        showIconDetail(allTheIcons[0], i);
        showIconDetail(allTheIcons[1], i);

        if (i > 100)                            //To ensure amount of instances is limited to 100
        {
            cout << "The amount of instances is too high, please reduce!" <<"\n";
            return (0);
        }
    }

    return 0;
}
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// A successful run gives:
//
//xCoord of icon:3.9
//yCoord of icon:4.1
//brightness of icon:7

//xCoord of pixelOne:3.9
//yCoord of pixelOne:4.1
//brightness of pixelOne:7
//
//xCoord of myIcon 0:3.9
//yCoord of myIcon 0:4.1
//brightness of myIcon 0:7
//
//xCoord of icon:1
//yCoord of icon:1
//brightness of icon:15
//
//xCo/ord of icon:2
//yCoord of icon:2
//brightness of icon:15
//
//xCoord of icon:3
//yCoord of icon:3
//brightness of icon:15
//
//xCoord of icon:4
//yCoord of icon:4
//brightness of icon:15
//
//xCoord of icon:5
//yCoord of icon:5
//brightness of icon:15
//
//xCoord of icon:6
//yCoord of icon:6
//brightness of icon:15
//xCoord of icon:7
//yCoord of icon:7
//brightness of icon:15
//
//xCoord of icon:8
//yCoord of icon:8
//brightness of icon:15
//
//xCoord of icon:9
//yCoord of icon:9
//brightness of icon:15
//
//xCoord of icon:10
//yCoord of icon:10
//brightness of icon:15
//
//xCoord of icon:11
//yCoord of icon:11
//brightness of icon:15
//
//xCoord of icon:12
//yCoord of icon:12
//brightness of icon:15
//
//xCoord of icon:13
//yCoord of icon:13
//brightness of icon:15
//
//xCoord of icon:14
//yCoord of icon:14
//brightness of icon:15
//
//xCoord of icon:15
//yCoord of icon:15
//brightness of icon:15
//
//xCoord of icon:16
//yCoord of icon:16
//brightness of icon:15
//
//xCoord of icon:0
//yCoord of icon:0
//brightness of icon:15
//
//xCoord of icon:5
//yCoord of icon:0
//brightness of icon:15
//
//xCoord of icon:5
//yCoord of icon:0
//brightness of icon:15
//
//xCoord of icon:10
//yCoord of icon:0
//brightness of icon:15
//xCoord of icon:2.5
//yCoord of icon:5
//brightness of icon:15
//
//xCoord of icon:7.5
//yCoord of icon:5
//brightness of icon:15
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
