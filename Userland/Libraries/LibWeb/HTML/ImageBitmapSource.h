/*
 * Copyright (c) 2024, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/Bindings/Serializable.h>
#include <LibWeb/Bindings/Transferable.h>
#include <LibWeb/Forward.h>
#include <LibWeb/HTML/Canvas/CanvasImageSource.h>

namespace Web::HTML {

// https://html.spec.whatwg.org/multipage/imagebitmap-and-animations.html#imagebitmapsource
// NOTE: This is the Variant created by the IDL wrapper generator, and needs to be updated accordingly.
using ImageBitmapSource = Variant<CanvasImageSource, JS::Handle<FileAPI::Blob>, JS::Handle<ImageData>>;

}
