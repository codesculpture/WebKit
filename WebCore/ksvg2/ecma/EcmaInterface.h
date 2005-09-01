/*
    Copyright (C) 2004-2005 Nikolas Zimmermann <wildfox@kde.org>
                  2004-2005 Rob Buis <buis@kde.org>

    This file is part of the KDE project
    This file is autogenerated using 'make generatedata'!

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

#ifndef KSVG_EcmaInterface_H
#define KSVG_EcmaInterface_H

#include <kdom/ecma/EcmaInterface.h>

namespace KJS
{
    class ObjectImp;
};

namespace KDOM
{
    class Document;
    class Element;
    class UIEvent;
    class DocumentEvent;
    class DocumentRange;
    class DocumentTraversal;
    class Event;
    class EventTarget;
    class Node;
};

namespace KSVG
{
    class EcmaInterface : public KDOM::EcmaInterface
    {
    public:
        EcmaInterface() : KDOM::EcmaInterface() { }
        virtual ~EcmaInterface() { }

        virtual KDOM::Document inheritedDocumentCast(const KJS::ObjectImp *p1);
        virtual KDOM::Element inheritedElementCast(const KJS::ObjectImp *p1);
        virtual KDOM::UIEvent inheritedUIEventCast(const KJS::ObjectImp *p1);
        virtual KDOM::DocumentEvent inheritedDocumentEventCast(const KJS::ObjectImp *p1);
        virtual KDOM::DocumentRange inheritedDocumentRangeCast(const KJS::ObjectImp *p1);
        virtual KDOM::DocumentTraversal inheritedDocumentTraversalCast(const KJS::ObjectImp *p1);
        virtual KDOM::Event inheritedEventCast(const KJS::ObjectImp *p1);
        virtual KDOM::EventTarget inheritedEventTargetCast(const KJS::ObjectImp *p1);
        virtual KDOM::Node inheritedNodeCast(const KJS::ObjectImp *p1);
    };
};

#endif
