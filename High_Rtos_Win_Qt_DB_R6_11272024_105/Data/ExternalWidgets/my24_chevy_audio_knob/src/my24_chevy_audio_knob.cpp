#include <QDebug>
#include "my24_chevy_audio_knob.h"
#include "GaugeRunTime.h"

Q_DECL_EXPORT IExternalWidget* CreateExternalWidget(core_widget::Widget* parent)
{
    Prism3DWidget* widget = new Prism3DWidget(parent);
    QWidget* parentQWidget = parent->window();

    //prism::PrismLoaderParameters param;
    //param.mAssetsFolderName = "my24_chevy_audio_knob";
    //param.mJSONName = "vehicle_Knob.json";
    //param.mWindowWidth = 456;
    //param.mWindowHeight =  456;
    //param.mOffScreen = prism::g_default_offscreen;
    //param.mVSync = prism::g_default_vsync;
    //param.mParent = parentQWidget ? parentQWidget->windowHandle() : nullptr;

    widget->createPrismOpenglWidget(parent);
    return widget;
}

Prism3DWidget::Prism3DWidget(QWidget* parent)
    :BasePrismGauge3DWidget(parent, "my24_chevy_audio_knob")
{
}

Prism3DWidget::~Prism3DWidget()
{
}

prism::RuntimeProps Prism3DWidget::getRuntimeProps(QWindow* parent) const
{
    prism::RuntimeProps props;
    props.WindowWidth = 456;
    props.WindowHeight = 456;
    props.SurfaceType = mConfig.mOffScreen;
    props.vSync = mConfig.mVSync;
    props.Parent = parent;
    return props;
}

void Prism3DWidget::getJsonParam(std::string& asset_folder_name, std::string& json_name) const
{
    asset_folder_name = "my24_chevy_audio_knob";
    json_name = "vehicle_Knob.json";
}

