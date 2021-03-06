#ifndef VIRTUALKEYBOARDINPUTCONTEXTPLUGIN_H
#define VIRTUALKEYBOARDINPUTCONTEXTPLUGIN_H
//============================================================================
/// \file   VirtualKeyboardInputContextPlugin.h
/// \author Uwe Kindler
/// \date   08.01.2015
/// \brief  Declaration of VirtualKeyboardInputContextPlugin
//============================================================================

//============================================================================
//                                 INCLUDES
//============================================================================
#include "virtualkeyboard_global.h"
#include <qpa/qplatforminputcontextplugin_p.h>

/**
 * Implementation of QPlatformInputContextPlugin
 */
class VirtualKeyboardInputContextPlugin : public QPlatformInputContextPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QPlatformInputContextFactoryInterface" FILE "VirtualKeyboardInputContextPlugin.json")

public:
    QPlatformInputContext *create(const QString&, const QStringList&);
};  // class VirtualKeyboardInputContextPlugin

//------------------------------------------------------------------------------
#endif // VIRTUALKEYBOARDINPUTCONTEXTPLUGIN_H
