#pragma once

#include "BasePrismGauge3DWidget.h"

class Prism3DWidget : public prism::BasePrismGauge3DWidget
{
public:
    explicit Prism3DWidget(QWidget *parent = nullptr);
    ~Prism3DWidget();

protected:
    prism::RuntimeProps getRuntimeProps(QWindow* parent) const override;
    void getJsonParam(std::string& asset_folder_name, std::string& json_name) const override;
};

