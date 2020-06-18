#include <gui/mainwindow_screen/MainWindowView.hpp>

MainWindowView::MainWindowView():
    SliderCallback(this,&MainWindowView::SliderHandler)
{

}

void MainWindowView::setupScreen()
{
    MainWindowViewBase::setupScreen();
    remove(Background);
    m_slideWindow.setPosition(0,0,
        Background.getWidth(),
        Background.getHeight());
    m_slideWindow.setMenuChangeEndedCallback(SliderCallback);
    
    m_slideWindow.add(Background);
    add(m_slideWindow);
}

void MainWindowView::tearDownScreen()
{
    MainWindowViewBase::tearDownScreen();
}

void MainWindowView::SliderHandler(const SlideMenuContainer& sc)
{
    touchgfx_printf("RUN!!!\r\n");
}
