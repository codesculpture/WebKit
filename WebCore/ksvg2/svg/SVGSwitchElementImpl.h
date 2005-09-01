/*
    Copyright (C) 2004, 2005 Nikolas Zimmermann <wildfox@kde.org>
                  2004, 2005 Rob Buis <buis@kde.org>

    This file is part of the KDE project

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#ifndef KSVG_SVGSwitchElementImpl_H
#define KSVG_SVGSwitchElementImpl_H

#include "SVGTestsImpl.h"
#include "SVGLangSpaceImpl.h"
#include "SVGStyledElementImpl.h"
#include "SVGTransformableImpl.h"
#include "SVGExternalResourcesRequiredImpl.h"

namespace KSVG
{
    class SVGSwitchElementImpl : public SVGStyledElementImpl,
                                 public SVGTestsImpl,
                                 public SVGLangSpaceImpl,
                                 public SVGExternalResourcesRequiredImpl,
                                 public SVGTransformableImpl
    {
    public:
        SVGSwitchElementImpl(KDOM::DocumentPtr *doc, KDOM::NodeImpl::Id id,  KDOM::DOMStringImpl *prefix);
        virtual ~SVGSwitchElementImpl();

        // Derived from: 'SVGStyledElementImpl'
        virtual bool allowAttachChildren(KDOM::ElementImpl *child) const;
        virtual bool implementsCanvasItem() const { return true; }

        virtual KCanvasItem *createCanvasItem(KCanvas *canvas, KRenderingStyle *style) const;

    private:
        mutable bool m_insideRenderSection;
    };
};

#endif

// vim:ts=4:noet
