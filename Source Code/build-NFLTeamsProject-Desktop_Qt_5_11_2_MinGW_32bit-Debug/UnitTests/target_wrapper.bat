@echo off
SetLocal EnableDelayedExpansion
(set PATH=Q:\Qt\5.11.2\mingw53_32\bin;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=Q:\Qt\5.11.2\mingw53_32\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=Q:\Qt\5.11.2\mingw53_32\plugins
)
%*
EndLocal
