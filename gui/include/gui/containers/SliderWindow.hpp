#ifndef SLIDERWINDOW_HPP
#define SLIDERWINDOW_HPP

#include <gui_generated/containers/SliderWindowBase.hpp>

class SliderWindow : public SliderWindowBase
{
public:
    SliderWindow();
    virtual ~SliderWindow() {}

    virtual void initialize();
protected:
};

#endif // SLIDERWINDOW_HPP
