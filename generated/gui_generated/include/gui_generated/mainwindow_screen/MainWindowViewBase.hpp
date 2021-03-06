/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINWINDOWVIEWBASE_HPP
#define MAINWINDOWVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/mainwindow_screen/MainWindowPresenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <gui/containers/SliderWindow.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>

class MainWindowViewBase : public touchgfx::View<MainWindowPresenter>
{
public:
    MainWindowViewBase();
    virtual ~MainWindowViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image Background;
    touchgfx::MoveAnimator< SliderWindow > sliderWindow1;

private:

};

#endif // MAINWINDOWVIEWBASE_HPP
