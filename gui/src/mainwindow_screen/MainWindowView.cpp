#include <gui/mainwindow_screen/MainWindowView.hpp>

MainWindowView::MainWindowView():
    SliderCallback(this,&MainWindowView::SliderHandler)
{

}

void MainWindowView::setupScreen()
{
    MainWindowViewBase::setupScreen();
    remove(sliderWindow1);
    remove(Background);
    m_slideWindow.setPosition(0,0,
        Background.getWidth(),
        Background.getHeight());
    m_slideWindow.setMenuChangeEndedCallback(SliderCallback);
    
    m_slideWindow.add(Background);
    m_slideWindow.add(sliderWindow1);
    add(m_slideWindow);
}

void MainWindowView::tearDownScreen()
{
    MainWindowViewBase::tearDownScreen();
}

void MainWindowView::SliderHandler(const SlideMenuContainer& sc)
{
    //touchgfx_printf("RUN!!!\r\n");
    const int endPosition=sliderWindow1.getY() >= 0 ? -800 : 0;
    if (m_slideWindow.getSelectedScreen() == 1)
    {
        sliderWindow1.startMoveAnimation(sliderWindow1.getX(), endPosition,
            20,
            EasingEquations::cubicEaseInOut,
            EasingEquations::cubicEaseInOut);
    }
    else if (m_slideWindow.getSelectedScreen() == 0)
    {
        sliderWindow1.startMoveAnimation(sliderWindow1.getX(), endPosition,
            20,
            EasingEquations::cubicEaseInOut,
            EasingEquations::cubicEaseInOut);
    }
}
