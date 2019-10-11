﻿#pragma once

namespace WebRTC {

struct ITexture2D;

class IGraphicsDevice {
public:

    IGraphicsDevice();
    virtual ~IGraphicsDevice() = 0;

    virtual void ShutdownV() = 0;
    virtual ITexture2D* CreateEncoderInputTextureV(uint32_t width, uint32_t height) = 0;

};

}
