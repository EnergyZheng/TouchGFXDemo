/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mainwindow_screen/MainWindowViewBase.hpp>
#include "BitmapDatabase.hpp"

MainWindowViewBase::MainWindowViewBase()
{

    Background.setXY(0, 0);
    Background.setBitmap(touchgfx::Bitmap(BITMAP_BACKIMAGE_ID));

    sliderWindow1.setXY(0, -800);

    add(Background);
    add(sliderWindow1);
}

void MainWindowViewBase::setupScreen()
{
    sliderWindow1.initialize();
}
