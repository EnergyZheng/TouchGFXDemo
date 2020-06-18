#ifndef MAINWINDOWVIEW_HPP
#define MAINWINDOWVIEW_HPP

#include <gui_generated/mainwindow_screen/MainWindowViewBase.hpp>
#include <gui/mainwindow_screen/MainWindowPresenter.hpp>
#include <gui/common/SlideMenuContainer.hpp>

class MainWindowView : public MainWindowViewBase
{
public:
    MainWindowView();
    virtual ~MainWindowView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
    SlideMenuContainer m_slideWindow;
    Callback<MainWindowView, const SlideMenuContainer&> SliderCallback;
    void SliderHandler(const SlideMenuContainer& sc);
};

#endif // MAINWINDOWVIEW_HPP
