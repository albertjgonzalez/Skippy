/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class StutterAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    StutterAudioProcessorEditor (StutterAudioProcessor&);
    ~StutterAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    StutterAudioProcessor& audioProcessor;

    juce::Slider midiVolume; // [1]

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (StutterAudioProcessorEditor)
};
